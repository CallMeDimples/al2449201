/* 
 * File:   main.cpp
 * Author: Allison Lomheim
 * Purpose: To solve problem 7 in Gaddis chapter 2.
 * Created on June 26, 2014, 9:45 PM
 */

//System Level Libraries
#include <iostream>
using namespace std;

//Program begins here!
int main(int argc, char** argv) {
    
    //Define which integer data type to use
    float rise, fiveY, sevenY, tenY;/*Where rise is the amount the ocean level rises, 
                                     * fiveY is the level in 5 years, 
                                     * sevenY is the level in seven years, 
                                     * and tenY is the level in ten years.*/
    
    //Define each variable
    rise=1.5;
    fiveY=rise*5;
    sevenY=rise*7;
    tenY=rise*10;
    
    //Display the variables on the screen
    cout<<"If the ocean level rises "<<rise<<" millimeters each year, how high will it rise in..."<<endl;
    cout<<"5 years? "<<fiveY<<" millimeters"<<endl;
    cout<<"7 years? "<<sevenY<<" millimeters"<<endl;
    cout<<"10 years? "<<tenY<<" millimeters"<<endl;
    
    //End Program!
    return 0;
}

