#include "card.h"
#include <iostream>

void Card::shuffle()
{
	srand((unsigned int)time(NULL));

	for (i = 0; i < 52; i++)
		deck[i] = i + 1;

	for (i = 0; i < 52; i++)
	{
		int j = rand() % 52;
		int temp = deck[i];
		deck[i] = deck[j];
		deck[j] = temp;
	}
}
void Card::dist()
{
	for (i = 0; i < 3; i++)
	{
		card1[i] = deck[i];
		card2[i] = deck[i + 3];
	}
}

void Card::show1()
{
	cout << "플레이어1의 카드 3장 : ";
	for (i = 0; i < 3; i++)
	{
		int pattern = card1[i] / 13;
		int cardnumber = card1[i] % 13;

		if (card1[i] == 52)
		{
			cout << "♠K ";
			break;
		}

		switch (pattern)
		{
		case 0:
			cout << "♠";
			break;
		case 1:
			cout << "◇";
			break;
		case 2:
			cout << "♣";
			break;
		case 3:
			cout << "♡";
			break;
		default:
			break;
		}

		if (cardnumber > 1 && cardnumber < 11)
		{
			cout << cardnumber << " ";
		}
		else
		{
			switch (cardnumber)
			{
			case 0:
				cout << "K ";
				break;
			case 1:
				cout << "A ";
				break;
			case 11:
				cout << "J ";
				break;
			case 12:
				cout << "Q ";
				break;
			}
		}
	}
	Sleep(4000);
	system("cls");
}
void Card::show2()
{
	cout << "플레이어2의 카드 3장 : ";
	for (i = 0; i < 3; i++)
	{
		int pattern = card2[i] / 13;
		int cardnumber = card2[i] % 13;

		if (card2[i] == 52)
		{
			cout << "♠K ";
			break;
		}

		switch (pattern)
		{
		case 0:
			cout << "♠";
			break;
		case 1:
			cout << "◇";
			break;
		case 2:
			cout << "♣";
			break;
		case 3:
			cout << "♡";
			break;
		default:
			break;
		}

		if (cardnumber > 1 && cardnumber < 11)
		{
			cout << cardnumber << " ";
		}
		else
		{
			switch (cardnumber)
			{
			case 0:
				cout << "K ";
				break;
			case 1:
				cout << "A ";
				break;
			case 11:
				cout << "J ";
				break;
			case 12:
				cout << "Q ";
				break;
			}
		}
	}
	Sleep(4000);
	system("cls");
}