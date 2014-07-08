/* 
 * File:   main.cpp
 * Author: Allison Lomheim
 * Purpose: To solve problem 12 in Gaddis chapter 2
 * Created on June 26, 2014, 10:22 PM
 */

//System Level Libraries
#include <iostream>
using namespace std;

//Start the Program!
int main(int argc, char** argv) {
     
    //Define integer data type
    unsigned int oneAcre, manyAcre;/*Where oneAcre is the amount of square feet in one acre
                                    * and manyAcre is how many acres in that amount of square feet*/ 
    
    //Define variables
    oneAcre=43560;
    manyAcre=389767/oneAcre;
    
    //Display on screen
    cout<<"One acre is "<<oneAcre<<" square feet."<<endl;
    cout<<"How many acres are in 389,767 square feet? "<<manyAcre<<" acres."<<endl;
    
    //Run Program, Run!
    return 0;
}

