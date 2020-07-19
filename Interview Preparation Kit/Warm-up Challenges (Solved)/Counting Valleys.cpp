#include <iostream>
using namespace std;

int main()
{
    int n, count = 0, res = 0;
    char first, ct[1000001];
    
    cin >> n;
    cin >> ct;
    for (int i = 0; i < n; ++i) {
        if (count == 0) first = ct[i];
        (ct[i] == 'U') ? ++count : --count;
        if (count == 0 && first == 'D') ++res;
    }
    cout << res;
    return 0;
}
