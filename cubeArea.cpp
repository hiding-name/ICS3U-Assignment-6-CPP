// Copyright (c) 2019 Matsuru All rights reserved.
//
// Created by: Matsuru Hoshi
// Created on: Nov 2019
// This is program cube surface area

#include <iostream>
#include <string>


float SurfaceArea(float side) {
    // This'll calculate the surface area of a cube with side as a parameter

    // variables
    float area;

    // process
    area = (side * side) * 6;
    return area;
}

main() {
    // This is asks for the user input and runs SurfaceArea()

    // variables
    std::string sideString;
    float side;
    float area;

    // Welcomes the user
    std::cout << "Hi, this is CUBE SURFACE AREA CALCULATOR 3001" << std::endl;
    std::cout << "Press ENTER to continue." << std::endl;
    std::cin.ignore();

    while (true) {
        try {
            // input
            std::cout << "What is the side: " << std::endl;
            std::cin >> sideString;
            // converts strings to float
            side = std::stof(sideString);
            // runs Volume_Calculator()
            area = SurfaceArea(side);
            // output
            std::cout << "\nThe area is " << area << " units squared."
                      << std::endl;
            break;
        } catch(std::invalid_argument) {
            std::cout << "\nInvalid input."<< std::endl;
            std::cout << "Try again.\n"<< std::endl;
        }
    }
}
