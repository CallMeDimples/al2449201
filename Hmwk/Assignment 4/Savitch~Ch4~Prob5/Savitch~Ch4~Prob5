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
double itemRateF (float itemT_par, double infRate_par);
//Computes the inflation rate in the future for that item
//Again, DOUBLE WAS REQUESTED.

//Begin Program
int main(int argc, char** argv) {
    
    //Define Variables
    float itemY,    //Price of item last year
          itemT,    //Price of item today
          priceD,   //Difference in price of two items
          priceF;   //Future price 
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
        priceF=itemRateF (itemT, infRate);

        //Output the results
        cout<<fixed<<showpoint<<setprecision(2);
        cout<<"The inflation rate for that item is "<<infRate<<"%\n"<<endl;

        //Continued for future price
        cout<<"Your future price based on the current price "
                "is $"<<priceF<<endl;
        
        //Request to Repeat
        cout<<"Would you like to run the program "
               "again for another item? (Y/N)"<<endl;
        cin>>runAgn;
        cout<<"\n\n"<<endl;
        
    }while (runAgn=='Y'||runAgn=='y');

    //Run Program, Run    
    return 0;
}

double itemRateF (float itemT_par, double infRate_par)
{
    const float percent=100.0f;
    float future;
    
    future=itemT_par*infRate_par;
    return ((future/percent)+itemT_par);
}