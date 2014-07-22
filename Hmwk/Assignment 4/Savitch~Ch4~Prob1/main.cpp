/* 
 * File:   main.cpp
 * Author: Allison Lomheim
 * Created on July 10, 2014, 12:45 PM
 */

#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
const float CNVGL=0.264179f;

//Function Prototypes

//Begin Program
int main(int argc, char** argv) {
    
    //Define Variables
    unsigned int liters,  //Liters consumed 
                 miles;   //Miles traveled
    float gallons,
          mpg;              //Miles per gallon
    char runAgn;            //Option to re-use program
          
    //Allow user to input as many times desired
    do
    {
     cout<<"Please enter the amount of gasoline"
             " consumed, in Liters."<<endl;
     cin>>liters;
     cout<<"Now enter the amount of miles traveled."<<endl;
     cin>>miles;
     
     //Apply the conversion from Liters to Gallons
     gallons=CNVGL*liters;
     
     //Calculate MPG
     mpg=miles/gallons;
    
     //Output the MPG
     cout<<fixed<<showpoint<<setprecision(2)<<endl;
     cout<<"Your car delivered "<<mpg<<" MPG.\n"<<endl;
     cout<<"Would you like to find your MPG again? (Y/N)"<<endl;
     cin>>runAgn;
     cout<<"\n\n";
     
    }while (runAgn=='Y'||runAgn=='y');
    
    //End Program
    return 0;
}

