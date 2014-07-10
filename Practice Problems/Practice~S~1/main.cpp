/* 
 * File:   main.cpp
 * Author: Allison Lomheim
 * Created on July 8, 2014, 4:26 PM
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
    char choice1,       //First choice of rock, paper scissors
         choice2,       //Second choice of the above
         playA;         //Choice to play again
    
    //Ask to play again
    do 
    {
    
        //Enter your choices
        cout<<"Welcome to the Rock, Paper, Scissors game!\n";
        cout<<"Please enter R,P or S as your first choice.\n";
        cin>>choice1;
        cout<<"\nNow please enter your second choice.\n";
        cin>>choice2;

        //Initiate game
        if ((choice1=='P'||choice1=='p')&&(choice2=='S'||choice2=='s'))
        {
            cout<<"Scissors is the victor!\n";
        
        }else if ((choice1=='S'||choice1=='s')&&(choice2=='P'||choice2=='p'))
        {
            cout<<"Scissors is the victor!\n";
            
        }else if ((choice1=='P'||choice1=='p')&&(choice2=='R'||choice2=='r'))
        {
            cout<<"Paper is the victor!\n";
            
        }else if ((choice1=='R'||choice1=='r')&&(choice2=='P'||choice2=='p'))
        {
            cout<<"Paper is the victor!\n";
            
        }else if ((choice1=='P'||choice1=='p')&&(choice2=='P'||choice2=='p'))
        {
            cout<<"There is no winner.\n";
            
        }else if ((choice1=='S'||choice1=='s')&&(choice2=='R'||choice2=='r'))
        {
            cout<<"Rock is the victor!\n";
            
        }else if ((choice1=='R'||choice1=='r')&&(choice2=='S'||choice2=='s'))
        {
            cout<<"Rock is the victor!\n";
    
        }else if ((choice1=='R'||choice1=='r')&&(choice2=='R'||choice2=='r'))
        {
            cout<<"There is no winner.\n";
            
        }else if ((choice1=='S'||choice1=='s')&&(choice2=='S'||choice2=='s'))
        {
            cout<<"There is no winner.\n";
            
        }else
        {
            cout<<"You've entered in something dumb.\n"<<endl;
        }

        //Request if game would like to be played again
        cout<<"Would you like to play again? (Y/N)"<<endl;
        cin>>playA;
        
    } while (playA=='Y'||playA=='y');
    
    //Run, Program Run!
    return 0;
}

