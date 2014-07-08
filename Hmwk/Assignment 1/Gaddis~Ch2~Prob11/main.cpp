/* 
 * File:   main.cpp
 * Author: Allison Lomehim
 * Purpose: To solve problem 11 in Gaddis chapter 2
 * Created on June 26, 2014, 10:13 PM
 */

//System Level Libraries
#include <iostream>
using namespace std;

//Program begins here!
int main(int argc, char** argv) {
    
    //Define integer data type
    float gallons, inTown, onHighway;
    
    //Define each variable
    gallons=20;
    inTown=gallons*21.5f;
    onHighway=gallons*26.8f;
    
    //Display on screen
    cout<<"The car's tank can hold 20 gallons."<<endl;
    cout<<"When driven in town it can drive "<<inTown<<" miles."<<endl;
    cout<<"When driven on the highway it can drive "<<onHighway<<" miles."<<endl;
    
    //Run Program Run!
    return 0;
}

