#ifndef PLAYER_H
#define PLAYER_H
#include <iostream> //the input/output stream library of C++


class Player
{
    private:
    std::string name;
    int numCards;
    double cash_amount;
	int* cards;//Dynamic memory allocation. We don't know how many cards the player
	              //has taken until we run the program. We allocate memory once we know.
public:
Player();
Player(const std::string _name);
~Player();
std::string GetName(void);
void DrawCards(int _numCards);
int SumCards(void);
void StealCards(Player& player);
bool AddCash(double amount);
void Report(void);
};
#endif
