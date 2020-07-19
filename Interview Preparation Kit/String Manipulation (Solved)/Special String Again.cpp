#include <iostream>

using namespace std;

long countSStr(string str, int len) {
    
    int dis, temp;
    long count = 0;
    
    for (int index = 0; index < len; ++index) {

        dis = 1;

        while (index - dis >= 0 && index + dis < len && str[index - dis] == str[index - 1] && str[index + dis] == str[index - 1]) {
            ++dis;
            ++count;
        }

        temp = 0;

        while (index + 1 < len && str[index] == str[index + 1]) {
            ++temp;
            ++index;
        }
        
        count += temp * (temp + 1) / 2 ;

    }
    
    return count + len;
}

int main () {
    
    int strLen;
    string str;

    cin >> strLen >> str;

    cout << countSStr(str, strLen);

    return 0;
}