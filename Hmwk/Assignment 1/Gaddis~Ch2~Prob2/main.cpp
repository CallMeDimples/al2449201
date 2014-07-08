/* 
 * File:   main.cpp
 * Author: Allison Lomheim
 * Purpose: To solve problem 2 in Gaddis Chapter 2
 * Created on June 26, 2014, 12:09 PM
 */

//System Level Libraries
#include <iostream>
using namespace std;

//Program Starts Here
int main(int argc, char** argv) {
    
    //Define which integer data type to use for variables
    unsigned int gTotal, total;//Where gTotal is the amount made that year and total is the amount made by East Coast division 
    float totalP;//Where totalP is the percentage the East Coast division generates
    
    //Define the amount of the variables
    gTotal=4600000;
    totalP=.62;
    
    //Calculate the amount made by the East Coast sales division
    total=4600000*.62;
    
    //Display each variable on the screen
    cout<<"The grand total being made this year is $"<<gTotal<<endl;
    cout<<"The percentage the East Coast sales "
            "division generates of the grand total is 62%"<<endl;
    cout<<"The amount, in cash, the East Coast sales division "
            "generates is roughly $"<<total<<endl;
    
    //End Program
    return 0;
}

