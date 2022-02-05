/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float bal,
          checks,
          tcheck,
          exchar,
          moncha;
          
    
    //Initialize or input i.e. set variable values
    exchar=15;
    moncha=10;
    cout<<"Monthly Bank Fees"<<endl;
    cout<<"Input Current Bank Balance and Number of Checks"<<endl;
    cin>>bal;
    cin>>checks;
    if(0>bal)
    {
        cout<<"ALERT! Account is Overdrawn"<<endl;
        return 0;
    }
    if(0>checks)
    {
        cout<<"Only a number 0 or above is accepted."<<endl;
        return 0;
    }
    if(20>checks)
    {
        tcheck=.10*checks;
    }
    else if(checks>20)
    {
        tcheck=.08*checks;
    }
    else if(checks>=40)
    {
        tcheck=.06*checks;
    }
    else if(checks>=60);
    {
        tcheck=.04*checks;
    }
    
    //Map inputs -> outputs
    cout<<setprecision(2)<<fixed<<showpoint;
    cout<<"Balance     $   "<<setw(6)<<bal<<endl;
    cout<<"Check Fee   $   "<<setw(6)<<tcheck<<endl;
    cout<<"Monthly Fee $   "<<setw(6)<<moncha<<endl;
    if(400>bal)
    {
        cout<<"Low Balance $   "<<setw(6)<<exchar<<endl;
        cout<<"New Balance $   "<<setw(6)<<bal-moncha-tcheck-exchar;
        
    }
    else
    {
    cout<<"New Balance $   "<<setw(6)<<bal-moncha-tcheck;
    }
    //Display the outputs

    //Exit stage right or left!
    return 0;
}