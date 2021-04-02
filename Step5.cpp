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

// 평균
void Step5::average() {
    int n;
    cin >> n;
    int score[n];

    int max = -1;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> score[i];
        sum += score[i];
        if (score[i] > max) max = score[i];
    }

    float avg = (float)(sum * 100) / (float)(n * max);
    cout << avg;
}

// OX 퀴즈
void Step5::oxQuiz() {
    int n;
    cin >> n;

    string strArr[n];
    for (int i = 0; i < n; i++) {
        cin >> strArr[i];
    }

    int score[n];
    for (int i = 0; i < n; i++) {
        int temp = 0;
        score[i] = 0;
        for (int j = 0; j < strArr[i].length(); j++) {
            if (strArr[i][j] == 'O') {
                temp++;
                score[i] += temp;
            }
            else {
                temp = 0;
            }
        }
        cout << score[i] << '\n';
    }
}

// 평균은 넘겟지
void Step5::overAvg() {
    int n;
    cin >> n;

    float avg[n];

    for (int i = 0; i < n; i++) {
        int m;
        cin >> m;
        int nums[m];
        int temp;
        int sum = 0;
        for (int j = 0; j < m; j++) {
            cin >> nums[j];
            sum += nums[j];
        }
        avg[i] = (float)sum / (float)m;

        int cnt = 0;
        for (int j = 0; j < m; j++) {
            if (avg[i] < nums[j]) {
                cnt++;
            }
        }
        float result = (float)cnt * 100 / (float)m;
        printf("%.3f%%\n", result);
    }

}