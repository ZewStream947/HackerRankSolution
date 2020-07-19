#include <iostream>
#include <string>

using namespace std;

long RepeatedString(long n, string st) {
    int aCount = 0, x = st.length();
    for (int i = 0; i < x; ++i)
        if (st[i] == 'a') ++aCount;
    long res = n / x * aCount; n %= x;
    for (int i = 0; i < n; ++i) 
        if (st[i] == 'a') ++res;
    return res;
}

int main()
{
    long n;
    string st;
    getline(cin, st);
    cin >> n;
    cout << RepeatedString(n, st);
    return 0;
}
