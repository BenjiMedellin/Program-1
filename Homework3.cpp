// Homework3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

#define Pi 3.1415 // We're defining a constant that can be sub anywhere in our code.

int main()
{
    
    // Program 1

    /*  Program 2
    *   This program ask user to input three numbers and output the sum of all threee numbers.
    */ 
    short int num1, num2, num3; // Creating three short integer variables.
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Enter the third number: ";
    cin >> num3;

    // Finding the sum of three numbers
    short int sum = num1 + num2 + num3;
    cout << "The sum of the three numbers is " << sum << endl;

    // Find the product of the three numbers.
    short int product = num1 * num2 * num3;
    cout << "The product of the three numbers is " << product << endl << endl;

    /*  Program 3
    *   Write a program that prompts the user to enter the radius.
    *   Using the radius, print the area of the circle, volume of the sphere, and the surface area.
    */
    float radius; // Create a float variable to hold value of the radius.

    // Ask the user to enter the area in inches
    cout << "Enter the radius in inches ";
    cin >> radius;

    // Calculate the area of circle (A = PI * r^2).
    float area = Pi * pow(radius, 2);
    cout << fixed << setprecision(2);
    cout << "Area of the circle is " << area << " square inches\n";

    // Calculate the volume of the sphere ( V = (4/3)*Pi*r^3).
    float volume = (4 / 3) * Pi * pow(radius, 3);
    cout << fixed << setprecision(2);
    cout << "Volume of the sphere is " << volume << " cubic inches\n";

    // Calculate the surface area of the sphere (SA = 4 * Pi * r^2)
    float surArea = 4 * Pi * pow(radius, 2);
    cout << fixed << setprecision(2);
    cout << "Surface area of the sphere is " << surArea << " square inches\n";

    
}

