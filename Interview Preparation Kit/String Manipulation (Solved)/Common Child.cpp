#include <iostream>

using namespace std;

int dp[5001][5001];

int LCS(string str1, string str2) {
    
    int str1Len = str1.length(), str2Len = str2.length(), index1, index2;    

    for (index1 = 0; index1 <= str1Len; ++index1) dp[0][index1] = 0;
    for (index1 = 0; index1 <= str2Len; ++index1) dp[index1][0] = 0;

    for (index1 = 1; index1 <= str1Len; ++index1)
         for (index2 = 1; index2 <= str2Len ; ++index2) 
            dp[index1][index2] = ((str1[index1 - 1] == str2[index2 - 1]) ? dp[index1 - 1][index2 - 1] + 1: max(dp[index1][index2 - 1], dp[index1 - 1][index2]));
            
    return dp[str1Len][str2Len];
}

int main() {

    string str1, str2;

    cin >> str1 >> str2;

    cout << LCS(str1, str2);

    return 0;
}