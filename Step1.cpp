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
    cout << "강한친구 대한육군" << endl << "강한친구 대한육군";
}


// 고양이
void Step1::Cat() {
    cout << "\\    /\\" << endl
         << " )  ( \')" << endl
         << "(  /  )" << endl
         << " \\(__)|" << endl;
}

// 개
void Step1::Dog() {
    cout    << "|\\_/|" << endl
            << "|q p|   /}" << endl
            << "( 0 )\"\"\"\\" << endl
            << "|\"^\"`    |" << endl
            << "||_/=\\\\__|" << endl;
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
    cout << a + b << endl
            << a - b << endl
            << a * b << endl
            << a / b << endl
            << a % b << endl;
}

// 나머지
void Step1::Remainder() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << (a + b) % c << endl
         << ((a % c) + (b % c)) % c << endl
         << (a * b) % c << endl
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
    cout << calResult << endl;
    b /= 10;

    calResult = a * (b % 10);
    sum += calResult * 10;
    cout << calResult << endl;
    b /= 10;

    calResult = a * (b % 10);
    sum += calResult * 100;
    cout << a * (b % 10) << endl << sum;
}



