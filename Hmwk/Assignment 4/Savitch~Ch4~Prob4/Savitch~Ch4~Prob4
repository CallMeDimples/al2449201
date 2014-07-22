/* 
 * File:   main.cpp
 * Author: Allison Lomheim
 * Created on July 11, 2014, 7:30 PM
 */

#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
const float CNVP=100.0f;   //Conversion to percentage

//Function Prototypes

//Begin Program
int main(int argc, char** argv) {
    
    //Define Variables
    float itemY,    //Price of item last year
          itemT,    //Price of item today
          priceD;   //Difference in price of two items
    double infRate; /*Inflation rate in percentage. PROBLEM FOUR REQUESTED A 
                     *DOUBLE. OTHERWISE IT WOULD NOT HAVE BEEN UTILIZED.*/
    char runAgn;    //Option to run program again
    
    //Repetition of the program
    do
    {
        cout<<"This program will give you the inflation rate "
                "of a specified item.\n"<<endl;
        cout<<"Please enter the price of the item this time last year."<<endl;
        cin>>itemY;
        cout<<"\nPlease enter the price of the same item currently."<<endl;
        cin>>itemT;
        
        //Calculations
        priceD=(itemT-itemY)*1.0f;

        infRate=priceD*CNVP/itemY*1.0f;

        //Output the results
        cout<<fixed<<showpoint<<setprecision(1);
        cout<<"The inflation rate for that item is "<<infRate<<"%\n"<<endl;

        //Request to Repeat
        cout<<"Would you like to run the program "
               "again for another item? (Y/N)"<<endl;
        cin>>runAgn;
        cout<<"\n\n"<<endl;
        
    }while (runAgn=='Y'||runAgn=='y');

    //Run Program, Run    
    return 0;
}

