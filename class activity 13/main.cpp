//
//  main.cpp
//  class activity 13
//
//  Created by Isaac Adeleke on 9/16/24.
//

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
    while (cin.fail() || numTemps <= 0) {
        cin.clear();  // Clear error flags
        cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Ignore invalid input
        cout << "Please enter a valid positive number of temperatures: ";
        cin >> numTemps;
    }

    // Get temperatures from the user
    for (int i = 0; i < numTemps; ++i) {
        cout << "Enter temperature " << i + 1 << ": ";
        cin >> temp;

        // Edge case: Handle invalid temperature input
        while (cin.fail()) {
            cin.clear();  // Clear error flags
            cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Ignore invalid input
            cout << "Invalid input. Enter a valid temperature: ";
            cin >> temp;
        }

        temperatures.push_back(temp);  // Add the temperature to the list
        sum += temp;  // Add to the total sum
    }

    // Edge case: Check if numTemps is still valid after input
    if (numTemps > 0) {
        // Calculate the average
        double average = sum / numTemps;
        // Report the average temperature
        cout << "The average temperature is: " << average << endl;
    } else {
        cout << "No temperatures entered. Exiting program." << endl;
    }

    return 0;
}
