#include <iostream>
#include <vector>
#pragma once
using std::string;
using std::vector;

namespace coup
{
    class Game
    {

    private:
        string p_turn;
        vector<string> p_players;
        string p_winner;
    
    public:
        string turn();
        vector <string> players();
        string winner();
        Game();
        ~Game();
    };
}