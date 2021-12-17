
// Copyright (c) 2021 Melody Berhane All rights reserved.
//
// Created by: Melody Berhane
// Created on: Dec. 14, 2021
// This program determines if the entered
// year is a leap year

#include <iostream>
#include <string>
#include <cmath>


int main() {
    // this function checks if the user has
    // entered a leap year

    // defines variable
    std::string userYearString;
    int userYearInt;

    // collect input from the user
    std::cout << "Enter a year (ex. YYYY): ";
    std::cin >> userYearString;
    std::cout << std::endl;

    try {
        // convert the user's guess to an int
        userYearInt = std::stoi(userYearString);

        if (userYearInt < 0) {
            std::cout << "Please enter a valid year.";
        } else if ((userYearInt % 4) == 0) {
            if ((userYearInt % 100) == 0) {
                if ((userYearInt % 400) == 0) {
                    std::cout << "This is a leap year!";
                    std::cout << std::endl;
                    std::cout << "It has 366 days.";
                } else {
                    std::cout << "This is not a leap year.";
                }
            } else {
                std::cout << "This is a leap year.";
                std::cout << std::endl;
                std::cout << "It has 366 days.";
            }
        } else {
            std::cout << "This is not a leap year.";
        }
    // determines if the the answer is a number
    } catch (std::invalid_argument) {
    // The user did not enter a number.
    std::cout << userYearString << " is not a number.\n";
    }
}
