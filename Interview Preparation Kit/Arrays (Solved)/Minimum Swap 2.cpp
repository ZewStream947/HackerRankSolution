#include <iostream>

using namespace std;

int main()
{
    int n, arr[100001], trace[100001], count = 0, i;
    cin >> n;
    for (i = 1; i <= n; ++i) {
        cin >> arr[i];
        trace[arr[i]] = i;
    }
    for (i = 1; i <= n; ++i) 
        if (arr[i] != i) {
            swap(arr[i], arr[trace[i]]);
            ++count;
            swap(trace[i], trace[arr[trace[i]]]);
        }
    cout << count << endl;
    return 0;
}
