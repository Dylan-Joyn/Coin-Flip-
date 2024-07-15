//Coin.h
#pragma once
#ifndef COIN_H
#define COIN_H

#include <cstdlib> 
#include <ctime>    
#include <iostream>
using namespace std;

class Coin {
private:
    bool isHeads2; 
    const int centValue;
public:
    Coin(int value);
    void flip();
    bool isHeads() const;
    string getSideUp() const;
};

#endif


