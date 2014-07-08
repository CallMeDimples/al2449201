/* 
 * File:   main.cpp
 * Author: Allison Lomheim
 * Purpose: to solve problem number 4 in Gaddis Chapter 2
 * Created on June 26, 2014, 10:34 AM
 */

//System Level Library 
#include <iostream>
using namespace std;
    
    //Program starts here!
int main(int argc, char**argv) {
    //Define the integer data type to use for the variables
    float meal, tax, tip, total;
    
    //Define the variables
    meal = 44.50f;
    tax = 6.75f;
    tip = .15f;
    total = (meal + tax)+((meal + tax)*tip);
    
    //Display the variables on the screen
    cout<<"The cost of the meal was $"<<meal<<endl;
    cout<<"The tax amount is $"<<tax<<endl;
    cout<<"The tip is 15% of the meal and tax"<<endl;
    cout<<"The total is $"<<total<<endl;
    //End program!
    return 0;
}

