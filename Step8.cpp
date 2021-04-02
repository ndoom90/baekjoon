//
// Created by N on 2021/03/13.
// 기본 수학 1
//

#include "Step8.h"
#include <iostream>
#include <string>

using namespace std;

void Step8::Bep() {
    int a, b, c;
    cin >> a >> b >> c;

    int cnt = 0;

    if (b - c >= 0) {
        cout << -1;
        return;
    }

    while (a / (c - b) >= cnt) {
        cnt++;
    }
    cout << cnt;
    return;
}

// 벌집
void Step8::honeyComb() {
    int n;
    cin >> n;

    int sum = 1;
    for (int i = 0;;i++) {
        sum += i * 6;
        if (n <= sum) {
            cout << i + 1;
            return;
        }
    }
}

// 분수 찾기
void Step8::findFraction() {
    int n;
    cin >> n;

    int denominator, numerator;
    string result;
    for (int i = 1;;i++) {
        n -= i;
        if (n <= 0) {
            if (i % 2 != 0) {
                denominator = i + n;
                numerator = 1 - n;
                cout << to_string(numerator) + "/" + to_string(denominator);
                return;
            }
            denominator = 1 - n;
            numerator = i + n;
            cout << to_string(numerator) + "/" + to_string(denominator);
            return;
        }
    }
}

// 달팽이는 올라가고 싶다
void Step8::snail() {
    int a, b, v;
    cin >> a >> b >> v;

    if ((v - a) % (a - b) != 0) cout << (v - a) / (a - b) + 2;
    else cout << (v - a) / (a - b) + 1;
}

// ACM 호텔
void Step8::acmHotel() {
    int t;
    int h, w, n;
    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> h >> w >> n;

        if (n % h != 0) {
            cout << (100 * (n % h)) + (n / h + 1) << '\n';
        }
        else {
            cout << 100 * h + (n / h) << '\n';
        }
    }
}

// 부녀회장이 될테야
int sumArr(int arr[][14], int k, int n) {
    int sum = 0;
    for (int i = 0; i <= n; i++) {
        sum += arr[k - 1][i];
    }
    return sum;
}

void Step8::womanChairman() {
    int t, k, n;

    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> k >> n;
        int arr[15][14];
        for (int j = 0; j <= k; j++) {
            for (int m = 0; m < n; m++) {
                if (j == 0) arr[j][m] = m + 1;
                else {
                    arr[j][m] = sumArr(arr, j, m);
                }
            }
        }

        cout << arr[k][n - 1] << '\n';
    }
}

// 설탕 배달
void Step8::sugarDelivery() {
    int n;
    cin >> n;

    for (int i = n / 5; i >= 0; i--) {
        if (n % 5 == 0) {
            cout << i;
            return;
        }
        for (int j = (n - i * 5) / 3; j <= n / 3; j++){
            if (i * 5 + j * 3 == n) {
                cout << i + j;
                return;
            }
        }
    }
    cout << -1;
    return;
}

// 큰수 A + B
void calLeftNumbers(string str, char result[], int &index, int &resultIndex, int &temp) {
    while (index != 0) {
        if (temp != 0) {
            int sum = str[--index] - '0' + temp;
            temp--;
            if (sum > 9) {
                temp++;
                result[--resultIndex] = sum + '0' - 10;
            }
            else result[--resultIndex] = sum + '0';
        }
        else {
            result[--resultIndex] = str[--index];
        }
    }
}
void Step8::plusBigNumbers() {
    string a, b;
    cin >> a >> b;

    int temp = 0;
    int aIndex = a.size();
    int bIndex = b.size();
    int resultIndex = a.size() >= b.size() ? a.size() : b.size();
    int bigIndex = a.size() >= b.size() ? a.size() : b.size();
    char result[resultIndex];
    while (aIndex != 0 && bIndex != 0) {
        if (temp != 0) {
            int sum = a[--aIndex] + b[--bIndex] - '0' * 2 + temp;
            temp--;
            if (sum > 9) {
                temp++;
                result[--resultIndex] = sum + '0' - 10;
            }
            else result[--resultIndex] = sum + '0';
        }
        else {
            int sum = a[--aIndex] + b[--bIndex] - '0' * 2;
            if (sum > 9) {
                temp++;
                result[--resultIndex] = sum + '0' - 10;
            }
            else result[--resultIndex] = sum + '0';
        }
    }
    if (aIndex == 0) calLeftNumbers(b, result, bIndex, resultIndex, temp);
    else calLeftNumbers(a, result, aIndex, resultIndex, temp);


    if (temp != 0) {
        cout << 1;
        for (int i = 0; i < bigIndex; i++) {
            cout << result[i];
        }
    }
    else {
        for (int i = 0; i < bigIndex; i++) {
            cout << result[i];
        }
    }
}

// Fly me to the Alpha Centauri
void Step8::teleport() {
    int t, x, y;
    cin >> t;
    int distance;
    for (int i = 0; i < t; i++) {
        cin >> x >> y;

        int n;
        if ((y - x) % 2 != 0) {
            // Find n2 = y - x
            for (int i = 0;; i++) {
                if (n = sqrt(y - x)) {
                    cout << n << '\n';
                    return;
                }
            }
        }

        else {
            // Find n2 = y - x or n2 + n = y - x
        }
    }
}