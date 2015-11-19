#include "class.h"
#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <string>
#include <class.h>
#include <QString>
using namespace std;
// Warning, the length of string can't excess maxlen.
#define maxlen 1000000

typedef unsigned int uint;
typedef unsigned char ubyte;
typedef unsigned long long ull;

// rotate
inline ull rrot(ull val, int pos) {
    pos %= 64;
    return ( val >> pos ) | ( val << (64 - pos) );
}

inline ull ch(ull x, ull y, ull z) {
    return (x & y) ^ ((~x) & z);
}

inline ull maj(ull x, ull y, ull z) {
    return (x & y) ^ (x & z) ^ (y & z);
}

inline ull sigma0(ull x) {
    return rrot( x,28 ) ^ rrot( x,34 ) ^ rrot( x,39 );
}

inline ull sigma1(ull x) {
    return rrot( x,14 ) ^ rrot( x,18 ) ^ rrot( x,41 );
}

inline ull sg0(ull x) {
    return rrot(x,1) ^ rrot(x,8) ^ (x>>7);
}

inline ull sg1(ull x) {
    return rrot(x,19) ^ rrot(x,61) ^ (x>>6);
}

char instr[maxlen];

static const ull K[80] = {
    0x428a2f98d728ae22LL, 0x7137449123ef65cdLL,
    0xb5c0fbcfec4d3b2fLL, 0xe9b5dba58189dbbcLL,
    0x3956c25bf348b538LL, 0x59f111f1b605d019LL,
    0x923f82a4af194f9bLL, 0xab1c5ed5da6d8118LL,
    0xd807aa98a3030242LL, 0x12835b0145706fbeLL,
    0x243185be4ee4b28cLL, 0x550c7dc3d5ffb4e2LL,
    0x72be5d74f27b896fLL, 0x80deb1fe3b1696b1LL,
    0x9bdc06a725c71235LL, 0xc19bf174cf692694LL,
    0xe49b69c19ef14ad2LL, 0xefbe4786384f25e3LL,
    0x0fc19dc68b8cd5b5LL, 0x240ca1cc77ac9c65LL,
    0x2de92c6f592b0275LL, 0x4a7484aa6ea6e483LL,
    0x5cb0a9dcbd41fbd4LL, 0x76f988da831153b5LL,
    0x983e5152ee66dfabLL, 0xa831c66d2db43210LL,
    0xb00327c898fb213fLL, 0xbf597fc7beef0ee4LL,
    0xc6e00bf33da88fc2LL, 0xd5a79147930aa725LL,
    0x06ca6351e003826fLL, 0x142929670a0e6e70LL,
    0x27b70a8546d22ffcLL, 0x2e1b21385c26c926LL,
    0x4d2c6dfc5ac42aedLL, 0x53380d139d95b3dfLL,
    0x650a73548baf63deLL, 0x766a0abb3c77b2a8LL,
    0x81c2c92e47edaee6LL, 0x92722c851482353bLL,
    0xa2bfe8a14cf10364LL, 0xa81a664bbc423001LL,
    0xc24b8b70d0f89791LL, 0xc76c51a30654be30LL,
    0xd192e819d6ef5218LL, 0xd69906245565a910LL,
    0xf40e35855771202aLL, 0x106aa07032bbd1b8LL,
    0x19a4c116b8d2d0c8LL, 0x1e376c085141ab53LL,
    0x2748774cdf8eeb99LL, 0x34b0bcb5e19b48a8LL,
    0x391c0cb3c5c95a63LL, 0x4ed8aa4ae3418acbLL,
    0x5b9cca4f7763e373LL, 0x682e6ff3d6b2b8a3LL,
    0x748f82ee5defb2fcLL, 0x78a5636f43172f60LL,
    0x84c87814a1f0ab72LL, 0x8cc702081a6439ecLL,
    0x90befffa23631e28LL, 0xa4506cebde82bde9LL,
    0xbef9a3f7b2c67915LL, 0xc67178f2e372532bLL,
    0xca273eceea26619cLL, 0xd186b8c721c0c207LL,
    0xeada7dd6cde0eb1eLL, 0xf57d4f7fee6ed178LL,
    0x06f067aa72176fbaLL, 0x0a637dc5a2c898a6LL,
    0x113f9804bef90daeLL, 0x1b710b35131c471bLL,
    0x28db77f523047d84LL, 0x32caab7b40c72493LL,
    0x3c9ebe0a15c9bebcLL, 0x431d67c49c100d4cLL,
    0x4cc5d4becb3e42b6LL, 0x597f299cfc657e2aLL,
    0x5fcb6fab3ad6faecLL, 0x6c44198c4a475817LL
};

