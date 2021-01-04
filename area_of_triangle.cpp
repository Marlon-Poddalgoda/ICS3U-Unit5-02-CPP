// Copyright (c) 2020 Marlon Poddalgoda, All rights reserved
//
// Created by Marlon Poddalgoda
// Created on January 2021
// This program calculates the area of a triangle

#include <iostream>
#include <string>


void AreaOfTriangle(int base, int height) {
    // this function calculates the area of a triangle
    int area;

    // process
    area = (base * height) / 2;

    // output
    std::cout << "The area of this triangle is "
              << area << " m²." << std::endl;
}

int main() {
    // this function gets user input
    std::cout << "This program calculates the area of a triangle."
              << std::endl;
    std::cout << "" << std::endl;

    // variables
    std::string baseOfTriangle;
    int baseInt;
    std::string heightOfTriangle;
    int heightInt;

    // input
    std::cout << "Enter the base of the triangle: ";
    std::cin >> baseOfTriangle;
    std::cout << "Enter the height of the triangle: ";
    std::cin >> heightOfTriangle;
    std::cout << "" << std::endl;

    try {
            baseInt = std::stoi(baseOfTriangle);
            heightInt = std::stoi(heightOfTriangle);

            if (baseInt > 0 && heightInt > 0) {
                // call function
                AreaOfTriangle(baseInt, heightInt);
            } else {
                std::cout << "Enter a positive integer for both values," <<
                             " try again." << std::endl;
            }
        } catch (std::invalid_argument) {
            std::cout << "Enter a number for both values, try again."
                      << std::endl;
        }
}
