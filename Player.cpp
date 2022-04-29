#include "Player.hpp"
#include "Game.hpp"
using namespace coup;
 
Player::Player(Game &game,const string & name){
    Player::p_name = name;
    Player::game = game;
    Player::p_coins = 0;

};

Player::~Player(){};
string Player::getName(){
    return p_name;
};
void Player::income(){
    p_coins += 1;
};
void Player::foreign_aid(){};
void Player::coup(Player &player){};
string Player::role(){
    return p_role;
};
int Player::coins() const{
    return p_coins;
};