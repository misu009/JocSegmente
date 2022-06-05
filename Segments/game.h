#ifndef H_GAME
#define H_GAME

#include "board.h"
#include "player.h"
#include "config.h"
#include "generator.h"
#include "humanplayer.h"
#include "randomplayer.h"

class Game {

public:
    Game();
    void init();
    void changePlayer();
    void play();

private:
    void initPlayers(Board* board);
    void initBoard();
    void paintPoints(vector <Point>& points) const;
    pair<int, int> getMouseClick() const;
    int detectClickedPoint() const;

    Board board;
    Player* playerOne;
    Player* playerTwo;
    Player* currentPlayer;
};

#endif // H_GAME
