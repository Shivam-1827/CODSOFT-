/*
                            Number Guessing Game
 This program generates a random number and ask the user to guess it. This proves feedback on
 whether the guess is too high or too low until the user guesses the correct number.
*/

#include <bits/stdc++.h>
using namespace std;

void easy()
{
    int again = 1;

    while (again--)
    {
        srand(time(0));
        int randomNumber = (rand() % 100) + 1;
        int j = 0;
        int i = 10;
        while (i--)
        {
            int guessedNumber;
            cout << "Enter your guessed number: " << endl;
            cin >> guessedNumber;
            if (guessedNumber == randomNumber)
            {
                cout << "Congratulations! You have Guessed a correct number." << endl;
                i = 0;
                j = 1;
            }
            else if (guessedNumber < randomNumber)
            {
                cout << "Guessed Number is less than the random number" << endl;
            }
            else if (guessedNumber > randomNumber)
            {
                cout << "Guessed number is greater than the random number" << endl;
            }

            if (i == 0)
            {
                if (j == 0)
                {
                    cout << "Oops! Number of chances gets over." << endl;
                    cout << "Bad Luck! You are unable to guess the correct random number" << endl;
                    cout << "The random number is " << randomNumber << endl;
                }
                int num;
                cout << "To play the game again, press 1\n and to exit the game press 0" << endl;
                cin >> num;

                if (num == 1)
                {
                    again = 1;
                }
                else
                {
                    break;
                }
            }
        }
    }

    cout << "Thank You ! for playing the game." << endl;
}

void moderate()
{
    int again = 1;

    while (again--)
    {
        srand(time(0));
        int randomNumber = (rand() % 100) + 1;
        int j = 0;
        int i = 7;

        while (i--)
        {
            int guessedNumber;
            cout << "Enter your guessed number: " << endl;
            cin >> guessedNumber;
            if (guessedNumber == randomNumber)
            {
                cout << "Congratulations! You have Guessed a correct number." << endl;
                i = 0;
                j = 1;
            }
            else if (guessedNumber < randomNumber)
            {
                cout << "Guessed Number is less than the random number" << endl;
            }
            else if (guessedNumber > randomNumber)
            {
                cout << "Guessed number is greater than the random number" << endl;
            }

            if (i == 0)
            {
                if (j == 0)
                {
                    cout << "Oops! Number of chances gets over." << endl;
                    cout << "Bad Luck! You are unable to guess the correct random number" << endl;
                    cout << "The random number is " << randomNumber << endl;
                }
                int num;
                cout << "To play the game again, press 1\n and to exit the game press 0" << endl;
                cin >> num;

                if (num == 1)
                {
                    again = 1;
                }
                else
                {
                    break;
                }
            }
        }
    }

    cout << "Thank You ! for playing the game." << endl;
}

void difficult()
{

    int again = 1;
    while (again--)
    {
        srand(time(0));
        int randomNumber = (rand() % 100) + 1;
        int i = 5;
        int j = 0;
        while (i--)
        {
            int guessedNumber;
            cout << "Enter your guessed number: " << endl;
            cin >> guessedNumber;
            if (guessedNumber == randomNumber)
            {
                cout << "Congratulations! You have Guessed a correct number." << endl;
                i = 0;
            }
            else if (guessedNumber < randomNumber)
            {
                cout << "Guessed Number is less than the random number" << endl;
            }
            else if (guessedNumber > randomNumber)
            {
                cout << "Guessed number is greater than the random number" << endl;
            }

            if (i == 0)
            {
                if (j == 0)
                {
                    cout << "Oops! Number of chances gets over." << endl;
                    cout << "Bad Luck! You are unable to guess the correct random number" << endl;
                    cout << "The random number is " << randomNumber << endl;
                }
                int num;
                cout << "To play the game again, press 1\n and to exit the game press 0" << endl;
                cin >> num;

                if (num == 1)
                {
                    again = 1;
                }
                else
                {
                    break;
                }
            }
        }
    }

    cout << "Thank You ! for playing the game." << endl;
}

int main()
{
    cout << "\n\t\tWelcome to GuessTheNumber game!" << endl;
    cout << "In this game you have to guess the number between 1 to 100." << endl;
    cout << "In order to guess the correct number we will assist you." << endl;
    cout << " ************GOOD LUCK************" << endl;
    cout << "Let's the game begin....." << endl;
restart:
    int choice;
    cout << "Enter the difficulty level of the game.Enter the number as per the list.\n "
            "1- Easy \n 2- Moderate \n 3- Difficult"
         << endl;
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "You have 10 chances to guess the correct number." << endl;
        easy();
        break;

    case 2:
        cout << "You have 7 chances to guess the correct number." << endl;
        moderate();
        break;

    case 3:
        cout << "You have 5 chances to guess the correct number." << endl;
        difficult();
        break;

    default:
        cout << "Invalid number is entered." << endl;
        cout << "To play the game again press 1 and to exit the game press 0." << endl;
        int choice1;
        cin >> choice1;
        if (choice1)
        {
            goto restart;
        }
        else
        {
            break;
        }
    }

    cout << "Thank You For Playing!.\n.........Have a good day............." << endl;

    return 0;
}