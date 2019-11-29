#include <bits/stdc++.h>
using namespace std;
int main() {
    long n, k;
    cin >> n;
    cin >> k;
    long s[n];
    for (long i = 0; i < n; i++) {
        cin >> s[i];
    }
    long jLast = 0;
    for (long i = 0; i < n; i++) {
        if (s[i] < 0) {
            continue;
        } else {
            long p=min(i + k + 1, n);
            for (long j = jLast; j < p; j++) {
                if (s[j] > 0) {
                    continue;
                }
                if ((s[i]) > 0 && (s[j]) < 0) {
                    long x = min(s[i] , -s[j]);
                    s[i] -= x;
                    s[j]+= x;
                }
                jLast = j;
                if ((s[i]) <= 0) {
                    break;
                }
            }
        }
    }
    long sum = 0;
    for (long i = 0; i < n; i++) {
        sum = sum + abs(s[i]);
    }
    cout << sum;

}