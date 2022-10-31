// Copyright Cristiano 2022
//
// Created by Cristiano Sellitto
// Created in October 2022
// A program that finds if a certain grandmother
// will allow the user to date her grandchild
// through the user's age

#include <iostream>
#include <string>

int ageInt;

int main() {
    // finds if a certain grandmother will allow
    // the user to date her grandchild through
    // the user's age

    std::string age;
    std::cout << "Enter your age: ";
    std::cin >> age;
    std::cout << std::endl;
    try {
        ageInt = std::stoi(age);
        if ((ageInt >= 25) && (ageInt <= 40) && !(ageInt < 0)) {
            std::cout << "This grandmother will approve of you";
            std::cout << "dating her grandchild.";
        } else if (
                (ageInt > 25) ||
                (ageInt < 40) &&
                !(ageInt < 0)
            ) {
            std::cout << "This grandmother will not approve of";
            std::cout << "you dating her grandchild.";
        } else {
            std::cout << "Error: " << ageInt << " is not a proper age.";
        }
        std::cout << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "Error: " << age << " is not an integer.";
        std::cout << std::endl;
    }

    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
