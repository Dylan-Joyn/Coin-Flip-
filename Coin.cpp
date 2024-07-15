#include "Coin.h"


Coin::Coin() {
    srand(static_cast<unsigned int>(time(0)));
    int randNum = rand() % 2;
    if (randNum == 0)
        isHeads2 = true;
    else
        isHeads2 = false;
}

void Coin::flip() {
    int randNum = rand() % 2;
    if (randNum == 0)
        isHeads2 = true;
    else
        isHeads2 = false;
}

bool Coin::isHeads() const {
    return isHeads;
}

string Coin::getSideUp() const {
    if (isHeads)
        return "heads";
    else
        return "tails";
}