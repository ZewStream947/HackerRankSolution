#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{

    int sets, money, size, cost, index;
    unordered_map<int, int> pos;
    bool solved;
    
    cin >> sets;
    
    while (sets--) {
        
        pos.clear(); solved = false;
        
        cin >> money >> size;

        for (index = 0; index < size; ++index) {
            
            cin >> cost;

            if (pos.count(money - cost)) {
                if (!solved) {
                    cout << pos[money - cost] + 1 << ' ' << index + 1 << endl;
                    solved = true;
                }
            } else pos[cost] = index;
        }
        
    }

    return 0;
}
