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