void sha_512(char *digest, char *str) {
    ull w[80], H[8];
    uint orilen = uint(strlen(str));
    uint chunks_count = (orilen+17)/128;
    if( (orilen+17)%128!=0 ) ++chunks_count;
    ull total_count = orilen * 8;
    ull *filldata = new ull[ chunks_count*16 ];
    memset(filldata, 0, sizeof(ull)*chunks_count*16);

    ubyte *pdata = (ubyte *)filldata;
    uint idx;
    for (idx = 0; idx < orilen; ++idx) {
        pdata[idx+7-idx%8-idx%8] = str[idx];
    }
    pdata[idx+7-idx%8-idx%8] = 0x80;
    ++idx;
    ubyte *pbyte = (ubyte *)&total_count;
    for (uint i = 0, j = 128*chunks_count - 4; i < 8; ++i) {
        if (i==4) j -= 8;
        pdata[j + i] = pbyte[i];
    }

    pbyte = ((ubyte *)filldata) + (128*chunks_count - 8);
    *((ull *)(pbyte)) = total_count;

    H[0] = 0x6a09e667f3bcc908LL;
    H[1] = 0xbb67ae8584caa73bLL;
    H[2] = 0x3c6ef372fe94f82bLL;
    H[3] = 0xa54ff53a5f1d36f1LL;
    H[4] = 0x510e527fade682d1LL;
    H[5] = 0x9b05688c2b3e6c1fLL;
    H[6] = 0x1f83d9abfb41bd6bLL;
    H[7] = 0x5be0cd19137e2179LL;

    for (uint i = 0; i < chunks_count*16; i += 16) {
        ull *puint = &filldata[i];
        for (uint j = 0; j < 16; ++j) {
            w[j] = puint[j];
        }
        for (uint j = 16; j < 80; ++j) {
            w[j] = sg1(w[j-2]) + w[j - 7] + sg0(w[j-15]) + w[j - 16];
        }

        ull a = H[0], b = H[1], c = H[2], d = H[3], e = H[4], f = H[5], g = H[6], h = H[7];

        for (uint j = 0; j < 80; ++j) {
            ull t1 = h + sigma1(e) + ch(e,f,g) + K[j] + w[j];
            ull t2 = sigma0(a) + maj(a,b,c);
            h = g;
            g = f;
            f = e;
            e = d + t1;
            d = c;
            c = b;
            b = a;
            a = t1 + t2;
        }
        H[0] += a, H[1] += b, H[2] += c, H[3] += d, H[4] += e, H[5] += f, H[6] += g, H[7] += h;
    }
    for (int i = 0; i < 8; ++i) {
        sprintf(digest + i*16, "%016I64x", H[i]);
    }
    delete[] filldata;
}

QString make_password(QString PP){
    string P = PP.toStdString();
    char digest[129];
    memset(instr, '\0', sizeof(instr));
    int L = int(P.size());
    for(int i = 0; i < L; i++){
        instr[i] = P[i];
    }
    sha_512(digest, instr);
    std::string Res = "";
    for(int i = 0; i < 128; i++){
        Res += digest[i];
    }
    return QString::fromStdString(Res);
}

