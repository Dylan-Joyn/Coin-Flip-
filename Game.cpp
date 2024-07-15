#include "Game.h"
#include "Coin.h"


#include<iostream>
using namespace std;

void Game::printFlipResults() {
	string heads = "heads";
	string tails = "tails";
	bool isHeads = false;

	for (int i = 0; i < 3; i++) {
		if (coins[i].isHeads())
			cout << getSideUp() << endl;
	}
}
void Game::FlipCoins() {

}
void Game::printScore() {
	cout << getScore() << endl;
}
int Game::getRounds() {
	return rounds;
}
int Game::getScore() {
	return totalScore;
}
Game::Game() :
	totalScore(0), rounds(0)
{
coins[3] = { Coin(25),
            Coin(10),
            Coin(5)  };
};
void playGame() {

}