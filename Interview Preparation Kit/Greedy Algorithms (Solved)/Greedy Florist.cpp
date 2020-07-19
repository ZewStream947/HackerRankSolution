#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    unsigned int minimumCost = 0;

    int groupMembers, flowers, index = 0;

    cin >> flowers >> groupMembers;

    int cost[flowers];

    for (index = 0; index < flowers; ++index) cin >> cost[index];

    sort(cost, cost + flowers, greater<int>());

    for (index = 0; index < flowers; ++index)
        minimumCost += (index / groupMembers + 1) * cost[index]; 

    cout << minimumCost;

    return 0;
}