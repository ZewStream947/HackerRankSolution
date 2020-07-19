#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {

    int arrSize, index, minAbsolute = (int) 1e9 + 1;

    cin >> arrSize;

    vector <int> arr(arrSize);

    for (index = 0; index < arrSize; ++index) cin >> arr[index];

    sort(arr.begin(), arr.end());

    for (index = 1; index < arrSize; ++index) minAbsolute = min(minAbsolute, abs(arr[index] - arr[index - 1]));

    cout << minAbsolute;

    return 0;
}