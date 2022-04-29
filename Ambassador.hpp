#include "Game.hpp"
#include "Player.hpp"
#pragma once
namespace coup
{
    class Ambassador : public Player{
    public:

        Ambassador(Game game,string name);
        ~Ambassador();
        void transfer(Player player1, Player player2);
        void block(Player player);

    };
}