//
// Created by N on 2021/03/07.
// while 문
//

#include "Step4.h"
#include <iostream>
#include <vector>

using namespace std;

// A + B - 5
void Step4::aPlusB5() {
    int a, b;
    int sum;
    while(true) {
        cin >> a >> b;
        if (a == 0 && b == 0) {
            break;
        }
        else {
            cout << a + b << endl;
        }
    }
}

// A + B - 4
//void Step4::aPlusB4() {
//    int a, b;
//    vector<int> aVector;
//    vector<int> bVector;
//    int cnt = 0;
//    while(cnt < 5) {
//        cin >> a >> b;
//        aVector.push_back(a);
//        bVector.push_back(b);
//        cnt++;
//    }
//
//    for (int i = 0; i < cnt; i++) {
//        cout << aVector[i] + bVector[i] << endl;
//    }
//}

// 더하기 사이클
void Step4::plusCycle() {
    int n;
    int newN;

    int cnt = 0;
    cin >> n;

    int a, b;

    a = n / 10;
    b = n % 10;
    int sum = a + b;
    newN = b * 10 + sum % 10;
    cnt++;

    while (n != newN) {

        a = newN / 10;
        b = newN % 10;
        sum = a + b;
        newN = b * 10 + sum % 10;
        cnt++;
    }

    cout << cnt;

}


