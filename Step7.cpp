//
// Created by N on 2021/03/11.
// 문자열
//

#include "Step7.h"
#include <iostream>

using namespace std;

// 아스키 코드
void Step7::Ascii() {
    char a;
    cin >> a;
    cout << (int)a;
}

// 숫자의 합
void Step7::sumNumbers() {
    int n;
    cin >> n;

    char num[n];
    cin >> num;

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += num[i] - '0';
    }

    cout << sum;
}

// 알파벳 찾기

bool isInStr(int i, char *str) {
    for (int j = 0; (int)str[j] != 0; j++) {
        if (i == (int)str[j]) {
            cout << j << ' ';
            return true;
        }
    }
    return false;
}
void Step7::findAlphabet() {
    char str[100];

    cin >> str;
    for (int i = 97; i < 123; i++) {
        if (isInStr(i, str)) continue;
        else cout << -1 << ' ';
    }
}

// 문자열 반복
void Step7::repeatCharArr() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int m;
        char str[20];
        cin >> m >> str;

        for (int i = 0; (int)str[i] != 0; i++) {
            for (int j = 0; j < m; j++) {
                cout << str[i];
            }
        }
        cout << '\n';
    }
}

// 단어 공부
void Step7::wordStudy() {
    char str[1000000];
    cin >> str;
    int cnt[26];

    for (int i = 0; str[i] != '\0'; i++) {
        if ((int)str[i] >= 97) {
            cnt[(int)str[i] - 97]++;
        }
        else {
            cnt[(int)str[i] - 65]++;
        }
    }
    int maxIdx;
    int max = 0;
    int flag;
    for (int i = 0; i < 26; i++) {
        if (max < cnt[i]) {
            max = cnt[i];
            maxIdx = i;
            flag = 1;
        }
        else if (max == cnt[i]) {
            flag = 0;
        }
    }

    if (flag == 0) {
        cout << '?';
    }
    else {
        cout << (char)(maxIdx + 65);
    }
}
