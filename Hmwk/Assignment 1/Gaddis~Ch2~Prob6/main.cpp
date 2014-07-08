/* 
 * File:   main.cpp
 * Author: Allison Lomheim
 * Purpose: To answer Problem 6 from Gaddis chapter 2
 * Created on June 26, 2014, 9:28 PM
 */

//System Level Libraries
#include <iostream>
using namespace std;

//Program begins here!
int main(int argc, char** argv) {
    
    //Define which integer data type to use
    unsigned short payAmount, payPeriod, annualPay;/*Where payAmount is the amount
                                           * the employee is paid every pay period. 
                                           * payPeriod is the amount of periods 
                                           * received. And annualPay is the 
                                           * amount the employee earns each year.*/
    
    //Define the variables
    payAmount=1700.00;
    payPeriod=26;
    annualPay=payAmount*payPeriod;
    
    //Display variables on screen
    cout<<"The employee receives $"<<payAmount<<" each pay period."<<endl;
    cout<<"There are "<<payPeriod<<" pay periods each year."<<endl;
    cout<<"$"<<annualPay<<" is the total amount received each year."<<endl;
    
    //Run Program Run!
    return 0;
}

