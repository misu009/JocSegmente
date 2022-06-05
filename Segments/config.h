#ifndef H_CONFIG
#define H_CONFIG

#include <string>
#include <graphics.h>

using namespace std;

const int WINDOW_WIDTH = 600;
const int WINDOW_HEIGHT = 800;

const string PLAYER_ONE_NAME = "Player1";
const string PLAYER_TWO_NAME = "Player2";

const int PLAYER_ONE_COLOR = YELLOW;
const int PLAYER_TWO_COLOR = GREEN;

const int DEFAULT_COLOR = WHITE;
const int DEFAULT_RADIUS = 4;

enum {

    TWO_PLAYERS,
    PLAYER_VS_RANDOM
};

const int GAME_MODE = PLAYER_VS_RANDOM;

const int DEFAULT_NUMBER_OF_POINTS = 15;

#endif // H.CONFIG
