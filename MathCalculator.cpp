/*
 * Math Calcualtor (Personal Project 1)
    * This program performs basic arithmetic operations: addition, subtraction, multiplication, and division.
    * The user can choose the operation and input multiple numbers to calculate the result.
    * The program continues to run until the user decides to exit.
    * Date: December 12, 2025
 */

#include <iostream>
#include <vector>

using namespace std;

void Addition (int userAmount) {
    vector<int> numbers;
    int number;
    int sum = 0;

    for (int i = 0; i < userAmount; ++i) {
        cout << "Enter number " << (i + 1) << ": ";
        cin >> number;
        numbers.push_back(number);
    }

    for (unsigned int i = 0; i < numbers.size(); ++i) {
        sum += numbers[i];
    }

    cout << endl << "Your new total: " << sum << endl;
}

void Subtraction(int userAmount) {
    int number;
    vector<int> numbers;

    for (int i = 0; i < userAmount; ++i) {
        cout << "Enter number " << (i + 1) << ": ";
        cin >> number;
        numbers.push_back(number);
    }

     int sum = numbers[0];
    for (unsigned int i = 1; i < numbers.size(); ++i) {
        sum -= numbers[i];
    }

    cout << endl << "Your new total: " << sum << endl;
}

void Multiplication(int userAmount) {
    int number;
    vector<int> numbers;

    for (int i = 0; i < userAmount; ++i) {
        cout << "Enter number " << (i + 1) << ": ";
        cin >> number;
        numbers.push_back(number);
    }

    int totalSum = numbers[0];
    for (unsigned int i = 1; i < numbers.size(); ++i) {
        totalSum *= numbers[i];
    }

    cout << endl << "Your new total: " << totalSum << endl;
}

void Division(int userAmount) {
    int number;
    vector<int> numbers;

    for (int i = 0; i < userAmount; ++i) {
        cout << "Enter number " << (i + 1) << ": ";
        cin >> number;
        numbers.push_back(number);
    }

    int totalSum = numbers[0];
    for (unsigned int i = 1; i < numbers.size(); ++i) {
        totalSum /= numbers[i];
    }

    cout << endl << "Your new total: " << totalSum << endl;
}

void displayMenu() {
    int userInput;

    do {
        cout << endl;
        cout << "   Calculator Menu" << endl;
        cout << "---------------------" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Exit" << endl;
        cout << "---------------------" << endl;
        cout << "Select an option (1-5): ";
        cin >> userInput;

        if (userInput == 1) {
            int userInputAmount;
            cout << "How many numbers do you want to add? ";
            cin >> userInputAmount;
            Addition(userInputAmount);
        }
        else if (userInput == 2) {
            int userInputAmount;
            cout << "How many numbers do you want to add? ";
            cin >> userInputAmount;
            Subtraction(userInputAmount);
        }
        else if (userInput == 3) {
            int userInputAmount;
            cout << "How many numbers do you want to add? ";
            cin >> userInputAmount;
            Multiplication(userInputAmount);
        }
        else if (userInput == 4) {
            int userInputAmount;
            cout << "How many numbers do you want to add? ";
            cin >> userInputAmount;
            Division(userInputAmount);
        }
        else if (userInput == 5) {
            cout << "Exiting the program. Goodbye!" << endl;
        }
        else {
            cout << "Invalid option. Please try again." << endl;
        }
    } while (userInput != 5);
}

int main() {
    displayMenu();
}
