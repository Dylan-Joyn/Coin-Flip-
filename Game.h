#pragma once
#ifndef GAME_H
#define GAME_H
#include <iostream>
using namespace std;


class Game
{
private:
	Coin coins[3];
	int totalScore;
	int rounds;
	



	void printFlipResults();
	void FlipCoins();

public:
	void printScore();

	int getRounds();
	int getScore();
	Game();
	void playGame();
};

#endif