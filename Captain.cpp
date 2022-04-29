#include "Captain.hpp"
#include "Game.hpp"
using namespace coup;

Captain::Captain(Game game,string name) : Player(game,name){
    Player::p_role = "Captain";
}
Captain::~Captain(){};
void Captain::steal(Player player){};
void Captain::block(Player player){};


