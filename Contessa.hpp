#include "Game.hpp"
#include "Player.hpp"
#pragma once
namespace coup
{
    class Contessa : public Player{
    public:

        Contessa(Game game,string name);
        ~Contessa();
        void block(Player player);

    };
}