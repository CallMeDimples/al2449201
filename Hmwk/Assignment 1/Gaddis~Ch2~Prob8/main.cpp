/* 
 * File:   main.cpp
 * Author: Allison Lomheim
 * Purpose: Solve problem 8 in Gaddis chapter 2
 * Created on June 26, 2014, 11:00 AM
 */

//System Level Libraries
#include <iostream>
using namespace std;

//Program starts here!
int main(int argc, char** argv) {
    
    //Define which integer data type to use
    float item1, item2, item3, item4, item5, 
            subtotal, salestax, total;
    
    //Identify amounts of variables
    item1=12.95;
    item2=24.95;
    item3=6.95;
    item4=14.95;
    item5=3.95;
    subtotal=item1 + item2 + item3 + item4 + item5;
    salestax=.06;
    total=(item1*salestax)+(item2*salestax)+(item3*salestax)+
            (item4*salestax)+(item5*salestax)+subtotal;
    
    //Display amount of each variable
    cout<<"The price of item 1 is $"<<item1<<endl;
    cout<<"The price of item 2 is $"<<item2<<endl;
    cout<<"The price of item 3 is $"<<item3<<endl;
    cout<<"The price of item 4 is $"<<item4<<endl;
    cout<<"The price of item 5 is $"<<item5<<endl;
    cout<<"The subtotal is $"<<subtotal<<endl;
    cout<<"The sales tax is 6%"<<endl;
    cout<<"Therefore the total is $"<<total<<endl;
    
    //End Program!
    return 0;
}

