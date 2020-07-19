#include <iostream>
#include <algorithm>

using namespace std;

struct data 
{
    int lucky;
    char important;
};

int main() {

    int size, k, result = 0;

    cin >> size >> k;

    data contests[size];

    for (int index = 0; index < size; ++index) cin >> contests[index].lucky >> contests[index].important;
    
    sort(contests, contests + size, [](const data &first, const data &last) {
        return (first.lucky < last.lucky);
    });

    while (size--)
        if (contests[size].important == '0' || k > 0) {
            result += contests[size].lucky; 
            if (contests[size].important == '1') --k;
        } else result -= contests[size].lucky;
    
    cout << result;

    return 0;
}