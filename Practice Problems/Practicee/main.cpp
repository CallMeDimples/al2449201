 /* Author: Allison Mudhouse
 *
 * Created on July 10, 2014, 11:26 AM
 */

#include <iostream>
using namespace std;

int main(int argc, char** argv) {

    int number;
    
    cout<<"Insert a number between 1 and 10."<<endl;
    cin>>number;
    
        while (!(number>=1&&number<=10))
        {
            number=(number+1)-number; 
            cout<<"\nYou didn't do what was asked of you."<<endl;
        }
   cout<<"\nYay!"; 
    
    //Run Program, Run
    return 0;
}