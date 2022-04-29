#pragma once
#include "Game.hpp"
#include "Player.hpp"
namespace coup
{
    class Assassin : public Player{
    public:

        Assassin(Game &game,const string & name);
        ~Assassin();
        void coup(Player &player);

    };
}