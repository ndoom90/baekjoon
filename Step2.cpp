//
// Created by N on 2021/03/02.
//

#include "Step2.h"
#include <iostream>

using namespace std;

// 두 수 비교하기
void Step2::compareTwoNumber() {
    int a, b;

    cin >> a >> b;

    if (a > b) {
        cout << ">";
    }

    else if (a < b) {
        cout << "<";
    }

    else {
        cout << "==";
    }
}

// 시험 성적
void Step2::testScore() {
    int score;

    cin >> score;

    if (score <= 100 && score >=90) {
        cout << "A";
    }
    else if (score < 90 && score >=80) {
        cout << "B";
    }
    else if (score < 80 && score >= 70) {
        cout << "C";
    }
    else if (score < 70 && score >= 60) {
        cout << "D";
    }
    else {
        cout << "F";
    }
}

// 윤년
void Step2::leapYear() {
    int year;

    cin >> year;

    if ((year%4 == 0 && year%100 != 0) || year % 400 == 0) {
        cout << 1;
    }

    else {
        cout << 0;
    }
}

// 사분면 고르기
void Step2::pickQuadrant() {
    int x, y;

    cin >> x >> y;

    if (x > 0 && y > 0) {
        cout << 1;
    }

    else if (x < 0 && y > 0) {
        cout << 2;
    }

    else if (x < 0 && y < 0) {
        cout << 3;
    }

    else {
        cout << 4;
    }
}

// 알람 시계
void Step2::alarmClock() {
    int h, m;
    cin >> h >> m;
    m = m - 45;
    if (m < 0)
    {
        m = 60 + m;
        h = h - 1;
    }

    if (h < 0) {
        h = 23;
    }

    cout << h << m;
}
