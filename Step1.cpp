//
// Created by N on 2021/02/28.
//

#include "Step1.h"
#include "iostream"

using namespace std;

// Input and output and four arithmetic operations

void Step1::HelloWorld() {
    cout << "Hello World!";
}

// We love kriii
void Step1::WeLoveCriii() {
    cout << "강한친구 대한육군" << '\n' << "강한친구 대한육군";
}


// 고양이
void Step1::Cat() {
    cout << "\\    /\\" << '\n'
         << " )  ( \')" << '\n'
         << "(  /  )" << '\n'
         << " \\(__)|" << '\n';
}

// 개
void Step1::Dog() {
    cout    << "|\\_/|" << '\n'
            << "|q p|   /}" << '\n'
            << "( 0 )\"\"\"\\" << '\n'
            << "|\"^\"`    |" << '\n'
            << "||_/=\\\\__|" << '\n';
}

// A + B
void Step1::Plus() {
    int a, b;
    cin >> a >> b;
    cout << a + b;
}

// A - B
void Step1::Minus() {
    int a, b;
    cin >> a >> b;
    cout << a - b;
}

// A * B
void Step1::Multiply() {
    int a, b;
    cin >> a >> b;
    cout << a * b;
}

// A / B
void Step1::Division() {
    double a, b;
    cin >> a >> b;

    printf("%.11f", a / b);
}

// 사칙연산
void Step1::FourRulesCalculations() {
    int a, b;

    cin >> a >> b;
    cout << a + b << '\n'
            << a - b << '\n'
            << a * b << '\n'
            << a / b << '\n'
            << a % b << '\n';
}

// 나머지
void Step1::Remainder() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << (a + b) % c << '\n'
         << ((a % c) + (b % c)) % c << '\n'
         << (a * b) % c << '\n'
         << ((a % c) * (b % c)) % c;
}

// 곱셈
void Step1::Multiplication() {
    int a, b;
    int sum = 0;
    int calResult;
    cin >> a >> b;

    calResult = a * (b % 10);
    sum += calResult;
    cout << calResult << '\n';
    b /= 10;

    calResult = a * (b % 10);
    sum += calResult * 10;
    cout << calResult << '\n';
    b /= 10;

    calResult = a * (b % 10);
    sum += calResult * 100;
    cout << a * (b % 10) << '\n' << sum;
}



