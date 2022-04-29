#include "Assassin.hpp"
#include "Game.hpp"
using namespace coup;

Assassin::Assassin(Game game,string name) : Player(game,name){
    Player::p_role = "Assassin";
}
Assassin::~Assassin(){};
void Assassin::coup(Player player){};


