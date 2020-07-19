#include <iostream>
#include <unordered_map>

using namespace std;

string isValidString(string str) {

    int strLen = str.length(),
        index = 0,
        count[26] = {0},
        minPos = 0,
        maxPos = 0,
        maxCount = 0,
        minCount = 0,
        charsCount = 0;
    
    for (; index < strLen; ++index)
        if (count[str[index] - 'a']++ == 0) ++charsCount;


    for (index = 1; index <= 25; ++index)
        if (count[index] > 0) {
            if (count[index] > count[maxPos]) maxPos = index;
            if (count[index] < count[minPos] || count[minPos] == 0) minPos = index;
        }
    
    for (index = 0; index <= 25; ++index)
        if (count[index] > 0)
            if (count[index] == count[maxPos]) ++maxCount; else
            if (count[index] == count[minPos]) ++minCount;

    if (maxCount + minCount == charsCount) {
        if (minCount == 0) return "YES";
        if (maxCount == 1 || minCount == 1) {
            if (count[maxPos] - count[minPos] == 1 || (count[minPos] == 1 && minCount == 1)) return "YES"; else return "NO";
        } return "NO";
    } else return "NO";
}

int main() {

    string str;

    cin >> str;

    cout << isValidString(str);

    return 0;
}