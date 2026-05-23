#include <iostream>

using namespace std;

int main()
{
    //  Variables
    int chosenNumber = 7;
    int userGuess = 0;

    // Array to store guesses
    vector<int> guesses;

    //  While loop
    while (userGuess != chosenNumber)
    {
        //  Get input
        cout << "Enter a number: ";
        cin >> userGuess;

        // Save the guess
        guesses.push_back(userGuess);

        //  Compare numbers
        if (userGuess > chosenNumber)
        {
            cout << "Too high" << endl;
        }
        else if (userGuess < chosenNumber)
        {
            cout << "Too low" << endl;
        }
        else
        {
            cout << "Correct" << endl;
        }
    }

    //  Display all guesses
    cout << "\nAll guesses:" << endl;

    for (int i = 0; i < guesses.size(); i++)
    {
        cout << guesses[i] << endl;
    }

    return 0;
}