// Week2Function.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int valueCubed(int value);

int main()
{
    int num;
    int total;

    cout << "Enter value to be cubed: ";  
    cin >> num;

    total = valueCubed(num);

    cout << "Value cubed is: " << total;
}

int valueCubed(int value) {

    int cubed = value * value * value;

    return cubed;
    
}


