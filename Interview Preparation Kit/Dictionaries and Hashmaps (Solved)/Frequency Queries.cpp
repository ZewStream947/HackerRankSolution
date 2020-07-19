#include <iostream>
#include <unordered_map>

using namespace std;

int main() {

    long queries, number, n;
    unordered_map<long, long long> data, save;
    
    cin >> n;

    while (n--) {
        
        cin >> queries >> number;

        switch (queries) {
            case 1:
                if (save[data[number]] > 0) --save[data[number]]; 
                ++data[number]; 
                ++save[data[number]];
                break;
            case 2:
                if (data[number] > 0) {
                    if (save[data[number]] > 0) --save[data[number]]; 
                    --data[number];
                    ++save[data[number]];
                }
                break;
            case 3:
                cout << ((save[number] > 0) ? '1' : '0' ) << endl;
                break;
        }
    }
    
    return 0;
}