/* 
 * File:   main.cpp
 * Author: Allison Lomheim
 * Created on July 2, 2014, 12:38 PM
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
    //Input Variables
    float test1,test2,test3,test4,test5;    //Scores of each test
    
    //Output Variables
    float avg;                              //Average of all tests
    
    //Enter each test score
    cout<<fixed<<showpoint<<setprecision(1);
    
    cout<<"Input each test score. Press 'Enter' button after each entry."<<endl;
    cin>>test1;
    cin>>test2;
    cin>>test3;
    cin>>test4;
    cin>>test5;
    
    //Calculations
    avg=(test1+test2+test3+test4+test5)/5.0f;
    
    //Output Average Score
    cout<<"Your average is "<<avg<<endl;
    
    //End Program
    return 0;
}

