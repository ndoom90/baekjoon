//
// Created by N on 2021/03/10.
// 함수
//

#include "Step6.h"
#include <iostream>

using namespace std;

// 정수 N개의 합
long long Step6::sum(vector<int> &a) {

    long long sum = 0;

    vector<int>::iterator iter;

    for (iter = a.begin(); iter < a.end(); iter++) {
        sum+= *iter;
    }

    return sum;
}

// 셀프 넘버
int d(int num) {
    int temp = num;
    int result = num;

    while(true) {
        if (temp != 0) {
            result += temp%10;
            temp /= 10;
            continue;
        }
        else break;
    }
    return result;
}
void Step6::selfNumber() {
    const int SIZE = 10000;
    bool arr[SIZE] = { false }; // true로 초기화하는 방법?
    int nextSum;
    for (int i = 0; i < SIZE; i++) {
        // function d
        nextSum = d(i + 1);
        if (nextSum > SIZE) continue;
        else arr[nextSum - 1] = true;
    }

    for (int i = 0; i < SIZE; i++) {
        if (arr[i] == false) {
            cout << i + 1 << endl;
        }
     }
}

// 한수
bool checkHan(int number) {
    int temp = number;
    int arrSize = 0;
    while (temp != 0) {
        temp /= 10;
        arrSize++;
    }

    temp = number;
    int arr[arrSize];
    int i = 0;
    while(temp != 0) {
        arr[i] = temp % 10;
        temp /= 10;
        if (i < 2) {
            i++;
            continue;
        }
        else {
            if (arr[i - 2] - arr[i - 1] != arr[i - 1] - arr[i]) return false;
            i++;
        }

    }
    return true;
}
void Step6::hanNumber() {
    int size;
    cin >> size;
    int arraySize = 0;

    int cnt = 0;

    for (int i = 1; i <= size; i++) {
        if (i < 100) {
        cnt++;
        continue;
        }

        else if(checkHan(i) == true) {
            cnt++;
            continue;
        }
    }
    cout << cnt;
}
