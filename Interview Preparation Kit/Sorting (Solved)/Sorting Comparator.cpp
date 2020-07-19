#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;

struct Player {
    int score;
    string name;
};

class Checker{
public:
    static int comparator(Player a, Player b)  {
        if (a.score == b.score) 
            if (a.name == b.name) return 0; else
            return (a.name > b.name) ? -1 : 0;
        return (a.score > b.score) ? 0 : -1;
    }
};

bool compare(Player a, Player b) {
    if(Checker::comparator(a,b) == -1)
        return false;
    return true;
}

int main()
{
    int n, score, i;
    string name;
    vector< Player > players;
    Player player;

    cin >> n;
    
    for(i = 0; i < n; ++i){
        
        cin >> name >> score;
        
        player.name = name, player.score = score;
        players.push_back(player);
    }

    sort(players.begin(), players.end(), compare);
    
    for(i = 0; i < players.size(); ++i)
        cout << players.at(i).name << " " << players.at(i).score << endl;
    
    return 0;
}