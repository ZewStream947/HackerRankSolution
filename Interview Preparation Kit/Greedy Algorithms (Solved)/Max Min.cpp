#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int minUnfairness = (int) 1e9 + 1; 

    int arrSize, subarrSize, index;

    cin >> arrSize >> subarrSize;

    int arr[arrSize];

    for (index = 0; index < arrSize; ++index) cin >> arr[index];

    sort(arr, arr + arrSize);

    arrSize -= subarrSize;

    for (index = 0; index <= arrSize; ++index)
        minUnfairness = min(minUnfairness, arr[index + subarrSize - 1] - arr[index]);

    cout << minUnfairness;

    return 0;
}