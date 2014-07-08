/* 
 * File:   main.cpp
 * Author: Allison Lomheim
 * Created on July 2, 2014, 11:22 AM
 */

//System Level Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants 

//Function Prototypes

//Start the Program        
int main(int argc, char** argv) {
    //Input Variables
    float classA,classB,classC
          ,amntA,amntB,amntC;       //Amount and cost of each class
    
    //Variable Amount
    classA=15.00f;
    classB=12.00f;
    classC=9.00f;
    
    //Output Variables
    float income;                   //Income from all of the classes
    
    //Significant Figures
    cout<<fixed<<showpoint<<setprecision(2);
    
    //Display on Screen
    cout<<"How many people attended in Class A?"<<endl;
    cin>>amntA;
    cout<<"How many people attended in Class B?"<<endl;
    cin>>amntB;
    cout<<"How many people attended in Class C?"<<endl;
    cin>>amntC;
    
    //Calculations
    income=static_cast<float>(classA*amntA)+(classB*amntB)+(classC*amntC);
    
    cout<<"Your total income from ticket sales is $"
            <<income<<endl;
    
    //End Program
    return 0;
}

