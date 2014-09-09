/* 
 * File:   main.cpp
 * Author: Allison Lomheim
 * Created on September 8, 2014, 3:44 PM
 */

//System Level Libraries
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

int main(int argc, char** argv) {
    
    //Define Variables
    short number;
    char runAgn;
    
    //Utilize a do-while to run program again
    do
    {
        //Utilize a switch statement to navigate
        cout<<"Enter the number for the problem you want to see. 1-7"<<endl;
        cin>>number;

        switch (number)
        {
            case 1:
            {
                cout<<"This is the solution for Ch. 3 Problem 12.\n"<<endl;

                //Define Variables
                int month;

                float county=0.02f, //County sales tax converted from a percent
                      state=0.04f,  //State sales tax converted from a percent
                      totalC=0,     //total after county tax
                      totalS=0,     //total after state tax
                      totalA=0,     //total combined county and state tax
                      total=0,      //total after everything combined
                      sales;        //initial sales

                //Request inputs
                cout<<"Please input the month number."<<endl;
                cin>>month;
                cout<<"\n";
                cout<<"Please input sales for that month."<<endl;
                cin>>sales;
                cout<<"\n";

                //Calculations 
                totalS=sales*state;
                totalC=sales*county;
                totalA=totalS+totalC;
                total=totalA+sales;

                //Output information
                if (month==1)
                {
                    cout<<fixed<<showpoint<<setprecision(2);
                    cout<<"January"<<endl;
                    cout<<"--------------"<<endl;
                    cout<<"Sales: $"<<sales<<endl;
                    cout<<"County Sales Tax: $"<<totalC<<endl;
                    cout<<"State Sales Tax: $"<<totalS<<endl;
                    cout<<"Total Sales Tax: $"<<totalA<<endl;
                    cout<<"Total Sales: $"<<total<<endl;

                }else if (month==2)
                {
                    cout<<fixed<<showpoint<<setprecision(2);
                    cout<<"February"<<endl;
                    cout<<"--------------"<<endl;
                    cout<<"Sales: $"<<sales<<endl;
                    cout<<"County Sales Tax: $"<<totalC<<endl;
                    cout<<"State Sales Tax: $"<<totalS<<endl;
                    cout<<"Total Sales Tax: $"<<totalA<<endl;
                    cout<<"Total Sales: $"<<total<<endl;

                }else if (month==3)
                {
                    cout<<fixed<<showpoint<<setprecision(2);
                    cout<<"March"<<endl;
                    cout<<"--------------"<<endl;
                    cout<<"Sales: $"<<sales<<endl;
                    cout<<"County Sales Tax: $"<<totalC<<endl;
                    cout<<"State Sales Tax: $"<<totalS<<endl;
                    cout<<"Total Sales Tax: $"<<totalA<<endl;
                    cout<<"Total Sales: $"<<total<<endl;

                }else if (month==4)
                {
                    cout<<fixed<<showpoint<<setprecision(2);
                    cout<<"April"<<endl;
                    cout<<"--------------"<<endl;
                    cout<<"Sales: $"<<sales<<endl;
                    cout<<"County Sales Tax: $"<<totalC<<endl;
                    cout<<"State Sales Tax: $"<<totalS<<endl;
                    cout<<"Total Sales Tax: $"<<totalA<<endl;
                    cout<<"Total Sales: $"<<total<<endl;

                }else if (month==5)
                {
                    cout<<fixed<<showpoint<<setprecision(2);
                    cout<<"May"<<endl;
                    cout<<"--------------"<<endl;
                    cout<<"Sales: $"<<sales<<endl;
                    cout<<"County Sales Tax: $"<<totalC<<endl;
                    cout<<"State Sales Tax: $"<<totalS<<endl;
                    cout<<"Total Sales Tax: $"<<totalA<<endl;
                    cout<<"Total Sales: $"<<total<<endl;

                }else if (month==6)
                {
                    cout<<fixed<<showpoint<<setprecision(2);
                    cout<<"June"<<endl;
                    cout<<"--------------"<<endl;
                    cout<<"Sales: $"<<sales<<endl;
                    cout<<"County Sales Tax: $"<<totalC<<endl;
                    cout<<"State Sales Tax: $"<<totalS<<endl;
                    cout<<"Total Sales Tax: $"<<totalA<<endl;
                    cout<<"Total Sales: $"<<total<<endl;

                }else if (month==7)
                {
                    cout<<fixed<<showpoint<<setprecision(2);
                    cout<<"July"<<endl;
                    cout<<"--------------"<<endl;
                    cout<<"Sales: $"<<sales<<endl;
                    cout<<"County Sales Tax: $"<<totalC<<endl;
                    cout<<"State Sales Tax: $"<<totalS<<endl;
                    cout<<"Total Sales Tax: $"<<totalA<<endl;
                    cout<<"Total Sales: $"<<total<<endl;

                }else if (month==8)
                {
                    cout<<fixed<<showpoint<<setprecision(2);
                    cout<<"August"<<endl;
                    cout<<"--------------"<<endl;
                    cout<<"Sales: $"<<sales<<endl;
                    cout<<"County Sales Tax: $"<<totalC<<endl;
                    cout<<"State Sales Tax: $"<<totalS<<endl;
                    cout<<"Total Sales Tax: $"<<totalA<<endl;
                    cout<<"Total Sales: $"<<total<<endl;

                }else if (month==9)
                {
                    cout<<fixed<<showpoint<<setprecision(2);
                    cout<<"September"<<endl;
                    cout<<"--------------"<<endl;
                    cout<<"Sales: $"<<sales<<endl;
                    cout<<"County Sales Tax: $"<<totalC<<endl;
                    cout<<"State Sales Tax: $"<<totalS<<endl;
                    cout<<"Total Sales Tax: $"<<totalA<<endl;
                    cout<<"Total Sales: $"<<total<<endl;

                }else if (month==10)
                {
                    cout<<fixed<<showpoint<<setprecision(2);
                    cout<<"October"<<endl;
                    cout<<"--------------"<<endl;
                    cout<<"Sales: $"<<sales<<endl;
                    cout<<"County Sales Tax: $"<<totalC<<endl;
                    cout<<"State Sales Tax: $"<<totalS<<endl;
                    cout<<"Total Sales Tax: $"<<totalA<<endl;
                    cout<<"Total Sales: $"<<total<<endl;

                }else if (month==11)
                {
                    cout<<fixed<<showpoint<<setprecision(2);
                    cout<<"November"<<endl;
                    cout<<"--------------"<<endl;
                    cout<<"Sales: $"<<sales<<endl;
                    cout<<"County Sales Tax: $"<<totalC<<endl;
                    cout<<"State Sales Tax: $"<<totalS<<endl;
                    cout<<"Total Sales Tax: $"<<totalA<<endl;
                    cout<<"Total Sales: $"<<total<<endl;

                }else if (month==12)
                {
                    cout<<fixed<<showpoint<<setprecision(2);
                    cout<<"December"<<endl;
                    cout<<"--------------"<<endl;
                    cout<<"Sales: $"<<sales<<endl;
                    cout<<"County Sales Tax: $"<<totalC<<endl;
                    cout<<"State Sales Tax: $"<<totalS<<endl;
                    cout<<"Total Sales Tax: $"<<totalA<<endl;
                    cout<<"Total Sales: $"<<total<<endl;

                }
            }

            case 2:
            {
                cout<<"This is the solution for Ch. 3 Problem 13.\n"<<endl;

                //Define Variables
                short actualV;      //The actual value of the property

                float assessV,      //The assessment value of the actual value
                      propTax;      //The property tax per $100 of assessment value

                //Define Program
                cout<<"This program will calculate your\n"
                        "assessment value and property tax\n"
                        "based on the property value provided.\n"<<endl;

                //Request input of Actual Value
                cout<<"What is the value of the property?"<<endl;
                cin>>actualV;

                //Calculations
                cout<<fixed<<showpoint<<setprecision(2);
                assessV=static_cast<float>(actualV)*.6f;
                propTax=(assessV/100.0f)*.64f;

                //Output Results
                cout<<"Your assessment value for the property is $"<<assessV<<"."<<endl;
                cout<<"The property tax will be $"<<propTax<<"."<<endl;
            }

            case 3:
            {
                //Define Variable
                float quant,
                      price=99,
                      totalA,
                      totalB,
                      totalC;
                
                //Request inputs
                cout<<"Buying a certain quantity of packages could get you a discount."<<endl;
                cout<<"At $99 each, how many would you like?"<<endl;
                cin>>quant;
                
                //Calculations
                if(quant>=0&&quant<=9)
                {
                    totalA=quant*price;
                    cout<<"Your total is $"<<totalA<<endl;
                    
                }else if(quant>=10&&quant<=19)
                {
                    totalA=quant*price;
                    totalB=totalA*.2f;
                    totalC=totalA-totalB;
                    cout<<"Your total is $"<<totalC<<endl;
                
                }else if(quant>=20&&quant<=49)
                {
                    totalA=quant*price;
                    totalB=totalA*.3f;
                    totalC=totalA-totalB;
                    cout<<"Your total is $"<<totalC<<endl;
                
                }else if(quant>=50&&quant<=99)
                {
                    totalA=quant*price;
                    totalB=totalA*.4;
                    totalC=totalA-totalB;
                    cout<<"Your total is $"<<totalC<<endl;
                
                }else if(quant>=100)
                {
                    totalA=quant*price;
                    totalB=totalA*.5;
                    totalC=totalA-totalB;
                    cout<<"Your total is $"<<totalC<<endl;
                    
                }else 
                {
                    cout<<"You've typed in a wrong number."<<endl;
                }
            }
            
            case 4:
            {
                //Define Variables
                long int popS,      //Starting population
                         num,       //Used for for loop
                         days;      //Number of days it will multiply

                float popG,         //Population growth
                      finalP,       //The final population
                      e=2.71828182845; //Euler's number

                //Request inputs
                cout<<"Please input the starting population."<<endl;
                cin>>popS;
                cout<<"Please input the population growth per day.(In percent)"<<endl;
                cin>>popG;
                cout<<"Please insert the number of days they will multiply."<<endl;
                cin>>days;

                //Change percentage
                popG=popG/100.0f;

                //Use a for loop for the calculations
                for(num=1;num<=days;num++)
                {
                 finalP=popS*pow(e,(popG*num));
                 cout<<"During day "<<num<<" the population increased to "<<finalP<<endl;
                }
            }

            case 5:
            {
                //Define Variables 
                float fahr,
                      cels=0,
                      dumnum=0,
                      cels2;

                //Request Inputs
                cout<<"What was the temperature in Fahrenheit?"<<endl;
                cin>>fahr;

                //Conversions
                cels=(5.0f/9.0f)*(fahr-32);

                //Output Results
                cout<<fixed<<showpoint<<setprecision(1);
                cout<<"Your temperature is "<<cels<<" degrees Celsius"<<endl;

                //Use a loop to show conversions from 0 deg F to 20 deg F
                for(dumnum=0;dumnum<=20;dumnum++)
                {
                    cels2=(5.0f/9.0f)*(dumnum-32);
                    cout<<fixed<<showpoint<<setprecision(1);
                    cout<<dumnum<<" Degrees F = "<<cels2<<endl;
                }
            }
            
            case 6:
            {
                
            }
        }
        
        //Run Again?
        cout<<"Would you like to run the program again?"<<endl;
        cin>>runAgn;
        
    }while(runAgn=='y'||runAgn=='Y');
    
    return 0;
}

