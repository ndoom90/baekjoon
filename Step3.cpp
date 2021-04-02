//
// Created by N on 2021/03/04.
// For
//

#include "Step3.h"
#include <iostream>

using namespace std;

// 구구단
void Step3::multiplicationTable() {
    int n;
    cin >> n;

    for (int i = 0; i < 9; i++) {
        cout << to_string(n) + " " + "*" + " " + to_string(i + 1) + " " + "=" + " " + to_string(n * (i + 1))<< '\n';
    }
}

// A+B-3
void Step3::aPlusB() {
    int n;
    int a, b;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        cout << a + b << '\n';
    }
}

// 합
void Step3::sum() {
    int n;
    cin >> n;

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += n - i;
    }

    cout << sum;
}

// 빠른 A + B
void Step3::fastAPlusB() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    int a, b;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        cout << a + b << '\n';
    }
}

// N 찍기
void Step3::printN() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << i + 1 << '\n';
    }
}

// 기찍 N
void Step3::printNReverse() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << n - i << '\n';
    }
}

// A + B - 7
void Step3::aPlusB7() {
    int n;
    int a, b;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        cout << "Case #" + to_string(i + 1) + ": " << a + b << '\n';
    }
}

// A + B - 8
void Step3::aPlusB8() {
    int n;
    int a, b;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        cout << "Case #" + to_string(i + 1) + ": " << a << " + " << b << " = " << a + b << '\n';
    }
}

// 별찍기
void Step3::printStars() {
    int n;

    cin >> n;
    string line = "";
    for (int i = 0 ; i < n; i++) {
        line += "*";
        cout << line << '\n';
    }
}

// 별찍기 - 2
void Step3::printStarsRevers() {
    int n;

    cin >> n;

    for (int i = 0 ; i < n; i++) {
        string line = "";
        for (int j = 0; j < n - (i + 1); j++) {
            line += " ";
        }
        for (int j = 0; j < i + 1; j++) {
            line += "*";
        }

        cout << line << '\n';
    }
}

// X보다 작은 수
void Step3::numberSmallerThanX() {
    int n, x;

    cin >> n >> x;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        if (a[i] < x) cout << a[i] << ' ';
        else continue;
    }
}
