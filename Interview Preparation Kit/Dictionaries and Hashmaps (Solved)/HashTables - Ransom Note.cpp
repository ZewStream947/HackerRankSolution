#include <iostream>
#include <map>

using namespace std;

int main() {    
    int n, m, count = 0;
    string str;
    cin >> n >> m;
    map <string, int> magazine;
    while (n > 0)
    {
        cin >> str;
        if (magazine.find(str) == magazine.end()) 
            magazine.insert(make_pair(str, 1)); else
            ++magazine.at(str);
        --n;
    }
    map <string, int>::iterator it = magazine.end();
    for (int index = 0; index < m; ++index) {
        cin >> str;
        if (magazine.find(str) != it && magazine.at(str) > 0) {
            ++count;
            --magazine.at(str);
        } else break;
    }
    if (count == m) cout << "Yes"; else cout << "No"; 
    return 0;
}