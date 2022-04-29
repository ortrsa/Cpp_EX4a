#pragma once
#include <iostream>
#include <vector>
using std::string;
using std::vector;
#include "Game.hpp"

namespace coup
{
    class Player
    {

    protected:

        string p_name;
        int p_coins;
        string p_role;
        Game game;
    public:
        void income();
        void foreign_aid();
        void coup(Player player);
        string role();
        int coins();
        Player(Game game, string name);
        ~Player();

    };
}