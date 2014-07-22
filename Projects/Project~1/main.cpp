/* 
 * File:   main.cpp
 * Author: Allison Lomheim
 * Created on July 14, 2014, 10:51 AM
 */

//System Level Libraries
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
#include <cmath>
using namespace std;
 
//User Libraries
 
//Global Constants
 
//Function Prototypes
 
//Begin Program
int main(int argc, char** argv) {

    //Define Variables
    int players;//Number of players playing the game
    char playAgn;
    
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Would you like to play again?
    do
    {
        //Introduce game
        cout<<"~~Welcome to the Beetle game!~~\n"<<endl;
        cout<<"In this game you need to be the first to draw a complete beetle.\n"
                "Each number on the die represents a part of a beetle.\n"
                "To get a body, which is the first thing you must get before "
                "you draw anything else, you must roll a 6. \n"
                "To get a head, which you must get before eyes and the antenna,"
                "you must roll a 5.\nTo get eyes you must roll 1 and since there are "
                "two eyes, you must roll a 1 twice.\nTo get the antenna you must roll"
                "a 2 twice.\nTo get the legs you must roll a 3 six times.\n"
                "To get wings you must roll a 4 twice.\nThe first player to complete "
                "their beetle will be the winner!\n"<<endl;
        cout<<"Please insert the number of players that want to play. 2 or 3 players"<<endl;
        cin>>players;
        
        while (!(players>=2&&players<=3))   //I chose three players because writing 
        {                                   //code for anymore was a bit extensive
            cout<<"You cannot have more than three or less than "
                    "two players."<<endl;
        }
         
        //Utilize a switch statement for the number of players
            switch (players)
            {
                case 2:
                {
                    //Define Variables
                    char name1[20],         //Some people may have a long
                         name2[20];         //first name
                    
                    int tossB1,            //Player ones toss for the body
                        dice=rand()%6+1,   //Numbers [1,6] resembling a die
                        tossB2,            //Player twos toss for the body
                        throwsB,
                        throwsB1=rand()%100,//Throws set at 100 because no one would want to toss dice more than that
                        throwsB2=rand()%100,
                        sum1,
                        sum2;
                    
                    //Decide who is first player
                    cout<<"Please insert the first name."<<endl;
                    cin>>name1;
                    cout<<"Please enter the second name."<<endl;
                    cin>>name2;
                    cout<<"\n";

                    //Throw the dice to get the body (one body)
                    tossB1=throwsB1;
                    tossB2=throwsB2;
                    
                    for (throwsB;throwsB>=0;throwsB--)
                    {
                        switch (dice)
                        {
                            case 6:
                            {
                                tossB1++;
                                tossB2++;
                            }
                        }
                    }
                    
                    if(tossB1!=6)tossB1++;

                        cout<<"It took "<<name1<<" "<<tossB1<<" times to get the body."<<endl;

                    if(tossB2!=6)tossB2++;

                        cout<<"It took "<<name2<<" "<<tossB2<<" times to get the body."<<endl;

                    if (tossB1<tossB2)
                    {
                        cout<<"\nCongratulations "<<name1<<"! You got the body first!\n"<<endl;

                    }else if (tossB1>tossB2)
                    {
                        cout<<"\nCongratulations "<<name2<<"! You got the body first!\n"<<endl;

                    }else
                    {
                        cout<<"\nYou tied! Try and win another to score more points!\n"<<endl;
                    }
                    
                    //Variables for the head (one head)
                    int tossH1,             //Player ones toss for the head
                        tossH2,             //Player twos toss for the head
                        throwsH,            //Needed for the for-loop
                        throwsH1=rand()%100,//Throws set at 100 because no one would want to toss dice more than that
                        throwsH2=rand()%100;
                            
                    //Throw the dice to get the head
                    tossH1=throwsH1;
                    tossH2=throwsH2;
                    
                    for (throwsH;throwsH>=0;throwsH--)
                    {
                        switch (dice)
                        {
                            case 5:
                            {
                                tossH1++;
                                tossH2++;
                            }
                        }
                    }
                    
                    if(tossH1!=5)tossH1++;

                        cout<<"It took "<<name1<<" "<<tossH1<<" times to get the head."<<endl;

                    if(tossH2!=5)tossH2++;

                        cout<<"It took "<<name2<<" "<<tossH2<<" times to get the head."<<endl;

                    if (tossH1<tossH2)
                    {
                        cout<<"\nCongratulations "<<name1<<"! You got the head first!\n"<<endl;

                    }else if (tossH1>tossH2)
                    {
                        cout<<"\nCongratulations "<<name2<<"! You got the head first!\n"<<endl;

                    }else
                    {
                        cout<<"\nYou tied! Try and win another to score more points!\n"<<endl;
                    }
                            
                    //Variables for the eyes (two eyes)
                    int tossE1, //Player ones first toss for the eyes
                        tossE2, //Player twos first toss for the eyes
                        tossE3, //Player ones second toss for the eyes
                        tossE4, //Player twos second toss for the eyes
                        throwsE,            //Needed for the for-loop
                        throwsE1=rand()%100,//Throws set at 100 because no one would want to toss dice more than that
                        throwsE2=rand()%100,
                        throwsE3=rand()%100,
                        throwsE4=rand()%100,
                        sumE1,
                        sumE2;
                            
                    //Throw the dice to get the eyes
                    tossE1=throwsE1;
                    tossE2=throwsE2;
                    tossE3=throwsE3;
                    tossE4=throwsE4;
                    
                    for (throwsE;throwsE>=0;throwsE--)
                    {
                        switch (dice)
                        {
                            case 1:
                            {
                                tossE1++;
                                tossE2++;
                                tossE3++;
                                tossE4++;
                            }
                        }
                    }
                    
                    if(tossE1!=1)tossE1++;
                    if(tossE2!=1)tossE2++;
                    if(tossE3!=1)tossE3++;
                    if(tossE4!=1)tossE4++;

                    //Calculations
                    sumE1=tossE1+tossE3;
                    sumE2=tossE2+tossE4;

                    //Display Sum
                    cout<<"It took "<<name1<<" "<<sumE1<<" rolls to get the both eyes."<<endl;
                    cout<<"It took "<<name2<<" "<<sumE2<<" rolls to get the both eyes."<<endl;

                    if (sumE1<sumE2)
                    {
                        cout<<"\nCongratulations "<<name1<<"! You got both eyes first!\n"<<endl;

                    }else if (sumE1>sumE2)
                    {
                        cout<<"\nCongratulations "<<name2<<"! You got the both eyes first!\n"<<endl;

                    }else
                    {
                        cout<<"\nYou tied! Win another to score more points!\n"<<endl;
                    }
                            
                    //Variables for the antenna (two antenna)
                    int tossA1, //Player ones first toss for the antenna
                        tossA2, //Player twos first toss for the antenna
                        tossA3, //Player ones second toss for the antenna
                        tossA4; //Player twos second toss for the antenna
                            
                    int throwsA,            //Needed for the for-loop
                        throwsA1=rand()%100,//Throws set at 100 because no one would want to toss dice more than that
                        throwsA2=rand()%100,
                        throwsA3=rand()%100,
                        throwsA4=rand()%100,
                        sumA1,
                        sumA2;
                            
                    //Throw the dice to get the antenna
                    tossA1=throwsA1;
                    tossA2=throwsA2;
                    tossA3=throwsA3;
                    tossA4=throwsA4;
                    
                    for (throwsA;throwsA>=0;throwsA--)
                    {
                        switch (dice)
                        {
                            case 2:
                            {
                                tossA1++;
                                tossA2++;
                                tossA3++;
                                tossA4++;
                            }
                        }
                    }
                    
                    if(tossA1!=2)tossA1++;
                    if(tossA2!=2)tossA2++;
                    if(tossA3!=2)tossA3++;
                    if(tossA4!=2)tossA4++;

                    //Calculations
                    sumA1=tossA1+tossA3;
                    sumA2=tossA2+tossA4;

                    //Display Sum
                    cout<<"It took "<<name1<<" "<<sumA1<<" rolls to get the both antenna."<<endl;
                    cout<<"It took "<<name2<<" "<<sumA2<<" rolls to get the both antenna."<<endl;

                    if (sumA1<sumA2)
                    {
                        cout<<"\nCongratulations "<<name1<<"! You got both antenna first!\n"<<endl;

                    }else if (sumA1>sumA2)
                    {
                        cout<<"\nCongratulations "<<name2<<"! You got the both antenna first!\n"<<endl;

                    }else
                    {
                        cout<<"\nYou tied! Win another to score more points!\n"<<endl;
                    }
                            
                    //Variables for the wings(Two wings)
                    int tossW1, //Player ones first toss for the wings
                        tossW2, //Player twos first toss for the wings
                        tossW3, //Player ones second toss for the wings
                        tossW4; //Player twos second toss for the wings
                            
                    int throwsW,            //Needed for the for-loop
                        throwsW1=rand()%100,//Throws set at 100 because no one would want to toss dice more than that
                        throwsW2=rand()%100,
                        throwsW3=rand()%100,
                        throwsW4=rand()%100,
                        sumW1,
                        sumW2;
                            
                    //Throw the dice to get the wings
                    tossW1=throwsW1;
                    tossW2=throwsW2;
                    tossW3=throwsW3;
                    tossW4=throwsW4;
                    
                    for (throwsW;throwsW>=0;throwsW--)
                    {
                        switch (dice)
                        {
                            case 4:
                            {
                                tossW1++;
                                tossW2++;
                                tossW3++;
                                tossW4++;
                            }
                        }
                    }
                    
                    if(tossW1!=4)tossW1++;
                    if(tossW2!=4)tossW2++;
                    if(tossW3!=4)tossW3++;
                    if(tossW4!=4)tossW4++;

                    //Calculations
                    sumW1=tossW1+tossW3;
                    sumW2=tossW2+tossW4;

                    //Display Sum
                    cout<<"It took "<<name1<<" "<<sumW1<<" rolls to get the both wings."<<endl;
                    cout<<"It took "<<name2<<" "<<sumW2<<" rolls to get the both wings."<<endl;

                    if (sumW1<sumW2)
                    {
                        cout<<"\nCongratulations "<<name1<<"! You got both wings first!\n"<<endl;

                    }else if (sumW1>sumW2)
                    {
                        cout<<"\nCongratulations "<<name2<<"! You got the both wings first!\n"<<endl;

                    }else
                    {
                        cout<<"\nYou tied! Win another to score more points!\n"<<endl;
                    }  
                            
                    //Variables for the legs (Need six)
                    int tossL1, //Player ones first toss for the legs
                        tossL2, //Player twos first toss for the legs
                        tossL3, //Player ones second toss for the legs
                        tossL4, //Player twos second toss for the legs
                        tossL5, //Player twos third toss for the legs
                        tossL6, //Player twos third toss for the legs
                        tossL7, //Player twos fourth toss for the legs
                        tossL8, //Player twos fourth toss for the legs
                        tossL9, //Player twos fifth toss for the legs
                        tossL10, //Player twos fifth toss for the legs
                        tossL11, //Player twos sixth toss for the legs
                        tossL12; //Player twos sixth toss for the legs
                            
                    int throwsL,            //Needed for the for-loop
                        throwsL1=rand()%100,//Throws set at 100 because no one would want to toss dice more than that
                        throwsL2=rand()%100,
                        throwsL3=rand()%100,
                        throwsL4=rand()%100,
                        throwsL5=rand()%100,
                        throwsL6=rand()%100,
                        throwsL7=rand()%100,
                        throwsL8=rand()%100,
                        throwsL9=rand()%100,
                        throwsL10=rand()%100,
                        throwsL11=rand()%100,
                        throwsL12=rand()%100,
                        sumL1, //Add all of the throws together for player 1
                        sumL2; //Add all of the throws together for player 2
                            
                    //Throw the dice to get the legs
                    tossL1=throwsL1;
                    tossL2=throwsL2;
                    tossL3=throwsL3;
                    tossL4=throwsL4;
                    tossL5=throwsL5;
                    tossL6=throwsL6;
                    tossL7=throwsL7;
                    tossL8=throwsL8;
                    tossL9=throwsL9;
                    tossL10=throwsL10;
                    tossL11=throwsL11;
                    tossL12=throwsL12;
                    
                    for (throwsL;throwsL>=0;throwsL--)
                    {
                        switch (dice)
                        {
                            case 3:
                            {
                                tossL1++;
                                tossL2++;
                                tossL3++;
                                tossL4++;
                                tossL5++;
                                tossL6++;
                                tossL7++;
                                tossL8++;
                                tossL9++;
                                tossL10++;
                                tossL11++;
                                tossL12++;
                            }
                        }
                    }
                    
                    if(tossL1!=3)tossL1++;
                    if(tossL2!=3)tossL2++;
                    if(tossL3!=3)tossL3++;
                    if(tossL4!=3)tossL4++;
                    if(tossL5!=3)tossL5++;
                    if(tossL6!=3)tossL6++;
                    if(tossL7!=3)tossL7++;
                    if(tossL8!=3)tossL8++;
                    if(tossL9!=3)tossL9++;
                    if(tossL10!=3)tossL10++;
                    if(tossL11!=3)tossL11++;
                    if(tossL12!=3)tossL12++;

                    //Calculations
                    sumL1=tossL1+tossL3+tossL5+tossL7+tossL9+tossL11;
                    sumL2=tossL2+tossL4+tossL6+tossL8+tossL10+tossL12;

                    //Display Throws
                    cout<<"It took "<<name1<<" "<<sumL1<<" rolls to get all 6 legs."<<endl;
                    cout<<"It took "<<name2<<" "<<sumL2<<" rolls to get all 6 legs."<<endl;

                    if (sumL1<sumL2)
                    {
                        cout<<"\nCongratulations "<<name1<<"! You got all six legs first!\n"<<endl;

                    }else if (sumL1>sumL2)
                    {
                        cout<<"\nCongratulations "<<name2<<"! You got all six legs first!\n"<<endl;

                    }else
                    {
                        cout<<"\nYou tied! Win another to score more points!\n"<<endl;
                    }
                        
                    //Calculations
                    sum1=tossB1+tossH1+sumE1+sumA1+sumW1+sumL1;
                    sum2=tossB2+tossH2+sumE2+sumA2+sumW2+sumL2;

                    if (sum1<sum2)
                    {
                        cout<<"\nCongratulations "<<name1<<"! You are the winner!\n"<<endl;

                    }else if (sum1>sum2)
                    {
                        cout<<"\nCongratulations "<<name2<<"! You are the winner!\n"<<endl;

                    }else
                    {
                        cout<<"\nDespite all odds, you both tied!\n"<<endl;
                    }
                        
                
                }break;
                                        
                case 3:
                
                    
                    char name1[12],
                         name2[12],
                         name3[12];
                    int  tossB1,            //Player ones toss for the body
                         dice=rand()%6+1,   //Numbers [1,6] resembling a die
                         tossB2,            //Player twos toss for the body
                         tossB3;            //Player threes toss for body
                    int throwsB,
                        throwsB1=rand()%100,//Throws set at 100 because no one would want to toss dice more than that
                        throwsB2=rand()%100,
                        throwsB3=rand()%100,
                        sum1,
                        sum2,
                        sum3;
                    
                    //ENter names
                    cout<<"Please insert the first name."<<endl;
                    cin>>name1;
                    cout<<"Please enter the second name."<<endl;
                    cin>>name2;
                    cout<<"Please insert the third name."<<endl;
                    cin>>name3;
                    cout<<"\n";
                    
                    //Throw the dice to get the body (one body)
                    tossB1=throwsB1;
                    tossB2=throwsB2;
                    tossB3=throwsB3;
                    
                    for (throwsB;throwsB>=0;throwsB--)
                    {
                        switch (dice)
                        {
                            case 6:
                            {
                                tossB1++;
                                tossB2++;
                                tossB3++;
                            }
                        }
                    }
                    
                        if(tossB1!=6)tossB1++;
                        
                            cout<<"It took "<<name1<<" "<<tossB1<<" times to get the body."<<endl;
                            
                        if(tossB2!=6)tossB2++;
                        
                            cout<<"It took "<<name2<<" "<<tossB2<<" times to get the body."<<endl;
                            
                        if(tossB3!=6)tossB3++;

                            cout<<"It took "<<name3<<" "<<tossB3<<" times to get the body."<<endl;
                    
                        if ((tossB1<tossB2)&&(tossB1<tossB3))
                        {
                            cout<<"\nCongratulations "<<name1<<"! You got the body first!\n"<<endl;

                        }else if ((tossB2<tossB1)&&(tossB2<tossB3))
                        {
                            cout<<"\nCongratulations "<<name2<<"! You got the body first!\n"<<endl;

                        }else if ((tossB3<tossB1)&&(tossB3<tossB2))
                        {
                            cout<<"\nCongratulations "<<name3<<"! You got the body first!\n"<<endl;
                        
                        }else
                        {
                            cout<<"\nYou all tied! Try and win another to score more points!\n"<<endl;
                        }
                    
                    //Variables for the head (one head)
                    int tossH1,             //Player ones toss for the head
                        tossH2,             //Player twos toss for the head
                        tossH3;             //Player threes toss for the head
                            
                    int throwsH,            //Needed for the for-loop
                        throwsH1=rand()%100,//Throws set at 100 because no one would want to toss dice more than that
                        throwsH2=rand()%100,
                        throwsH3=rand()%100;
                            
                    //Throw the dice to get the head
                    tossH1=throwsH1;
                    tossH2=throwsH2;
                    tossH3=throwsH3;
                    
                    for (throwsH;throwsH>=0;throwsH--)
                    {
                        switch (dice)
                        {
                            case 5:
                            {
                                tossH1++;
                                tossH2++;
                                tossH3++;
                            }
                        }
                    }
                    
                        if(tossH1!=5)tossH1++;
                        
                            cout<<"It took "<<name1<<" "<<tossH1<<" times to get the head."<<endl;
                            
                        if(tossH2!=5)tossH2++;
                        
                            cout<<"It took "<<name2<<" "<<tossH2<<" times to get the head."<<endl;
                            
                        if(tossH3!=5)tossH3++;

                            cout<<"It took "<<name3<<" "<<tossH3<<" times to get the head."<<endl;
                    
                        if ((tossH1<tossH2)&&(tossH1<tossH3))
                        {
                            cout<<"\nCongratulations "<<name1<<"! You got the head first!\n"<<endl;

                        }else if ((tossH2<tossH1)&&(tossH2<tossH3))
                        {
                            cout<<"\nCongratulations "<<name2<<"! You got the head first!\n"<<endl;

                        }else if ((tossH3<tossH1)&&(tossH3<tossH2))
                        {
                            cout<<"\nCongratulations "<<name3<<"! You got the head first!\n"<<endl;
                        }else
                        {
                            cout<<"\nYou all tied! Try and win another to score more points!\n"<<endl;
                        }
                            
                    //Variables for the eyes (two eyes)
                    int tossE1, //Player ones first toss for the eyes
                        tossE2, //Player twos first toss for the eyes
                        tossE3, //Player threes first toss for the eyes
                        tossE4, //Player ones second toss for the eyes
                        tossE5, //Player twos second toss for the eyes
                        tossE6; //Player threes second toss for the eyes
                            
                    int throwsE,            //Needed for the for-loop
                        throwsE1=rand()%100,//Throws set at 100 because no one would want to toss dice more than that
                        throwsE2=rand()%100,
                        throwsE3=rand()%100,
                        throwsE4=rand()%100,
                        throwsE5=rand()%100,
                        throwsE6=rand()%100,
                        sumE1,
                        sumE2,
                        sumE3;
                            
                    //Throw the dice to get the eyes
                    tossE1=throwsE1;
                    tossE2=throwsE2;
                    tossE3=throwsE3;
                    tossE4=throwsE4;
                    tossE5=throwsE5;
                    tossE6=throwsE6;
                    
                    for (throwsE;throwsE>=0;throwsE--)
                    {
                        switch (dice)
                        {
                            case 1:
                            {
                                tossE1++;
                                tossE2++;
                                tossE3++;
                                tossE4++;
                                tossE5++;
                                tossE6++;
                            }
                        }
                    }
                    
                        if(tossE1!=4)tossE1++;
                        if(tossE2!=4)tossE2++;
                        if(tossE3!=4)tossE3++;
                        if(tossE4!=4)tossE4++;
                        if(tossE5!=4)tossE5++;
                        if(tossE6!=4)tossE6++;
                        
                        //Calculations
                        sumE1=tossE1+tossE4;
                        sumE2=tossE2+tossE5;
                        sumE3=tossE3+tossE6;
                    
                        //Display Sum
                        cout<<"It took "<<name1<<" "<<sumE1<<" rolls to get the both eyes."<<endl;
                        cout<<"It took "<<name2<<" "<<sumE2<<" rolls to get the both eyes."<<endl;
                        cout<<"It took "<<name3<<" "<<sumE3<<" rolls to get the both eyes."<<endl;
                            
                        if ((sumE1<sumE2)&&(sumE1<sumE3))
                        {
                            cout<<"\nCongratulations "<<name1<<"! You got both eyes first!\n"<<endl;

                        }else if ((sumE2<sumE1)&&(sumE2<sumE3))
                        {
                            cout<<"\nCongratulations "<<name2<<"! You got the both eyes first!\n"<<endl;

                        }else if ((sumE3<sumE1)&&(sumE3<sumE2))
                        {
                            cout<<"\nCongratulations "<<name3<<"! You got the both eyes first!\n"<<endl;
                            
                        }else
                        {
                            cout<<"\nYou tied! Win another to score more points!\n"<<endl;
                        }
                            
                    //Variables for the antenna (two antenna)
                    int tossA1, //Player ones first toss for the antenna
                        tossA2, //Player twos first toss for the antenna
                        tossA3, //Player threes first toss for the antenna
                        tossA4, //Player ones second toss for the antenna
                        tossA5, //Player twos second toss for the antenna
                        tossA6; //Player threes second toss for the antenna
                            
                    int throwsA,            //Needed for the for-loop
                        throwsA1=rand()%100,//Throws set at 100 because no one would want to toss dice more than that
                        throwsA2=rand()%100,
                        throwsA3=rand()%100,
                        throwsA4=rand()%100,
                        throwsA5=rand()%100,
                        throwsA6=rand()%100,
                        sumA1,
                        sumA2,
                        sumA3;
                            
                    //Throw the dice to get the antenna
                    tossA1=throwsA1;
                    tossA2=throwsA2;
                    tossA3=throwsA3;
                    tossA4=throwsA4;
                    tossA5=throwsA5;
                    tossA6=throwsA6;
                    
                    for (throwsA;throwsA>=0;throwsA--)
                    {
                        switch (dice)
                        {
                            case 4:
                            {
                                tossA1++;
                                tossA2++;
                                tossA3++;
                                tossA4++;
                                tossA5++;
                                tossA6++;
                            }
                        }
                    }
                    
                        if(tossA1!=4)tossA1++;
                        if(tossA2!=4)tossA2++;
                        if(tossA3!=4)tossA3++;
                        if(tossA4!=4)tossA4++;
                        if(tossA5!=4)tossA5++;
                        if(tossA6!=4)tossA6++;
                        
                        //Calculations
                        sumA1=tossA1+tossA4;
                        sumA2=tossA2+tossA5;
                        sumA3=tossA3+tossA6;
                    
                        //Display Sum
                        cout<<"It took "<<name1<<" "<<sumA1<<" rolls to get the both antenna."<<endl;
                        cout<<"It took "<<name2<<" "<<sumA2<<" rolls to get the both antenna."<<endl;
                        cout<<"It took "<<name3<<" "<<sumA3<<" rolls to get the both antenna."<<endl;
                            
                        if ((sumA1<sumA2)&&(sumA1<sumA3))
                        {
                            cout<<"\nCongratulations "<<name1<<"! You got both antenna first!\n"<<endl;

                        }else if ((sumA2<sumA1)&&(sumA2<sumA3))
                        {
                            cout<<"\nCongratulations "<<name2<<"! You got the both antenna first!\n"<<endl;

                        }else if ((sumA3<sumA1)&&(sumA3<sumA2))
                        {
                            cout<<"\nCongratulations "<<name3<<"! You got the both antenna first!\n"<<endl;
                            
                        }else
                        {
                            cout<<"\nYou tied! Win another to score more points!\n"<<endl;
                        }
                            
                    //Variables for the wings(Two wings)
                    int tossW1, //Player ones first toss for the wings
                        tossW2, //Player twos first toss for the wings
                        tossW3, //Player threes first toss for the wings
                        tossW4, //Player ones second toss for the wings
                        tossW5, //Player twos second toss for the wings
                        tossW6; //Player threes second toss for the wings
                            
                    int throwsW,            //Needed for the for-loop
                        throwsW1=rand()%100,//Throws set at 100 because no one would want to toss dice more than that
                        throwsW2=rand()%100,
                        throwsW3=rand()%100,
                        throwsW4=rand()%100,
                        throwsW5=rand()%100,
                        throwsW6=rand()%100,
                        sumW1,
                        sumW2,
                        sumW3;
                            
                    //Throw the dice to get the wings
                    tossW1=throwsW1;
                    tossW2=throwsW2;
                    tossW3=throwsW3;
                    tossW4=throwsW4;
                    tossW5=throwsW5;
                    tossW6=throwsW6;
                    
                    for (throwsW;throwsW>=0;throwsW--)
                    {
                        switch (dice)
                        {
                            case 4:
                            {
                                tossW1++;
                                tossW2++;
                                tossW3++;
                                tossW4++;
                                tossW5++;
                                tossW6++;
                            }
                        }
                    }
                    
                        if(tossW1!=4)tossW1++;
                        if(tossW2!=4)tossW2++;
                        if(tossW3!=4)tossW3++;
                        if(tossW4!=4)tossW4++;
                        if(tossW5!=4)tossW5++;
                        if(tossW6!=4)tossW6++;
                        
                        //Calculations
                        sumW1=tossW1+tossW4;
                        sumW2=tossW2+tossW5;
                        sumW3=tossW3+tossW6;
                    
                        //Display Sum
                        cout<<"It took "<<name1<<" "<<sumW1<<" rolls to get the both wings."<<endl;
                        cout<<"It took "<<name2<<" "<<sumW2<<" rolls to get the both wings."<<endl;
                        cout<<"It took "<<name3<<" "<<sumW3<<" rolls to get the both wings."<<endl;
                            
                        if ((sumW1<sumW2)&&(sumW1<sumW3))
                        {
                            cout<<"\nCongratulations "<<name1<<"! You got both wings first!\n"<<endl;

                        }else if ((sumW2<sumW1)&&(sumW2<sumW3))
                        {
                            cout<<"\nCongratulations "<<name2<<"! You got the both wings first!\n"<<endl;

                        }else if ((sumW3<sumW1)&&(sumW3<sumW2))
                        {
                            cout<<"\nCongratulations "<<name3<<"! You got the both wings first!\n"<<endl;
                            
                        }else
                        {
                            cout<<"\nYou tied! Win another to score more points!\n"<<endl;
                        }  
                            
                    //Variables for the legs (Need six)
                    int tossL1, //Player ones first toss for the legs
                        tossL2, //Player twos first toss for the legs
                        tossL3, //Player threes first toss for the legs
                        tossL4, //Player ones second toss for the legs
                        tossL5, //Player twos second toss for the legs
                        tossL6, //Player threes second toss for the legs
                        tossL7, //Player ones third toss for the legs
                        tossL8, //Player twos third toss for the legs
                        tossL9, //Player threes third toss for the legs
                        tossL10, //Player ones fourth toss for the legs
                        tossL11, //Player twos fourth toss for the legs
                        tossL12, //Player threes fourth toss for the legs
                        tossL13, //Player ones fifth toss for the legs
                        tossL14, //Player twos fifth toss for the legs
                        tossL15, //Player threes fifth toss for the legs
                        tossL16, //Player ones sixth toss for the legs
                        tossL17, //Player twos sixth toss for the legs
                        tossL18; //Player threes sixth toss for the legs
                            
                    int throwsL,            //Needed for the for-loop
                        throwsL1=rand()%100,//Throws set at 100 because no one would want to toss dice more than that
                        throwsL2=rand()%100,
                        throwsL3=rand()%100,
                        throwsL4=rand()%100,
                        throwsL5=rand()%100,
                        throwsL6=rand()%100,
                        throwsL7=rand()%100,
                        throwsL8=rand()%100,
                        throwsL9=rand()%100,
                        throwsL10=rand()%100,
                        throwsL11=rand()%100,
                        throwsL12=rand()%100,
                        throwsL13=rand()%100,
                        throwsL14=rand()%100,
                        throwsL15=rand()%100,
                        throwsL16=rand()%100,
                        throwsL17=rand()%100,
                        throwsL18=rand()%100,
                        sumL1, //Add all of the throws together for player 1
                        sumL2, //Add all of the throws together for player 2
                        sumL3; //Add all of the throws together for player 3
                            
                    //Throw the dice to get the legs
                    tossL1=throwsL1;
                    tossL2=throwsL2;
                    tossL3=throwsL3;
                    tossL4=throwsL4;
                    tossL5=throwsL5;
                    tossL6=throwsL6;
                    tossL7=throwsL7;
                    tossL8=throwsL8;
                    tossL9=throwsL9;
                    tossL10=throwsL10;
                    tossL11=throwsL11;
                    tossL12=throwsL12;
                    tossL13=throwsL13;
                    tossL14=throwsL14;
                    tossL15=throwsL15;
                    tossL16=throwsL16;
                    tossL17=throwsL17;
                    tossL18=throwsL18;
                    
                    for (throwsL;throwsL>=0;throwsL--)
                    {
                        switch (dice)
                        {
                            case 3:
                            {
                                tossL1++;
                                tossL2++;
                                tossL3++;
                                tossL4++;
                                tossL5++;
                                tossL6++;
                                tossL7++;
                                tossL8++;
                                tossL9++;
                                tossL10++;
                                tossL11++;
                                tossL12++;
                                tossL13++;
                                tossL14++;
                                tossL15++;
                                tossL16++;
                                tossL17++;
                                tossL18++;
                            }
                        }
                    }
                    
                        if(tossL1!=3)tossL1++;
                        if(tossL2!=3)tossL2++;
                        if(tossL3!=3)tossL3++;
                        if(tossL4!=3)tossL4++;
                        if(tossL5!=3)tossL5++;
                        if(tossL6!=3)tossL6++;
                        if(tossL7!=3)tossL7++;
                        if(tossL8!=3)tossL8++;
                        if(tossL9!=3)tossL9++;
                        if(tossL10!=3)tossL10++;
                        if(tossL11!=3)tossL11++;
                        if(tossL12!=3)tossL12++;
                        if(tossL13!=3)tossL13++;
                        if(tossL14!=3)tossL14++;
                        if(tossL15!=3)tossL15++;
                        if(tossL16!=3)tossL16++;
                        if(tossL17!=3)tossL17++;
                        if(tossL18!=3)tossL18++;
                    
                        //Calculations
                        sumL1=tossL1+tossL4+tossL7+tossL10+tossL13+tossL16;
                        sumL2=tossL2+tossL5+tossL8+tossL11+tossL14+tossL17;
                        sumL3=tossL3+tossL6+tossL9+tossL12+tossL15+tossL18;
                        
                        //Display Throws
                        cout<<"It took "<<name1<<" "<<sumL1<<" rolls to get all 6 legs."<<endl;
                        cout<<"It took "<<name2<<" "<<sumL2<<" rolls to get all 6 legs."<<endl;
                        cout<<"It took "<<name3<<" "<<sumL3<<" rolls to get all 6 legs."<<endl;
                        
                        if ((sumL1<sumL2)&&(sumL1<sumL3))
                        {
                            cout<<"\nCongratulations "<<name1<<"! You got all six first!\n"<<endl;

                        }else if ((sumL2<sumL1)&&(sumL2<sumL3))
                        {
                            cout<<"\nCongratulations "<<name2<<"! You got all six legs first!\n"<<endl;

                        }else if ((sumL3<sumL1)&&(sumL3<sumL2))
                        {
                            cout<<"\nCongratulations "<<name3<<"! You got all six legs first!\n"<<endl;
                            
                        }else
                        {
                            cout<<"\nYou tied! Win another to score more points!\n"<<endl;
                        }
                        
                //Calculations
                sum1=tossB1+tossH1+sumE1+sumA1+sumW1+sumL1;
                sum2=tossB2+tossH2+sumE2+sumA2+sumW2+sumL2;
                sum3=tossB3+tossH3+sumE3+sumA3+sumW3+sumL3;
                
                if ((sum1<sum2)&&(sum1<sum3))
                {
                    cout<<"\nCongratulations "<<name1<<"! You are the WINNER!\n"<<endl;

                }else if ((sum2<sum1)&&(sum2<sum3))
                {
                    cout<<"\nCongratulations "<<name2<<"! You are the WINNER!\n"<<endl;

                }else if ((sum3<sum1)&&(sum3<sum2))
                {
                    cout<<"\nCongratulations "<<name1<<"! You are the WINNER!\n"<<endl;

                }else
                {
                    cout<<"\nYou guys beat all odds! You all tied!\n"<<endl;
                }
                        
                
                }
        
            //Request to play again
            cout<<"\n\nWould you like to play again? (Y/N)"<<endl;
            cin>>playAgn;
            
    }while(playAgn=='Y'||playAgn=='y');
   
    return 0;
}

