#include <iostream>

using namespace std;

int main() {
    int n, clouds[101]; cin >> n;    for (int i = 0; i < n; ++i) cin >> clouds[i];
    int i = 0, count = 0;
    while (i < n - 1) {
        if (clouds[i + 2] == 0 && i + 2 <= n)  i += 2; else ++i;
        ++count;
    } 
    cout << count;
    return 0;
}

