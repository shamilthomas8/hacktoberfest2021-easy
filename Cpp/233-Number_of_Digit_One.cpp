long long countDigitOne(int n) {
    
    long long ans(0);
    for (long long i = 1; i <= n; i *= 10) {
        long long temp = i * 10;
        ans += min(i, max((n % temp) + 1 - i, 0ll));
        ans += (n / temp) * i; 
    }
    return ans;    
}
