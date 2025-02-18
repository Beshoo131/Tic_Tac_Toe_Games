#include<iostream>
#include<random>
#include<iomanip>
#include<algorithm>
#include"BoardGame_Classes.hpp"
using namespace std;

// Set player symbol and name as Random Computer Player
RandomPlayer::RandomPlayer (char symbol, int dimension):Player(symbol)
{
    this->dimension = dimension;

    this->name = "Computer";
    cout << "My names is " << name << endl;
}

// Generate a random move
void RandomPlayer::get_moves(int& x, int& y) {
    x = (int) (rand() % dimension);
    y = (int) (rand() % dimension);
}

void RandomPlayer::get_move (int& x) {
    x = (int) (rand() % dimension);
}
