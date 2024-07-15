//coin.cpp
#include "Coin.h"

Coin::Coin(int value) : centValue(value) {
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
    return isHeads2;
}

string Coin::getSideUp() const {
    if (isHeads2)
        return "heads";
    else
        return "tails";
}

