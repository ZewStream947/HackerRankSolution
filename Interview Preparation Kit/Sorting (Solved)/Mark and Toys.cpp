#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int i, n, r, toys = 0, temp = 0;
    
    cin >> n >> r;
    vector<int> arr(n, 0);

    for (i = 0; i < n; ++i) cin >> arr.at(i);

    sort(arr.begin(), arr.end());

    i = 0;
    while ((i < n) && ((temp += arr.at(i)) < r)) {
        ++toys;
        ++i;
    }

    cout << toys;

    return 0;
}