//
// Created by N on 2021/03/13.
// 기본 수학 1
//

#include "Step8.h"
#include <iostream>
#include <string>

using namespace std;

void Step8::Bep() {
    int a, b, c;
    cin >> a >> b >> c;

    int cnt = 0;

    if (b - c >= 0) {
        cout << -1;
        return;
    }

    while (a / (c - b) >= cnt) {
        cnt++;
    }
    cout << cnt;
    return;
}

// 벌집
void Step8::honeyComb() {
    int n;
    cin >> n;

    int sum = 1;
    for (int i = 0;;i++) {
        sum += i * 6;
        if (n <= sum) {
            cout << i + 1;
            return;
        }
    }
}

// 분수 찾기
void Step8::findFraction() {
    int n;
    cin >> n;

    int denominator, numerator;
    string result;
    for (int i = 1;;i++) {
        n -= i;
        if (n <= 0) {
            if (i % 2 != 0) {
                denominator = i + n;
                numerator = 1 - n;
                cout << to_string(numerator) + "/" + to_string(denominator);
                return;
            }
            denominator = 1 - n;
            numerator = i + n;
            cout << to_string(numerator) + "/" + to_string(denominator);
            return;
        }
    }
}

// 달팽이는 올라가고 싶다
void Step8::snail() {
    int a, b, v;
    cin >> a >> b >> v;

    if ((v - a) % (a - b) != 0) cout << (v - a) / (a - b) + 2;
    else cout << (v - a) / (a - b) + 1;
}

// ACM 호텔
void Step8::acmHotel() {
    int t;
    int h, w, n;
    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> h >> w >> n;

        if (n % h != 0) {
            cout << (100 * (n % h)) + (n / h + 1) << endl;
        }
        else {
            cout << 100 * h + (n / h) << endl;
        }
    }
}

// 부녀회장이 될테야
void Step8::womanChairman() {
    int t, k, n;

    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> k >> n;

    }
}
