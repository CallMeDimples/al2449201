/* 
 * File:   main.cpp
 * Author: Allison Lomheim
 * Created on July 10, 2014, 1:42 PM
 */

#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
const float CNVGL=0.264179f;

//Function Prototypes

//Begin Program
int main(int argc, char** argv) {
    
    //Define Variables
    unsigned int liters1,  //Liters consumed 
                 miles1,
                 liters2,
                 miles2;   //Miles traveled
    
    float        gallons1,
                 gallons2,
                 mpg1,
                 mpg2;              //Miles per gallon
    
    char         runAgn;            //Option to re-use program
          
    //Allow user to input as many times desired
    do
    {
        //Information for the first car
        cout<<"Please enter the amount of gasoline "
              "consumed by the first car, in Liters."<<endl;
        cin>>liters1;
        cout<<"Now enter the amount of miles traveled."<<endl;
        cin>>miles1;

        //Apply the conversion from Liters to Gallons
        gallons1=CNVGL*liters1;

        //Calculate MPG
        mpg1=miles1/gallons1;
        
        //Output the MPG for the first car
        cout<<fixed<<showpoint<<setprecision(2)<<endl;
        cout<<"Your car delivered "<<mpg1<<" MPG.\n"<<endl;
        
        //Information for the second car
        cout<<"Please enter the amount of gasoline "
              "consumed by the second car, in Liters."<<endl;
        cin>>liters2;
        cout<<"Now enter the amount of miles traveled."<<endl;
        cin>>miles2;

        //Apply the conversion from Liters to Gallons
        gallons2=CNVGL*liters2;

        //Calculate MPG
        mpg2=miles2/gallons2;
        
        //Output the MPG for the second car
        cout<<fixed<<showpoint<<setprecision(2)<<endl;
        cout<<"Your car delivered "<<mpg2<<" MPG.\n"<<endl;
        
            //Utilize if else statement
            if (mpg1>mpg2)
            {
                cout<<"The first car has the best MPG."<<endl;
               
            }else if (mpg1<mpg2)
            {
                cout<<"The MPG of the second car is best."<<endl;
            
            }else if (mpg1=mpg2)
            {
                cout<<"The MPGs of both cars are equal."<<endl;
            }
        
        //Run the Program again
        cout<<"Would you like to find your MPG again? (Y/N)"<<endl;
        cin>>runAgn;
        cout<<"\n\n";
        
    }while (runAgn=='Y'||runAgn=='y');
    
    //End Program
    return 0;
}

