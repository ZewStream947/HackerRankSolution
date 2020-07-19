#include <iostream>
#include <queue>

using namespace std;

double get_median(int counting[], bool isOdd, int median_position) {
    
    int left = 0, count = 0;

    while (count < median_position) count += counting[left++];

    int right = left--;

    if (count > median_position || isOdd) return left * 2; 
    else {
        while (counting[right] == 0) ++right;
        return left + right;
    }
}

int main()
{
    int median_position, expenditure_size, trailing_days, index, temp, counting[201] = {0}; 
    bool isOdd = false;
    queue <int> counting_queue;

    cin >> expenditure_size >> trailing_days;

    if (trailing_days % 2 == 0) {
        median_position = trailing_days / 2;
    } else {
        median_position = (trailing_days / 2) + 1;
        isOdd = true;
    }

    expenditure_size -= trailing_days;

    while (trailing_days--) {
        cin >> temp;
        ++counting[temp];
        counting_queue.push(temp);
    } 

    int notifications = 0;

    while (expenditure_size--) {
        
        cin >> temp;
    
        if (temp >= get_median(counting, isOdd, median_position)) ++notifications;
        
        --counting[counting_queue.front()];
        ++counting[temp];
        counting_queue.pop();
        counting_queue.push(temp);
    }

    cout << notifications;

    return 0;
}
