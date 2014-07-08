/* 
 * File:   main.cpp
 * Author: Allison Lomheim
 * Created on July 2, 2014, 12:56 PM
 */

//System Level Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Program Begins Here
int main(int argc, char** argv) {
    //Declare variables
    float wavelength;
    
    //State the wavelength
    cout<<"What is the wavelength?"<<endl;
    cin>>wavelength;
    
    //State else/if
    if (wavelength>=5e0)
        cout<<"It is a Radiowave.";
    else if (wavelength>=5e-3)
        cout<<"It is a Microwave.";
    else if (wavelength>=5e-6)
        cout<<"It is an Infrared Wavelength.";
    else if (wavelength>=5e-6)
        cout<<"It is a Visible Wavelength.";
    else if (wavelength>=1e-7)
        cout<<"It is an Ultraviolet Wavelength.";
    else if (wavelength>=1e-9)
        cout<<"It is an X-Ray.";
    else 
        cout<<"It is a Gamma Ray."<<endl;
                 

    return 0;
}

