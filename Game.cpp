//coin.cpp
#include "Game.h"

#include<iostream>
using namespace std;

void Game::printFlipResults() {
	string heads = "heads";
	string tails = "tails";

	for (int i = 0; i < 3; i++) {
		if (coins[i].isHeads())
			cout << coins[i].getSideUp() << endl;
	}
}
void Game::FlipCoins() {
	for (int i = 0; i < 3; i++) {
		coins[i].flip();
	}
}
void Game::printScore() {
	cout << "Total Score: " << getScore() << endl;
}
int Game::getRounds() const {
	return rounds;
}
int Game::getScore() const {
	return totalScore;
}
Game::Game() : totalScore(0), rounds(0)
{

};
void Game::playGame() {
	const int totalRounds = 5;

    while (rounds < totalRounds) {
        FlipCoins();
        printFlipResults();
        rounds++;
    }

    printScore();
}