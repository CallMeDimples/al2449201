/* 
 * File:   main.cpp
 * Author: Allison Lomheim
 * Created on July 14, 2014, 11:00 AM
 */

#include <cmath>
#include <iomanip>
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
float save1(float,float,int);

//Begin Program
int main(int argc, char** argv) {

    //Define Variables
    float prin=100;//Principal in dollars
    float intrst=5;//Interest in Percent
    int periods=72/5+1;//Rule of 72,make sure balance is
    
    //Process - Calculate the savings
    float sav1=save1(prin,intrst/100,periods);
    float sav2=save2(prin,intrst/100,periods);
    
    //Output the Results
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"Savings with power function = $"<<sav1<<endl; 
    cout<<"Savings with  loop construct = $"<<sav2<<endl;
    
    return 0;
}
/* Savings Function utilize the power function
    Inputs
        p=principal in $'s
        i=interest  in decimals
        n=compounding periods in years
    Outputs
        float value representing balance in dollars!*/
float save1(float p, float)