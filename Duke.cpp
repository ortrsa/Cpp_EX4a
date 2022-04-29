#include "Duke.hpp"
# include "Game.hpp"
using namespace coup;

Duke::Duke(Game &game,const string &name) : Player(game,name){
    Player::p_role = "Duke";
}
Duke::~Duke(){};
void Duke::block(Player & player){}
void Duke::tax(){};



