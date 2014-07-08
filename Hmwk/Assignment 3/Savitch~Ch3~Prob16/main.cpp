/* 
 * File:   main.cpp
 * Author: Allison Lomheim
 * Created on July 7, 2014, 10:28 AM
 */

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants 

//Function Prototypes

//Begin Program
int main(int argc, char** argv) {
    //Define Variables 
    int cels=100,fahr=9*cels/5+32;
    
    //Use a while loop
    while(cels!=fahr){
        cels--;
        fahr=9*cels/5+32;
    }
    
    //Ouput the result
    cout<<"Celsius is the same as Fahrenheit at "<<cels<<endl;
    
    //Run Program, Run!
    return 0;
}

