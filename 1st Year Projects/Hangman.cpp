#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int checkIfCharacterInString(string s, char ch)
{ // Declaring a function to check if a character is in a string
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ch)
        {
            return i; // Return its index
        }
    }
    return -1; // Return -1 if the character is not found
}

int main()
{ // Main function where the program execution starts

    string str = "cuchd";
    string str1 = str;
    int S = 5;        // Variable to hold the length of the word
    int remguess = 3; // Remaining guesses
    char chr;         // Variable to store the user's guessed character
    int res;          // Variable to store the result of finding the guessed character in the word

    cout << "<--- Welcome to the Hangman game --->" << endl;
    cout << "___ ___ ____ ____ ____" << endl;

    while (remguess > 0 && str.length() > 0)
    {                                                 // Loop until remaining guesses are more than zero and word is not guessed completely
        cout << "Guess a character in lower case : "; // Prompt the user to guess a character
        cin >> chr;                                   // Input the guessed character
        res = str.find(chr);                          // Check if the guessed character is in the word
        if ((res == string::npos) && remguess >= 0)
        {                                                                    // If the guessed character is not found in the word
            cout << "Oops! Wrong Guess." << endl;                            // Output a wrong guess message
            remguess--;                                                      // Decrease remaining guesses
            cout << "Now you have " << remguess << " guesses left." << endl; // Output the remaining guesses
            if (remguess >= 1)
            {
                cout << "Guess again: "; // Prompt the user to guess again
            }
        }
        else if (res != -1 && remguess >= 0)
        {                                          // If the guessed character is found in the word
            cout << "Hurray! You got it." << endl; // Output a correct guess message
            str.erase(res, 1);                     // Remove the guessed character from the word
            S--;                                   // Decrease the length of the word left to be guessed
        }
    }
    if (remguess > 0 && str.length() == 0)
    {
        cout << "Hurray You Guess the Right Name ";
    }
    else
    {
        cout << "Oops The man is Hangged "
             << " Because the right Ans is " << str1 << endl; // Output failure message with the correct word
    }

    return 0;
}