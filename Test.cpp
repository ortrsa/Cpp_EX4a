#include "doctest.h"
#include "Game.hpp"
#include "Player.hpp"
#include "Duke.hpp"
#include "Assassin.hpp"
#include "Ambassador.hpp"
#include "Captain.hpp"
#include "Contessa.hpp"
#include <vector>
using std::string;
using std::vector;
using std::endl;
using std::cout;
using namespace coup;


Game game{};
Duke p1{game, "TheDuke"};
Assassin p2{game, "Thekiler"};
Contessa p3{game, "AssassinBloker"};
Captain p4{game, "MrCaptain"};
Ambassador p5{game, "CaptainBloker"};



TEST_CASE("Basic Chacks") {

    CHECK(p1.getName() == "TheDuke");
    CHECK(p2.getName() == "Thekiler");
    CHECK(p3.getName() == "AssassinBloker");
    CHECK(p4.getName() == "MrCaptain");
    CHECK(p5.getName() == "CaptainBloker");

    CHECK(p1.role() == "Duke");
    CHECK(p2.role() == "Assassin");
    CHECK(p3.role() == "Contessa");
    CHECK(p4.role() == "Captain");
    CHECK(p5.role() == "Ambassador");

    CHECK(game.turn() == "TheDuke");
}

TEST_CASE("Test Duke") {
    // Duke can take tax of 3 coins
    CHECK_NOTHROW(p1.tax());
    CHECK(p1.coins() == 3);
    
}
TEST_CASE("Test Assassin and turns") {
    // its p2 turn
    CHECK_THROWS(p3.income());
    CHECK_NOTHROW(p2.income());
    CHECK(p2.coins() == 1);
}

TEST_CASE("Test bloking and foreign_aid") {
    //p3 turn
    CHECK_NOTHROW(p3.foreign_aid());
    CHECK(p3.coins() == 2);

    // blocking can be not in your turn
    CHECK_NOTHROW(p1.block(p3));
}

TEST_CASE("Test steal and bloking") {
    //try to steal
    CHECK_NOTHROW(p4.steal(p1));
    CHECK_NOTHROW(p5.block(p4));
}

TEST_CASE("More general tests") {
    //the game is runing
    CHECK_THROWS(game.winner());
    CHECK_NOTHROW(game.players());
    // DOnt have 7 coins 
    CHECK_THROWS(p5.coup(p2));

}