#pragma once
#include "Game.hpp"
#include "Player.hpp"

namespace coup
{
    class Duke : public Player{
    public:

        Duke(Game &game,const string &name);
        ~Duke();
        void block(Player & player);
        void tax();

    };
}