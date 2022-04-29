#include "Ambassador.hpp"
#include "Game.hpp"
using namespace coup;

Ambassador::Ambassador(Game &game,const string & name) : Player(game,name){
    Player::p_role = "Ambassador";
}
Ambassador::~Ambassador(){};
void Ambassador::transfer(Player &player1, Player &player2){};
void Ambassador::block(Player &player){};


