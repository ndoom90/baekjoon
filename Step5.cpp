//
// Created by N on 2021/03/07.
// 1차원 배열
//

#include "Step5.h"
#include <iostream>

using namespace std;

// 최소, 최대
void Step5::minMax() {
    int n;
    cin >> n;

    int arr[n];
    int max = -1000001;
    int min = 1000001;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }
    cout << min << " " << max;
}

// 최댓값
void Step5::max() {
    int n = 9;
    int arr[9];

    int max = 0;
    int index;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (max < arr[i]) {
            max = arr[i];
            index = i;
        }
    }
    cout << max << '\n' << index + 1;
}

// 숫자의 개수
void Step5::numberCount() {
    int number = 1;
    int input;
    for (int i = 0; i < 3; i++) {
        cin >> input;
        number *= input;
    }

    int arr[10] = {0};

    do {
        arr[number % 10]++;
        number /= 10;
    } while(number / 10 != 0);
    arr[number]++;

    for (int i = 0; i < 10; i++) {
        cout << arr[i] << '\n';
    }
}

// 나머지
void Step5::remainder() {
    int arr[10];
    int cntArr[42] = { 0 };
    int cnt = 0;
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
        cntArr[arr[i]%42]++;
        if (cntArr[arr[i]%42] == 1) cnt++;
    }

    cout << cnt;

}