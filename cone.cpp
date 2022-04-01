// Copyright (c) 2022 Hertz Antonella All rights reserved.
//
// Created by: Hertz Antonella
// Date: mar 28, 2022
// This program asks the user for the hieght and radius of the
// cone. It then calculates and displays the total the surface
// area and volume
#include <iostream>
#include <cmath>
#include <iomanip>


    // declare variables
    float height, radius, area, volume;

    int main() {
    // declare constants
    const float pi = 3.14;
    // get user hieght and radius
    std::cout << "Enter the radius of the cone (cm): ";
    std::cin >> radius;
    std::cout << "Enter the height of the cone(cm) ";
    std::cin >> height;

    // calculate surface area and volume
    area = pi*radius*(sqrt(radius*radius + height*height));
    volume = (pi*(radius*radius)*height)*1/3;

    // display the total surface area and volume
    std::cout << "\n";
    std::cout << "\033[1;32;38mSurface Area = " << std::fixed;
    std::cout << std::setprecision(2) << area << " cm^2.\n";
    std::cout << "\033[1;32;38mVolume = " << std::fixed;
    std::cout << std::setprecision(2) << volume << " cm^3.\n";
    // std::cout <<"The total surface area : " << std::setprecision(2) << area <<"\n";
    // std::cout <<"The total volume : " <<  std::setprecision(2) << volume <<"\n";
}
