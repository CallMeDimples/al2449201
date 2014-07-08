/* 
 * File:   main.cpp
 * Author: Allison Lomheim
 * Purpose: To answer problem 1 from Gaddis Chapter 2
 * Created on June 26, 2014, 10:07 AM
 */

//System Level Libraries
#include <iostream>
using namespace std;

//User Libraries

//Function Prototypes

//Start Program Execution
int main(int argc, char** argv) {
    
    //Define which integer data type to use
    unsigned short num1, num2, total;
    
    //Define the constants given in the problem
    num1 = 62;
    num2 = 99;
    
    //Display on screen
    cout<<num1<<endl;
    cout<<num2<<endl;
    
    //Add both of the constants together to get a total
    total = num1 + num2;
    
    cout<<"The sum is "<<total<<endl;
    
    //Run Program, Run!
    return 0;
}

