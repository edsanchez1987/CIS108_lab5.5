// CIS108_lab5_5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;



int main()
{
    int calculation_choice = 0;
    char shape;
    double radius = 0;
    double height = 0;
    double width = 0;
    const double PI = 3.14159;
    double area = 0;
    double volume = 0;


    cout << setw(20) << "Formula Program" << endl;
    cout << setw(20) << " -Main Menu- \n" << endl;
    cout << "1) Calculate Area" << endl;
    cout << "2) Calculate Volume" << endl;
    cout << "Enter choice from the list above: ";
    cin >> calculation_choice;
   


    //cout << fixed;

    switch (calculation_choice) 
    {
        case 1:
            cout << "\n\n--Area Menu-- \n a) Rectangle \n b) Circle \n c) Right Triangle" << endl;
            cout << "Enter choice from the list above: ";
            cin >> shape;
            cout << endl;

            switch (shape)
            {
            case 'a':
                cout << "Enter width of rectangle: ";
                cin >> width;
                cout << "Enter height of rectangle: ";
                cin >> height;
                area = width * height;
                cout << "Area of Rectangle is: " << area<< endl;
                break;
            case 'b':
                cout << "Enter radius of circle: ";
                cin >> radius;
                area = PI * radius * radius;
                cout << "Area of circle is: " << area;
                break;
            case 'c':
                cout << "Enter width of right triangle: ";
                cin >> width;
                cout << "Enter height of right triangle: ";
                cin >> height;
                area = width * height*.5;
                cout << "Area of Rectangle is: " << area << endl;
                break;

            default:
                cout << "Invalid option selected!"<<endl;
                break;
            }
            break;
        case 2:
            cout << "--Volume Menu-- \n a) Cylinder \n b) Sphere" << endl;
            cout << "Enter choice from the list above: ";
            cin >> shape;
            cout << endl;

            switch (shape)
            {
            case 'a':               
                cout << "Enter height of cylinder: ";
                cin >> height;
                cout << "Enter radius of cylinder: ";
                cin >> radius;
                volume = height* PI * radius* radius;
                cout << "Volume of cylinder is: " << volume;
                break;
            case 'b':               
                cout << "Enter radius of sphere: ";
                cin >> radius;
                volume = 4  * PI * pow(radius, 3) / 3;
                cout << "Volume of sphere is: " << volume;
                break;
            default:
                cout << "Invalid option selected!" << endl;
                break;
            }
            break;

        default:
            cout << "Invalid option selected!" << endl;
            break;
    }
}

