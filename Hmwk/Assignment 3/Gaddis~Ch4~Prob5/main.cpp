/* 
 * File:   main.cpp
 * Author: Allison Lomheim
 * Created on July 8, 2014, 4:26 PM
 */

//System Level Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants 

//Function Prototypes

//Begin Program
int main(int argc, char** argv) {
    //Define Variables
    float BMI;
    int weight,
        height;
    
    //Ask to input variables
    cout<<"Please enter your weight.\n"
          "No decimal places. In lbs."<<endl;
    cin>>weight;
    cout<<"Please enter your height.\n"
          "No decimal places. In inches."<<endl;
    cin>>height;
    
    //Calculations
    BMI=(weight*703)/pow(height,2);
    
    //Utilize if else statement
    if (BMI>0)
    {
        cout<<"Your BMI is "<<BMI<<".\n"<<endl;
    }if (BMI>25)
    {
        cout<<"You are considered to be overweight.";
    }else if (BMI<18.5f)
    {
        cout<<"You are considered to be underweight.";
    }else if (BMI>=18.5f&&BMI<25)
    {
        cout<<"You're weight is under control.";
    }else
    {
        cout<<"You input something incorrectly.";
    }
    
    //Run Program, Run!
    return 0;
}

