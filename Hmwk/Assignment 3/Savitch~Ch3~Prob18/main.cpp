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
    int temp;       //The temperature that cannot include 1,4,7
    
    //Input Variables
    cout<<"Please insert desired temperature from 0 degrees\n"
            " to 999 degrees then click ENTER.\n";
    cin>>temp;
    
    //Use an if else statement
    if ((temp>0)&&(temp<=100)){
        cout<<"Use 50 or 99 degrees.\n";
    }else if ((temp>=101)&&(temp<=200))
    {
        cout<<"Use 99 degrees or 200 degrees.\n";
    }else if (temp>=201&&temp<=300)
    {
        cout<<"Use 200, 250, or 300 degrees.\n";
    }else if (temp>=301&&temp<=400) 
    {
        cout<<"Use 300, 350, or 399 degrees.\n";
    }else if (temp>=401&&temp<=500)
    {
            cout<<"Use 399 or 500 degrees.\n";
    }else if (temp>=501&&temp<=600)
    {
            cout<<"Use 500, 550, or 600 degrees.\n";
    }else if (temp>=601&&temp<=700)
    {
            cout<<"Use 600, 650, or 699 degrees.\n";
    }else if (temp>=701&&temp<=800)
    {
            cout<<"Use 699 or 800 degrees.\n";
    }else if (temp>=801&&temp<=900)
    {
            cout<<"Use 800, 850, or 900 degrees.\n";
    }else if (temp>=90&&1temp<=999)
    {
            cout<<"Use 900, 950, or 999 degrees.\n";
        }else{
            cout<<"I said 1 through 999.\n";
        }
    cout<<"The lower the temperature the longer you have\n"
            "to cook, so make sure that the correct time is also chosen."<<endl;
    return 0;
}

