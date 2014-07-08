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
    char day,dum;
    unsigned short minutes,hour;
    float bill;
    
    //Input the data
    cout<<"Telephone Bill for a Call"<<endl;
    cout<<"Input the day of the week"<<endl;
    cout<<"Mo, Tu, We, Th, Fr, Sa, Su"<<endl;
    cin>>day>>dum;
    cout<<"Input the time of the call"<<endl;
    cout<<"Military time 01:30PM = 13:30 military"<<endl;
    cin>>setw(2)>>hour>>dum>>dum>>dum;
    cout<<"Input the duration of call in minutes"<<endl;
    cin>>minutes;
    
    //Calculate the Bill
    if(day=='S'){
        bill=0.15f*minutes;
    }else{
        if(hour>=8&&hour<18){
            bill=4e-1f*minutes;
        }else{
            bill=2.5e-1f*minutes;
        }
    }
    
    //Output the results
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"Your total is $"<<bill<<endl;
    return 0;
}

