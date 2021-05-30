#ifndef __CARD_H__
#define __CARD_H__
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>

using namespace std;

class Card
{
private:
	friend class Give_card;
	friend class HandRank;
	int deck[52];
	int card1[7], card2[7];
	int i;

public:
	void shuffle();
	void dist();
	void show1();
	void show2();
};

#endif#pragma once
