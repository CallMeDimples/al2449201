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
    int count_down;
    cout<<"How many greetings would you like?"<<endl;
    cin>>count_down;
    
    //Use a While statement
    while (count_down>0){
        cout<<"Hello ";
        count_down -= 1;
    }
    
    //Finish 
    cout<<endl;
    cout<<"That's all!"<<endl;
    return 0;
}

