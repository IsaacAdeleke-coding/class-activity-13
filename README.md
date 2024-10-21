# Class Activity 13: Average Temperature Calculator

This C++ program calculates the average of a set of temperatures input by the user. The user specifies how many temperatures they wish to enter, and the program will validate the input and compute the average of the entered values.

## Program Overview

1. The user is prompted to input how many temperatures they want to enter.
2. The program checks if the input is valid and if the number is positive.
3. The user then inputs the specified number of temperatures, which are stored in a vector.
4. The program calculates and displays the average of the entered temperatures.
5. It handles cases of invalid input, such as non-numeric or out-of-range values.

### Code Snippet

```cpp
#include <iostream>
#include <vector>
#include <limits>  // For input validation
using namespace std;

int main() {
    int numTemps;
    vector<double> temperatures;
    double temp, sum = 0.0;

    // Ask the user how many temperatures they want to input
    cout << "How many temperatures do you want to enter? ";
    cin >> numTemps;

    // Edge case: Handle invalid input or non-positive number of temperatures
    if (cin.fail() || numTemps <= 0) {
        cin.clear();  // Clear error flags
        cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Ignore invalid input
        cout << "Invalid input or non-positive number. Exiting program." << endl;
        return 1;
    }

    // Get temperatures from the user
    for (int i = 0; i < numTemps; ++i) {
        cout << "Enter temperature " << i + 1 << ": ";
        cin >> temp;

        // Edge case: Handle invalid temperature input
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid temperature input. Exiting program." << endl;
            return 1;
        }

        temperatures.push_back(temp);  // Add the temperature to the list
        sum += temp;
    }

    // Calculate and display the average temperature
    if (numTemps > 0) {
        double average = sum / numTemps;
        cout << "The average temperature is: " << average << endl;
    } else {
        cout << "No temperatures entered. Exiting program." << endl;
    }

    return 0;
}

Features

Prompts the user to input the number of temperatures to enter.
Accepts a list of temperature values and stores them in a vector.
Calculates and outputs the average of the temperatures.
Handles input validation, including non-numeric or invalid entries.
Exits gracefully if invalid input is detected.
How to Compile and Run

To compile the program, use the following command:

g++ main.cpp -o AvgTemperature

To run the compiled program, use:
./AvgTemperature
Example Input/Output

Example:

How many temperatures do you want to enter? 3
Enter temperature 1: 20.5
Enter temperature 2: 25.0
Enter temperature 3: 22.5
The average temperature is: 22.67



