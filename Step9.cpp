//
// Created by N on 2021/03/29.
//

#include "Step9.h"
#include <iostream>

using namespace std;

// 소수 찾기
bool isPrimeNumber(int n) {
    if (n == 1) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}
void Step9::countPrimeNumbers() {
    int t, n;

    cin >> t;
    int cnt = 0;
    for (int i = 0; i < t; i++) {
        cin >> n;
        if (isPrimeNumber(n)) cnt++;
    }
    cout << cnt;
}

// 소수
void Step9::findMinAndSum() {
    int m, n;
    cin >> m >> n;

    int sum = 0;
    int min = n + 1;
    for (int i = m; i <=n; i++) {
        if (isPrimeNumber(i)) {
            sum += i;
            if (min > i) {
                min = i;
            }
        }
    }

    if (sum != 0) cout << sum << endl << min;
    else cout << -1;
}

// 소인수분해
void Step9::factorization() {
    int n;
    cin >> n;
    for (; n != 1;) {
        for (int i = 2; i <= n; i++) {
            if (n % i == 0) {
                n /= i;
                cout << i << endl;
                break;
            }
        }
    }
}


