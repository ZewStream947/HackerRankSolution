#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void countBribed(vector<int> queue) {
    int count = 0;
    for (int i = queue.size() - 1; i >= 0; --i) {
        if (queue[i] - (i + 1) > 2) {
            cout << "Too chaotic" << endl; 
            return;
        }
        for (int j = max(0, queue[i] - 2); j < i; ++j)
            if (queue[j] > queue[i]) ++count;
    }
    cout << count << endl;
}

int main()
{
    int testCase, n, x;
    cin >> testCase;
    vector<int> queue;
    while (testCase > 0) {
        cin >> n; queue.clear();
        for (int i = 0; i < n; ++i) {
            cin >> x;
            queue.push_back(x);
        }
        countBribed(queue);
        --testCase;
    }
    return 0;
}