/* 
 * File:   main.cpp
 * Author: Samuel Rawls
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int nPeep, //number of people attending the event
        maxCap; //maxcapacity
    
    //Initialize or input i.e. set variable values
    cout<<"Input the maximum room capacity and the number of people"<<endl;
    cin>>maxCap;
    cin>>nPeep;
    if(nPeep>maxCap)
    {
        cout<<"Meeting cannot be held."<<endl;
        cout<<"Reduce number of people by "<<nPeep-maxCap<<" to avoid fire violation.";
    }
    else
    {
        cout<<"Meeting can be held."<<endl;
        cout<<"Increase number of people by "<<maxCap-nPeep<<" will be allowed without violation.";
    }
    //Map inputs -> outputs
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}