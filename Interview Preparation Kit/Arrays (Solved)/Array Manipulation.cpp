#include <iostream>
#include <vector>

using namespace std;

int main() {

    int n, m, first, last, summand;
    long int arrSum = 0, result = 0;
    cin >> n >> m;
    vector<long> arr(n + 1, 0);
    
    while (m--) {
        cin >> first >> last >> summand;
        arr.at(first) += summand;
        if (last + 1 <= n) arr.at(last + 1) -= summand;
    }

    for (int i = 1; i <= n; ++i) {
        arrSum += arr.at(i);
        if (arrSum > result) result = arrSum;
    }
    cout << result;

    return 0;
}