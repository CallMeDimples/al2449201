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

//Execution Starts Here!
int main(int argc, char** argv) {
    //Define Variables 
    int cels=100,fahr=((9/5)*cels)+32;
    
    //Use a for loop
    for(cels=100,fahr=((9/5)*cels)+32;cels!=fahr;cels--){
        fahr=((9/5)*cels)+32;
    }
    
    //Ouput the result
    cout<<"Celsius is the same as Fahrenheit at "<<cels<<endl;
    
    //Run Program, Run!
    return 0;
}

