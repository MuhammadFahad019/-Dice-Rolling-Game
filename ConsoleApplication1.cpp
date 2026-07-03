#include <iostream>
using namespace std;
int main()
{

    srand(time(0));
    char rollAgain;

    cout << "===========================" << endl;
    cout << "--- Dice Rolling Game ---" << endl;
    cout << "===========================" << endl;

    do
    {

        int diceValue = (rand() % 6) + 1;

        cout << "\nYou rolled a: " << diceValue << endl;

        cout << "Do you want to roll the dice again? (y/n): ";
        cin >> rollAgain;

    } while (rollAgain == 'y' || rollAgain == 'Y');

    cout << "\nThanks for playing! Goodbye." << endl;
}