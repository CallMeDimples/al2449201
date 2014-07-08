/* 
 * File:   main.cpp
 * Author: Allison Lomheim
 * Purpose: to solve problem 3 in Gaddis chapter 2
 * Created on June 26, 2014, 5:41 PM
 */

//System Level Library
#include <iostream>
using namespace std;

//Program Starts Here
int main(int argc, char** argv) {
    
    //Define which integer data type to use
    short num1, num2, num3, num4, num5,
            sum, nums, avg;
    
    //Define each integer
    num1=28;
    num2=32;
    num3=37;
    num4=24;
    num5=33;
    nums=5;
    
    //Find the sum of all of the numbers
    sum=num1+num2+num3+num4+num5;
    
    //Find the average of all of the numbers
    avg=sum/nums;
    
    //Display each variable on the screen
    cout<<num1<<endl;
    cout<<num2<<endl;
    cout<<num3<<endl;
    cout<<num4<<endl;
    cout<<num5<<endl;
    cout<<"This is the Sum of the numbers "<<sum<<endl;
    cout<<"This is the Average of the numbers "<<avg<<endl;
    return 0;
}

