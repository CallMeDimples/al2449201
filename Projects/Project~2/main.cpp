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
const int PLAYERS2=2;
const int LEGS=6;
const int WINGS=2;
const int EYES=2;
const int ANTENNA=2;
const int HEAD=1;
const int BODY=1;

//Function Prototypes
void sortArray(int [],int);
void showInstructions();
int sum1(int,int,int,int,int,int);
int sum2(int,int,int,int,int,int);

//Begin Program
int main(int argc, char** argv) {

    //Define Variables
    char playAgn;
    
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Would you like to play again?
    do
    {
        //Introduce game by calling the function definition 
        showInstructions();
        
        //Define Variables
        char name1[20],   //Some people may have a long name
             name2[20]; 

        int tossB[PLAYERS2][BODY],//Players toss for the body
            dice,      //Numbers [1,6] resembling a die
            throwsB[PLAYERS2][BODY],//Utilized for the for loop
            total1,
            total2;

        //Decide who is first player
        cout<<"Please insert the first name."<<endl;
        cin>>name1;
        cout<<"Please enter the second name."<<endl;
        cin>>name2;
        cout<<"\n";

        do{
            //Set the size of the dice
            dice=rand()%6+1;

            //Throw the dice to get the body (one body) utilizing an array
            for(int i=0;i<PLAYERS2;i++)
            {
                for(int j=0;j<BODY;j++)
                {
                    throwsB[i][j]=rand()%100;
                }
            }

            tossB[0][0]=throwsB[0][0];
            tossB[1][0]=throwsB[1][0];

                switch (dice)
                {
                    case 6:
                    {
                        tossB[0][0]++;
                        tossB[1][0]++;
                    }
                }
        }while(dice!=6);

        if(tossB[0][0]!=6)tossB[0][0]++;

            cout<<"It took "<<name1<<" "<<tossB[0][0]<<" times to get the body."<<endl;

        if(tossB[1][0]!=6)tossB[1][0]++;

            cout<<"It took "<<name2<<" "<<tossB[1][0]<<" times to get the body."<<endl;

        if (tossB[0][0]<tossB[1][0])
        {
            cout<<"\nCongratulations "<<name1<<"! You got the body first!\n"<<endl;

        }else if (tossB[0][0]>tossB[1][0])
        {
            cout<<"\nCongratulations "<<name2<<"! You got the body first!\n"<<endl;

        }else
        {
            cout<<"\nYou tied! Try and win another to score more points!\n"<<endl;
        }

        //Variables for the head (one head)
        int tossH[PLAYERS2][HEAD],//Players toss for the head
            throwsH[PLAYERS2][HEAD];//Utilized for the for loop

        do{
            //Set the size of the dice
            dice=rand()%6+1;

            //Throw the dice to get the head
            for(int i=0;i<PLAYERS2;i++)
            {
                for(int j=0;j<HEAD;j++)
                {
                    throwsH[i][j]=rand()%100;
                }
            }

            tossH[0][0]=throwsH[0][0];
            tossH[1][0]=throwsH[1][0];

                switch (dice)
                {
                    case 5:
                    {
                        tossH[0][0]++;
                        tossH[1][0]++;
                    }
                }
        }while(dice!=5);

        if(tossH[0][0]!=5)tossH[0][0]++;

            cout<<"It took "<<name1<<" "<<tossH[0][0]<<" times to get the head."<<endl;

        if(tossH[1][0]!=5)tossH[1][0]++;

            cout<<"It took "<<name2<<" "<<tossH[1][0]<<" times to get the head."<<endl;

        if (tossH[0][0]<tossH[1][0])
        {
            cout<<"\nCongratulations "<<name1<<"! You got the head first!\n"<<endl;

        }else if (tossH[0][0]>tossH[1][0])
        {
            cout<<"\nCongratulations "<<name2<<"! You got the head first!\n"<<endl;

        }else
        {
            cout<<"\nYou tied! Try and win another to score more points!\n"<<endl;
        }

        //Variables for the eyes (two eyes)
        int tossE[PLAYERS2][EYES],//Players toss for the eyes
            throwsE[PLAYERS2][EYES];//Utilized for for loop

        do
        {
            //Set the size of the dice
            dice=rand()%6+1;

            //Throw the dice to get the eyes
            for(int i=0;i<PLAYERS2;i++)
            {
                for(int j=0;j<EYES;j++)
                {
                    throwsE[i][j]=rand()%100;
                }
            }

            tossE[0][0]=throwsE[0][0];
            tossE[1][0]=throwsE[1][0];
            tossE[0][1]=throwsE[0][1];
            tossE[1][1]=throwsE[1][1];

                switch (dice)
                {
                    case 1:
                    {
                        tossE[0][0]++;
                        tossE[1][0]++;
                        tossE[0][1]++;
                        tossE[1][1]++;
                    }
                }
        }while(dice!=1);

        if(tossE[0][0]!=1)tossE[0][0]++;
        if(tossE[1][0]!=1)tossE[1][0]++;
        if(tossE[0][1]!=1)tossE[0][1]++;
        if(tossE[1][1]!=1)tossE[1][1]++;

        //Sum
        int sumE[]={tossE[0][0]+tossE[0][1],tossE[1][0]+tossE[1][1]};

        //Display Sum
        cout<<"It took "<<name1<<" "<<sumE[0]<<" rolls to get the both eyes."<<endl;
        cout<<"It took "<<name2<<" "<<sumE[1]<<" rolls to get the both eyes."<<endl;

        if (sumE[0]<sumE[1])
        {
            cout<<"\nCongratulations "<<name1<<"! You got both eyes first!\n"<<endl;

        }else if (sumE[0]>sumE[1])
        {
            cout<<"\nCongratulations "<<name2<<"! You got the both eyes first!\n"<<endl;

        }else
        {
            cout<<"\nYou tied! Win another to score more points!\n"<<endl;
        }

        //Variables for the antenna (two antenna) utilizing two dimensional array
        int tossA[PLAYERS2][ANTENNA], //Players toss for the antenna
            throwsA[PLAYERS2][ANTENNA];

        do
        {
            //Set the size of the dice
            dice=rand()%6+1;

            //Throw the dice to get the antenna
            for(int i=0;i<PLAYERS2;i++)
            {
                for(int j=0;j<ANTENNA;j++)
                {
                    throwsA[i][j]=rand()%100;
                }
            }

            tossA[0][0]=throwsA[0][0];
            tossA[1][0]=throwsA[1][0];
            tossA[0][1]=throwsA[0][1];
            tossA[1][1]=throwsA[1][1];

                switch (dice)
                {
                    case 2:
                    {
                        tossA[0][0]++;
                        tossA[1][0]++;
                        tossA[0][1]++;
                        tossA[1][1]++;
                    }
                }
        }while(dice!=2);

        if(tossA[0][0]!=2)tossA[0][0]++;
        if(tossA[1][0]!=2)tossA[1][0]++;
        if(tossA[0][1]!=2)tossA[0][1]++;
        if(tossA[1][1]!=2)tossA[1][1]++;

        //Calculations for sum
        int sumA[]={tossA[0][0]+tossA[0][1],tossA[1][0]+tossA[1][1]};

        //Display Sum
        cout<<"It took "<<name1<<" "<<sumA[0]<<" rolls to get the both antenna."<<endl;
        cout<<"It took "<<name2<<" "<<sumA[1]<<" rolls to get the both antenna."<<endl;

        if (sumA[0]<sumA[1])
        {
            cout<<"\nCongratulations "<<name1<<"! You got both antenna first!\n"<<endl;

        }else if (sumA[0]>sumA[1])
        {
            cout<<"\nCongratulations "<<name2<<"! You got the both antenna first!\n"<<endl;

        }else
        {
            cout<<"\nYou tied! Win another to score more points!\n"<<endl;
        }

        //Variables for the wings(Two wings)
        int tossW[PLAYERS2][WINGS], //Players toss for the wings
            throwsW[PLAYERS2][WINGS];//Needed for the for-loop

        do
        {
            //Set the size of the dice
            dice=rand()%6+1;

            //Throw the dice to get the wings
            for(int i=0;i<PLAYERS2;i++)
            {
                for(int j=0;j<WINGS;j++)
                {
                    throwsW[i][j]=rand()%100;
                }
            }

            tossW[0][0]=throwsW[0][0];
            tossW[1][0]=throwsW[1][0];
            tossW[0][1]=throwsW[0][1];
            tossW[1][1]=throwsW[1][1];

                switch (dice)
                {
                    case 4:
                    {
                        tossW[0][0]++;
                        tossW[1][0]++;
                        tossW[0][1]++;
                        tossW[1][1]++;
                    }
                }
        }while(dice!=4);

        if(tossW[0][0]!=4)tossW[0][0]++;
        if(tossW[1][0]!=4)tossW[1][0]++;
        if(tossW[0][1]!=4)tossW[0][1]++;
        if(tossW[1][1]!=4)tossW[1][1]++;

        //Calculations for sum
        int sumW[]={tossW[0][0]+tossW[0][1],tossW[1][0]+tossW[1][1]};

        //Display Sum
        cout<<"It took "<<name1<<" "<<sumW[0]<<" rolls to get the both wings."<<endl;
        cout<<"It took "<<name2<<" "<<sumW[1]<<" rolls to get the both wings."<<endl;

        if (sumW[0]<sumW[1])
        {
            cout<<"\nCongratulations "<<name1<<"! You got both wings first!\n"<<endl;

        }else if (sumW[0]>sumW[1])
        {
            cout<<"\nCongratulations "<<name2<<"! You got the both wings first!\n"<<endl;

        }else
        {
            cout<<"\nYou tied! Win another to score more points!\n"<<endl;
        }  

        //Variables for the legs (Need six) utilizing an array
        int tossL[PLAYERS2][LEGS],//two dimensional array
            throwsL[PLAYERS2][LEGS];//Needed for the for-loop 

        do
        {
            //Set size of the dice
            dice=rand()%6+1;

            //Throw the dice to get the legs
            for(int i=0;i<PLAYERS2;i++)
            {
                for(int j=0;j<LEGS;j++)
                {
                    throwsL[i][j]=rand()%100;
                }
            }

            tossL[0][0]=throwsL[0][0];
            tossL[1][0]=throwsL[1][0];
            tossL[0][1]=throwsL[0][1];
            tossL[1][1]=throwsL[1][1];
            tossL[0][2]=throwsL[0][2];
            tossL[1][2]=throwsL[1][2];
            tossL[0][3]=throwsL[0][3];
            tossL[1][3]=throwsL[1][3];
            tossL[0][4]=throwsL[0][4];
            tossL[1][4]=throwsL[1][4];
            tossL[0][5]=throwsL[0][5];
            tossL[1][5]=throwsL[1][5];

            switch (dice)
              {
                  case 3:
                  {
                      tossL[0][0]++;
                      tossL[1][0]++;
                      tossL[0][1]++;
                      tossL[1][1]++;
                      tossL[0][2]++;
                      tossL[1][2]++;
                      tossL[0][3]++;
                      tossL[1][3]++;
                      tossL[0][4]++;
                      tossL[1][4]++;
                      tossL[0][5]++;
                      tossL[1][5]++;
                  }
              }
        }while(dice!=6);

        if(tossL[0][0]!=3)tossL[0][0]++;
        if(tossL[1][0]!=3)tossL[1][0]++;
        if(tossL[0][1]!=3)tossL[0][1]++;
        if(tossL[1][1]!=3)tossL[1][1]++;
        if(tossL[0][2]!=3)tossL[0][2]++;
        if(tossL[1][2]!=3)tossL[1][2]++;
        if(tossL[0][3]!=3)tossL[0][3]++;
        if(tossL[1][3]!=3)tossL[1][3]++;
        if(tossL[0][4]!=3)tossL[0][4]++;
        if(tossL[1][4]!=3)tossL[1][4]++;
        if(tossL[0][5]!=3)tossL[0][5]++;
        if(tossL[1][5]!=3)tossL[1][5]++;

        //Calculations for sum
        int sumL[]={tossL[0][0]+tossL[0][1]+tossL[0][2]+tossL[0][3]+tossL[0][4]+tossL[0][5],
                    tossL[1][0]+tossL[1][1]+tossL[1][2]+tossL[1][3]+tossL[1][4]+tossL[1][5]};

        //Display Throws
        cout<<"It took "<<name1<<" "<<sumL[0]<<" rolls to get all 6 legs."<<endl;
        cout<<"It took "<<name2<<" "<<sumL[1]<<" rolls to get all 6 legs."<<endl;

        if (sumL[0]<sumL[1])
        {
            cout<<"\nCongratulations "<<name1<<"! You got all six legs first!\n"<<endl;

        }else if (sumL[0]>sumL[1])
        {
            cout<<"\nCongratulations "<<name2<<"! You got all six legs first!\n"<<endl;

        }else
        {
            cout<<"\nYou tied! Win another to score more points!\n"<<endl;
        }

        //Call the sum function
        total1=sum1(tossB[0][0],tossH[0][0],sumE[0],sumA[0],sumW[0],sumL[0]);
        total2=sum2(tossB[1][0],tossH[0][0],sumE[1],sumA[1],sumW[1],sumL[1]);

        //Define array for sort array
        int totals[2]={total1,total2};

        //Show total of all throws by using a sort array 
        cout<<"The totals are..."<<endl;
        sortArray(totals,2);
        
        cout<<totals[0]<<" "<<totals[1]<<endl;

        if (total1<total2)
        {
            cout<<"\nCongratulations "<<name1<<"! You are the WINNER!\n"<<endl;

        }else if (total1>total2)
        {
            cout<<"\nCongratulations "<<name2<<"! You are the WINNER!\n"<<endl;

        }else
        {
            cout<<"\nDespite all odds, you both TIED!\n"<<endl;
        }
    
    //Request to play again
    cout<<"\n\nWould you like to play again? (Y/N)"<<endl;
    cin>>playAgn;
            
    }while(playAgn=='Y'||playAgn=='y');
   
    return 0;
}

void showInstructions()
{
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
}

int sum1(int num1, int num3, int num5, int num7, int num9, int num11)
{ 
    return num1+num3+num5+num7+num9+num11;  
}

int sum2(int num2, int num4, int num6, int num8, int num10, int num12)
{
    return num2+num4+num6+num8+num10+num12;  
}
    
void sortArray (int array[], int size)
{
    bool swap;
    int dumnum;
    
    do
    {
        swap=false;
        for(int count=0;count<(size-1);count++)
        {
            if(array[count]>array[count+1])
            {
                dumnum=array[count];
                array[count]=array[count+1];
                array[count+1]=dumnum;
                swap=true;
            }
        }
    }while(swap);
}