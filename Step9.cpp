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
