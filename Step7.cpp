//
// Created by N on 2021/03/11.
// 문자열
//

#include "Step7.h"
#include <iostream>
#include <vector>

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

// 단어의 개수
void Step7::nWords() {
    char str[1000000];
    cin.getline(str, 1000000);

    int cnt = 0;
    for (int i = 0; i <= 1000000; i++) {
        if (i != 0 && str[i] == ' ') {
            cnt++;
            continue;
        }

        else if (str[i] == '\0' && str[i - 1] != ' ') {
            cnt++;
            break;
        }

        else if (str[i] == '\0' && str[i - 1] == ' ') {
            break;
        }
    }

    cout << cnt;
}

bool isBig(string &a, string &b) {
    int index;
    for (int i = 0 ; i < 3; i++) {
        index = 2 - i;
        if ((int)a[index] > (int)b[index]) return true;
        else if((int)a[index] < (int)b[index]) return false;
        else continue;
    }
}
// 상수
void Step7::sangSoo() {
    string a;
    string b;

    cin >> a;
    cin >> b;

    if (isBig(a, b)) {
        cout << a[2] << a[1] << a[0];
    }
    else {
        cout << b[2] << b[1] << b[0];
    }

}

// 다이얼

void Step7::dial() {
    char str[16];
    int sum = 0;
    cin >> str;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'O') {
            sum += (str[i] - 'A') / 3 + 3;;
            continue;
        }
        else if (str[i] >= 'P' && str[i] <= 'S') {
            sum += (str[i] - 'P') / 4 + 8;
        }
        else if (str[i] >= 'T' && str[i] <= 'V') {
            sum += (str[i] - 'T') / 3 + 9;
        }
        else {
            sum += (str[i] - 'W') / 4 + 10;
        }
    }

    cout << sum;
}

// 크로아티아 알파벳
void Step7::croatiaAlphabet() {
    char str[101];
    cin >> str;

    int cnt = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i+1] == '=' || str[i+1] == '-') continue;
        else if(str[i] == 'd' && str[i+1] == 'z' && str[i+2] == '=') continue;
        else if(str[i] == 'l' && str[i+1] == 'j') continue;
        else if(str[i] == 'n' && str[i+1] == 'j') continue;
        cnt++;
    }

    cout << cnt;
}

// 단어 그룹 체커
void Step7::checkWordGroup() {
    int n;
    cin >> n;

    char str[n][101];
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        cin >> str[i];

        // Check isWordGroup
        int flag = 0;
        vector<char> groups;
        for (int j = 0; str[i][j] != '\0'; j++) {

            if (str[i][j] == str[i][j + 1]) continue;
            else {
                flag = 0;
                for (int k = 0; k < groups.size(); k++) {
                    if (groups[k] == str[i][j]) {
                        flag = 1;
                        break;
                    }
                }

                if (flag == 1) break;
                else groups.push_back(str[i][j]);
            }

            if (flag == 1) break;
            else continue;
        }
        if (flag != 1) cnt++;
    }

    cout << cnt;
}



















