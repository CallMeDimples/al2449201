/* 
 * File:   main.cpp
 * Author: Allison Lomheim
 * Created on July 2, 2014, 1:38 PM
 */

//System Level Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Start Program
int main(int argc, char** argv) {
    //Define Variables
    string month1,month2,month3;
    float r1,r2,r3,avg;               //Defines each month and rainfall in each month
    
    //Ask for variables
    cout<<"Name the first month and amount of "
            "rainfall by pushing enter between each."<<endl;
    cin>>month1;
    cin>>r1;
    cout<<"Name the second month and amount of "
            "rainfall during that month."<<endl;
    cin>>month2;
    cin>>r2;
    cout<<"Name the third month and amount of "
            "rainfall during that month."<<endl;
    cin>>month3;
    cin>>r3;
    
    //Find the average
    avg=(r1+r2+r3)/3;
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"The average rainfall during those months is "<<avg<<endl;
    
    //Run Program
    return 0;
}

