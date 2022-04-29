#include "Game.hpp"
#include "Player.hpp"
#pragma once
namespace coup
{
    class Captain : public Player{
    public:

        Captain(Game &game,const string & name);
        ~Captain();
        void steal(Player &player);
        void block(Player &player);

    };
}