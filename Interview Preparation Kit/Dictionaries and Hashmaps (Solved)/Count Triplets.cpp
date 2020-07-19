#include <iostream>
#include <unordered_map>

using namespace std;

int main() {

    int n, r, value;
    long counter = 0;
    unordered_map<int, long> secondPart, completePart;
    
    cin >> n >> r;

    while (n--) {
        
        cin >> value;

        if (completePart.count(value)) counter += completePart[value];
        if (secondPart.count(value)) completePart[value * r] += secondPart[value];
        ++secondPart[value * r]; 
    }

    cout << counter;
    
    return 0;
}
