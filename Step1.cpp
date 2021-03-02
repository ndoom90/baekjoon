//
// Created by N on 2021/02/28.
//

#include "Step1.h"
#include "iostream"

using namespace std;

// Input and output and four arithmetic operations
class Solution1
{
public:
    // Hello World
    void HelloWorld() {
        cout << "Hello World!";
    }

    // We love kriii
    void WeLoveCriii() {
        cout << "강한친구 대한육군" << endl << "강한친구 대한육군";
    }

    // 고양이
    void Cat() {
        cout << "\\    /\\" << endl
             << " )  ( \')" << endl
             << "(  /  )" << endl
             << " \\(__)|" << endl;
    }

    // 개
    void Dog() {
        cout    << "|\\_/|" << endl
                << "|q p|   /}" << endl
                << "( 0 )\"\"\"\\" << endl
                << "|\"^\"`    |" << endl
                << "||_/=\\\\__|" << endl;
    }

    // A + B
    void Plus() {
        int a, b;
        cin >> a >> b;
        cout << a + b;
    }

    // A - B
    void Minus() {
        int a, b;
        cin >> a >> b;
        cout << a - b;
    }

    // A * B
    void Multiply() {
        int a, b;
        cin >> a >> b;
        cout << a * b;
    }

    // A / B
    void Division() {
        double a, b;
        cin >> a >> b;

        printf("%.11f", a / b);
    }

    // 사칙연산
    void FourRulesCalculations() {
        int a, b;

        cin >> a >> b;
        cout << a + b << endl
                << a - b << endl
                << a * b << endl
                << a / b << endl
                << a % b << endl;
    }

    // 나머지
    void Remainder() {
        int a, b, c;
        cin >> a >> b >> c;
        cout << (a + b) % c << endl
             << ((a % c) + (b % c)) % c << endl
             << (a * b) % c << endl
             << ((a % c) * (b % c)) % c;
    }

    // 곱셈
    void Multiplication() {
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
};


