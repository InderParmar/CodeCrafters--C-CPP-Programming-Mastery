// BankAccount.cpp - function definitions for a bank account

#include "Player.h"

using namespace std;
Player::Player()
{
    name = "";
    numCards = 0;
    cash_amount = 1000;
    cards = nullptr;
}
Player::Player(std::string name)
{
    // skip validation
    this->name = name;
    this->numCards = 0;
    this->cash_amount = 1000;
    this->cards = nullptr;
}
std::string Player::GetName(void)
{
    return this->name;
}
void Player::DrawCards(int _numCards)
{
    this->numCards = _numCards;
    if (this->cards != nullptr)
    {
        delete[] this->cards;
        this->cards = nullptr;
    }
    this->cards = new int[_numCards];
    for (int i = 0; i < _numCards; i++)
    {
        this->cards[i] = (rand() % 10) + 1; // Random number between 1 and 10
    }
}
int Player::SumCards(void)
{
    int sum = 0;
    for (int i = 0; i < this->numCards; i++)
    {
        sum += this->cards[i];
    }
    return sum;
}
bool Player::AddCash(double amount)
{
    bool retval = true;
    cash_amount = cash_amount + amount;
    if(cash_amount <=0) retval = false;
    return retval;
}

void Player::StealCards(Player &player)
{
    if (this != &player)
    {
       // Deallocate this player's current cards
        delete[] this->cards;

        // Steal the cards from the other player
        this->cards = player.cards;
        player.cards = nullptr;

        // Update the number of cards if necessary
        this->numCards = player.numCards;
        player.numCards = 0;
    }
}
void Player::Report(void)
{
    cout<<endl;
cout<<this->name<<" has $"<<this->cash_amount<<" left over."<<endl;
}
Player::~Player()
{
    delete[] cards;
    cards = nullptr;
}