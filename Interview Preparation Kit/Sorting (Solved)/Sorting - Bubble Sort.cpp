#include <iostream>
#include <vector>

using namespace std;

int main() {

    int n, x, i, j, counter = 0;
    vector<int> arr;

    cin >> n;

    for (i = 0; i < n; ++i) {
        cin >> x;
        arr.push_back(x);
    }

    for (i = 0; i < n - 1; ++i) 
        for (j = i + 1; j < n; ++j)
            if (arr[j] < arr[i]) {
                swap(arr[i], arr[j]);
                ++counter;
            }
    cout << "Array is sorted in " << counter << " swaps." << endl;
    cout << "First Element: " << arr.front() << endl;
    cout << "Last Element: " << arr.back() << endl;
    return 0;
}