//coin.cpp
#include "Game.h"
#include "Coin.h"


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
	
	coins[0] = Coin(25);
	coins[1] = Coin(10);
	coins[2] = Coin(5);

};
void Game::playGame() {

}