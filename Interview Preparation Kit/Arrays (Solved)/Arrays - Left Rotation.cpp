#include <iostream>

using namespace std;

int main() {
    int n, d, arr[100001];
    cin >> n; cin >> d;
    for (int i = 1; i <= n; ++i) cin >> arr[i];
    for (int i = d + 1; i <= n; ++i) cout << arr[i] << ' ';
    for (int i = 1; i <= d; ++i) cout << arr[i] << ' ';
    return 0;
}