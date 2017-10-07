//
//  main.cpp
//  PRG-5-22-Square-Display
//
//  Created by Keith Smith on 10/7/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//
//
//  Write a program that asks the user for a positive integer no greater than 15. The program
//  should then display a square on the screen using the character 'X.' The number
//  entered by the user will be the length of each side of the square. For example, if the
//  user enters 5, the program should display the following:
//
//  XXXXX
//  XXXXX
//  XXXXX
//  XXXXX
//  XXXXX
//
//  If the user enters 8, the program should display the following:
//
//  XXXXXXXX
//  XXXXXXXX
//  XXXXXXXX
//  XXXXXXXX
//  XXXXXXXX
//  XXXXXXXX
//  XXXXXXXX
//  XXXXXXXX

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int intSquareSize;
    
    cout << "Please enter a positive integer value less than 15:\n";
    cin >> intSquareSize;
    
    cout << endl << endl;
    
    while(!cin || intSquareSize <= 0 || intSquareSize > 15)
    {
        cout << "Please enter a positive integer value less than 15:\n";
        cin.clear();
        cin.ignore();
        cin >> intSquareSize;
    }
    
    // Double loop, once for rows again for columns, same value of intSquareSize
    for(int i = 0 ; i < intSquareSize ; i++)
    {
        for(int i = 0 ; i < intSquareSize ; i++)
        {
            cout << "X";
        }
        
        cout << endl;
    }
    
    return 0;
}



