#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> getAllSubStrings(string str) {

    int n = str.length();
    vector<string> subStrings; 
    string strTemp;
    
    for (int len = 1; len < n; ++len) 
        for (int i = 0; i <= n - len; ++i) {
            strTemp = str.substr(i, len);
            sort(strTemp.begin(), strTemp.end());
            subStrings.push_back(strTemp);
        }
    sort(subStrings.begin(), subStrings.end());
    return subStrings;
}

bool areAnagram(string str1, string str2) {
    
    if (str1.length() != str2.length()) return false;   
    return str1 == str2;
}

int countAnagrams(string str) {
    
    vector<string> subStrings = getAllSubStrings(str);
    int i = 0, j, count = 0, n = subStrings.size();
    string currCompare;
    
    while (i < n - 1) {
        j = i + 1;
        currCompare = subStrings.at(i);
        while (j < n && areAnagram(currCompare, subStrings.at(j))) {
            ++count;
            ++j;
        }
        ++i;
    } 
    
    return count;
}

int main() {

    int testCase;
    string str;
    cin >> testCase;
    while (testCase > 0) {
        cin >> str;
        cout << countAnagrams(str) << endl;
        --testCase;
    }
    return 0;
}