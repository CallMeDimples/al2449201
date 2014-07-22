/* 
 * File:   main.cpp
 * Author: Allison Lomheim
 * Created on July 8, 2014, 4:46 PM
 */

//System Level Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants 

//Function Prototypes

//Begin Program
int main(int argc, char** argv) {
    
    //Define Variables
    unsigned short height,  //input in inches
                   weight,  //input in pounds
                   age,
                   waistInc=2;     //input in years
    float hatSize,      //the persons hat size (output)
          jacketSize,   //the persons jacket size (output)
          waistSize;    //size of the person waist (output)
    
    //Repetition of program
    do
    {
    
        //Ask for measurements
        cout<<"This program will output the sizes for "
                "your hat, jacket, and waist.\n"<<endl;
        cout<<"Please insert your height in inches."
                "[Ex: 68in = 5ft 8in ]"<<endl;
        cin>>height;
        cout<<"Please insert your weight in lbs."<<endl;
        cin>>weight;
        cout<<"Please insert your age in years."<<endl;
        cin>>age;

        //Calculations
        hatSize=weight*2.9f/height;

        if (age<=39&&age>0)
        {
            jacketSize=height*weight/288.0f;

        }else if (age>39&&age<=49)
        {
            jacketSize=(height*weight/288.0f)+(1/8.0f);

        }else if (age>49&&age<=59)
        {
            jacketSize=(height*weight/288.0f)+2*(1/8.0f);

        }else if (age>59&&age<=69)
        {
            jacketSize=(height*weight/288.0f)+3*(1/8.0f);

        }else if (age>69&&age<=79)
        {
            jacketSize=(height*weight/288.0f)+4*(1/8.0f);

        }else if (age>79&&age<=89)
        {
            jacketSize=(height*weight/288.0f)+5*(1/8.0f);

        }else if (age>89&&age<=99)
        {
            jacketSize=(height*weight/288.0f)+6*(1/8.0f);

        }else
        {
            cout<<"How are you still alive?"<<endl;
        }
        
        for ()

        cout<<fixed<<showpoint<<setprecision(1);
        cout<<hatSize<<endl;
        cout<<jacketSize<<endl;

    }
    
    return 0;
}

