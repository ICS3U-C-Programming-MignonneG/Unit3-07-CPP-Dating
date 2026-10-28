// Copyright (c) 2026 Mignonne Gihozo All rights reserved.
//
// Created by: Mignonne Gihozo
// Created on: Oct 2026
// This program uses a try statement and AND, OR, and NOT operators to
// figure out wheter the user can date the granchild

#include <iostream>
#include <string>

int main() {
    // this function uses a try statement and AND, OR, and NOT operators to
    // figure out wheter the user can date the granchild
    std::string ageAsString;
    int ageAsNumber;

    // input
    std::cout << "Enter your age: ";
    std::cin >> ageAsString;
    std::cout << "\n";

    // process & output
    try {
        ageAsNumber = std::stoi(ageAsString);

        // Check if the number is invalid (negative) or unrealistically high
        // using a logical OR operator
        if (ageAsNumber < 0 || ageAsNumber > 120) {
            std::cout << ageAsString << " is not a valid number!\n";
        } else if (ageAsNumber >= 25 && ageAsNumber <= 40) {
            std::cout << "You are allowed to date the grandchild!\n";
        } else if (ageAsNumber < 25) {
            std::cout << "You are too young to date the grandchild!\n";
        } else if (ageAsNumber > 40) {
            std::cout << "You are too old to date the grandchild!\n";
        }
    } catch (const std::invalid_argument&) {
        std::cout << ageAsString << " is not a valid integer!\n";
    } catch (const std::out_of_range&) {
        std::cout << ageAsString << " is not a valid integer!\n";
    }
}
