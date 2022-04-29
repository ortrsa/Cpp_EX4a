#include "Game.hpp"

namespace coup{

Game::Game(){};
Game::~Game(){};

vector <string> Game::players()  {
    return p_players;
};
string Game::turn(){
    return p_turn;
};
string Game::winner(){
    return p_winner;
};
}