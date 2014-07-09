/* 
 * File:   main.cpp
 * Author: Allison Lomheim
 * Created on July 8, 2014, 1:32 PM
 */

//System Level Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants 

//Function Prototypes

//Begin Program
int main(int argc, char** argv) {
    //Define Variables
    int length1,           //Lengths, widths, and areas of each rectangle
        width1,
        area1,
        length2,
        width2,
        area2;
    
    //Ask for input
    cout<<"Press ENTER after each entry."<<endl;
    cout<<"Enter the length of the first rectangle."<<endl;
    cin>>length1;
    cout<<"Enter the width of the first rectangle."<<endl;
    cin>>width1;
    cout<<"Now enter the length of the second rectangle."<<endl;
    cin>>length2;
    cout<<"Enter the width of the second rectangle."<<endl;
    cin>>width2;
    
    //Calculations
    area1=length1*width1;
    area2=length2*width2;
    
    //Use if else statement to find which is greater
    if (area1>area2)
    {
        cout<<"The first rectangle is larger than the second.";
    }else if (area2>area1)
    {
        cout<<"The second rectangle is larger than the first.";
    }else if (area1==area2)
    {
        cout<<"They have the same area.";
    }else
    {
        cout<<"I don't even know what you did wrong.";
    }
    
    //Run Program, Run!
    return 0;
}

