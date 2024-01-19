// Code to test if the input text is palindrome or not.

#include <iostream>

using namespace std;

int main()
{
    string userInput;
    bool status = true;

    cout << "Please enter the word to check if its Palindrome:";
    cin >> userInput;
    int length = userInput.size();
    for (int i = 0; i < length/2; i++)
    {
        if (userInput[i] != userInput[length - i - 1])
        {
            status = false;
            break;
        }
    }
    cout << "Palindrome: " << status;
}