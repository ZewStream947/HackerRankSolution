#include <iostream>
#include <map>

using namespace std;

int main() {

    int n;
    string str1, str2;
    bool ok; 
    cin >> n;
    while (n > 0) {
        cin >> str1 >> str2;
        ok = false;
        for (char c = 'a'; c <= 'z'; ++c) 
            if (str1.find(c) != string::npos && str2.find(c) != string::npos) {
                cout << "YES" << endl;
                ok = true;
                break;
            }
        if (ok == false) cout << "NO" << endl; 
        --n;
    }
    return 0;
}