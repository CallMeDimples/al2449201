/* 
 * File:   main.cpp
 * Author: Allison Lomheim
 * Created on July 8, 2014, 4:46 PM
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
    float bouyF,
          volume,
          radius,
          fluid=62.4f;
          
    int weightF,
        weightO;
    
    //Request Information
    cout<<"What is the weight of the object in lbs?"<<endl;
    cin>>weightO;
    cout<<"What is the radius of the object in inches?"<<endl;
    cin>>radius;
    
    //Calculations
    volume=4*3.14159265358f*pow(radius,3)/3;
    bouyF=volume*fluid;
    
    //If else statement
    if (bouyF>=weightO)
    {
        cout<<"The object will float.";
    }else if (bouyF<weightO)
    {
        cout<<"The object will sink.";
    }
    
    //Run, Program, Run!
    return 0;
}

