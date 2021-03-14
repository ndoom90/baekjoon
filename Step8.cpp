//
// Created by N on 2021/03/13.
// 기본 수학 1
//

#include "Step8.h"
#include <iostream>

using namespace std;

bool isNotHaveBep(int a, int b, int c, int &cnt) {
    long long price = a + b * cnt;
    long long cost = c * cnt;

    long long priceBefore = a + b * (cnt - 1);
    long long costBefore = c * (cnt - 1);

    while (price >= cost) {
        if (price - cost >= priceBefore - costBefore) return false;
        cnt++;
        price = a + b * cnt;
        cost = c * cnt;

        priceBefore = a + b * (cnt - 1);
        costBefore = c * (cnt - 1);
    }
    return true;
}
void Step8::Bep() {
    int a, b, c;
    cin >> a >> b >> c;

    int cnt = 0;

    bool result = isNotHaveBep(a, b, c, cnt);
    if (result) {
        cout << cnt;
        return;
    }
    cout << -1;
    return;
}
