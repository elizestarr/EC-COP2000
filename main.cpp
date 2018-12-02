// Elize Starr Homework 2
// COP2000
#include <iostream>
#include <iomanip>
using namespace std;


int main ()
{
    // Constants
    const int square = 1;
    const int rectangular = 2;
    const int round = 3;
    const int quit = 4;
    int choice = 0;
    int width = 0;
    int length = 0;
    int radius = 0;
    const double PI = 3.14;
    int area = 0;
    
    // Giving the choices to the user here asking for an input of the choice.
    cout << "Haverly’s Room Calculator\n";
    cout << "************************\n";
    cout << "1. Square Room\n";
    cout << "2. Rectangular Room\n";
    cout << "3. Round Room\n";
    cout << "4. Quit\n";
    cout << "Please enter a menu item (1-4) \n";
    cin >> choice;
    
    cout << fixed << showpoint << setprecision (2);
    
    // if else if statement for the choices picked
    if (choice == square)
    {
        cout << "Please enter the width of the room\n";
        cin >> width;
        cout << "Please enter the length of the room\n";
        cin>> length;
        area = length * width;
        cout << "The area of the Square Room is " << area << endl;
    }
    // if the user chose a rectangular room
    else if (choice == rectangular)
    {
        cout << "What is the length and width of the room?\n";
        cin >> length >> width;
        area= length * width;
        cout << "The area of the Rectangular Room is " << area << endl;
    }
    // if the user chose a round room
    else if (choice == round)
    {
        cout << "What is the radius of the Round Room?\n";
        cin >> radius;
        area = (PI * radius * radius);
        cout << "The area of the Round Room is " << area << endl;
    }
    // if the user chose quit
    else if (choice == quit)
    {
        cout<< " Thank you for using Haverly's Room Calculator\n";
    }
    
    //ensuring that the user only puts 1,2,3, or 4.
    if (choice > 4)
        cout << " Invalid integer for choice... error\n";
    
    if (choice < 1)
        cout << " Invalid integer for your choice... error\n";
    
    return 0;
    
    }
