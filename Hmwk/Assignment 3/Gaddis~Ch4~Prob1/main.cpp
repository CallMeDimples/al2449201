/* 
 * File:   main.cpp
 * Author: Allison Lomheim
 * Created on July 7, 2014, 10:28 AM
 */

#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants 

//Function Prototypes

//Begin Program
int main(int argc, char** argv) {
    //Define Variables
    float num1,num2;
    
    //Request to input variables
    cout<<"Enter in one number."<<endl;
    cin>>num1;
    cout<<"Enter in the second number."<<endl;
    cin>>num2;
    
    //Use if else statement
    if (num1>num2)
    {
        cout<<"The first number is larger than the second.";
    }else{
            if (num1<num2){
                cout<<"The second number is larger than the first.";
            }else{
                    if (num1=num2){
                        cout<<"The first is equal to the second.";
                    }
                }
    }
    //End Program
    return 0;
}

