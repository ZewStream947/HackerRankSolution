#include <iostream>

using namespace std;

int main() {
    
    int maxSum = -64, arr[6][6];
    
    for (int i = 0; i < 6; ++i) 
        for (int j = 0; j < 6; ++j) cin >> arr[i][j];
    
    for (int i = 1; i < 5; ++i)
        for (int j = 1; j < 5; ++j) {
            maxSum = max(maxSum, arr[i][j] + arr[i - 1][j] + arr[i + 1][j] + arr[i - 1][j - 1] + arr[i - 1][j + 1] + arr[i + 1][j - 1] + arr[i + 1][j + 1]);
        }
    
    cout << maxSum;

    return 0;
}