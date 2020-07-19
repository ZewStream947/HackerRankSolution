#include <iostream>
#include <string>
#include <cmath>
#include <unordered_map>

using namespace std;

int main() {

    int index, count = 0;
    char c;
    string str1, str2;
    unordered_map <char, int> str1Char, str2Char;

    for (c = 'a'; c <= 'z'; ++c) str1Char[c] = str2Char[c] = 0;

    getline(cin, str1);
    getline(cin, str2);

    int str1Length = str1.length(),
        str2Length = str2.length();

    for (index = 0; index < str1Length; ++index) ++str1Char[str1[index]];
    for (index = 0; index < str2Length; ++index) ++str2Char[str2[index]];

    for (c = 'a'; c <= 'z'; ++c)
        count += abs(str1Char[c] - str2Char[c]);
    
    cout << count;
}