#include "Contessa.hpp"
#include "Game.hpp"
using namespace coup;

Contessa::Contessa(Game &game,const string & name) : Player(game,name){
    Player::p_role = "Contessa";
}
Contessa::~Contessa(){};
void Contessa::block(Player &player){};

