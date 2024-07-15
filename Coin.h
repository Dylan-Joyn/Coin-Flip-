#pragma once
#ifndef COIN_H
#define COIN_H
#include<iostream>
using namespace std;

class Coin {
private:
    bool isHeads2;
public:
    Coin();
    void flip();
    bool isHeads() const;
    string getSideUp() const;
};
#endif
