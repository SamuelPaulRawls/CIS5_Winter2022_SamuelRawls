/* 
 * File:   main.cpp
 * Author: Samuel Rawls
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
    float ansal,//annual pay
        newAsal,//new annual pay
        pnAsal,//percentage of pay increase and annual pay
        mAsal,//old montly annual pay
        retPay,//retro pay due to you 
        newMsal;//new monthly pay
    //Initialize or input i.e. set variable values
    cout<<"Input previous annual salary."<<endl;
    cin>>ansal;
    pnAsal= .076*ansal;
    newAsal= pnAsal+ansal;
    newMsal= newAsal/12;
    retPay= (newAsal-ansal)/2;
    
    //Map inputs -> outputs
    cout<<setprecision(2)<<setw(5)<<fixed<<showpoint;
    cout<<"Retroactive pay    = $"<<setw(7)<<retPay<<endl;
    cout<<"New annual salary  = $"<<newAsal<<endl;
    cout<<"New monthly salary = $"<<setw(7)<<newMsal;
    //Display the outputs

    //Exit stage right or left!
    return 0;
}