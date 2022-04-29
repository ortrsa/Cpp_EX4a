#pragma once
#include "Game.hpp"
#include "Player.hpp"

namespace coup
{
    class Duke : public Player{
    public:

        Duke(Game g,string name);
        ~Duke();
        void block(Player p);
        void tax();

    };
}