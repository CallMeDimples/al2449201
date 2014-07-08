/* 
 * File:   main.cpp
 * Author: Allison Lomheim
 * Purpose: To solve problem 10 in Gaddis problem 10
 * Created on June 26, 2014, 9:59 PM
 */

//System Level Libraries
#include <iostream>
using namespace std;

//Program starts here!
int main(int argc, char** argv) {
    
    //Define which integer data type to use
    unsigned short gallons, miles;
    float mpg;
    
    //Define each variable
    gallons=12;
    miles=350;
    mpg=miles/gallons;
    
    //Display variables on the screen
    cout<<"If the car can drive "<<miles<< " miles per every "<<gallons<<" gallons then the car would have a total of "<<mpg<<" miles per gallon."<<endl;
    return 0;
}

