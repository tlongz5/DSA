#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1000000007;
const int MX = 100000;

long long fact[MX];
long long invFact[MX];

long long qpow(long long x, long long n) {
    long long res = 1;
    while (n > 0) {
        if (n & 1) res = res * x % MOD;
        x = x * x % MOD;
        n >>= 1;
    }
    return res;
}

void initFact() {
    static bool prepared = false;
    if (prepared) return;
    fact[0] = 1;
    for (int i = 1; i < MX; ++i)
        fact[i] = fact[i - 1] * i % MOD;
    invFact[MX - 1] = qpow(fact[MX - 1], MOD - 2);
    for (int i = MX - 1; i > 0; --i)
        invFact[i - 1] = invFact[i] * i % MOD;
    prepared = true;
}

long long comb(int n, int m) {
    if (m < 0 || m > n) return 0;
    return fact[n] * invFact[m] % MOD * invFact[n - m] % MOD;
}

long long countGoodArrays(int n, int m, int k) {
    initFact();
    long long ways = comb(n - 1, k);
    ways = ways * m % MOD;
    ways = ways * qpow(m - 1, n - k - 1) % MOD;
    return ways;
}

