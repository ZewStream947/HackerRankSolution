#include <iostream>
#include <string>

using namespace std;

int main()
{
    int testCase, strLength, index, count = 0;
    string str;

    cin >> testCase;

    cin.ignore();

    while (testCase--) {
        getline(cin, str);
        strLength = str.length();
        for (index = 1; index < strLength; ++index)
            if (str[index] == str[index - 1]) ++count;
        cout << count << endl;
        count = 0;
    }

    return 0;
}
