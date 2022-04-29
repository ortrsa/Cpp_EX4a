#include "Player.hpp"
#include "Game.hpp"
using namespace coup;
 
Player::Player(Game game, string name){
    Player::p_name = name;
    Player::game = game;

};

Player::~Player(){};
void Player::income(){};
void Player::foreign_aid(){};
void Player::coup(Player player){};
string Player::role(){
    return "test";
};
int Player::coins(){
    return 0;
};