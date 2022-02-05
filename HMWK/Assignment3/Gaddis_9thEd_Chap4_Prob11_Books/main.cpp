/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
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
    int bookP;
    
    //Initialize or input i.e. set variable values
    cout<<"Book Worm Points"<<endl;
    cout<<"Input the number of books purchased this month."<<endl;
    cin>>bookP;
    //Map inputs -> outputs
    if(bookP== 0)
    {
        cout<<"Books purchased =  "<<bookP<<endl;
        cout<<"Points earned   = 0";
    }
    else if(bookP== 1)
    {
       cout<<"Books purchased =  "<<bookP<<endl;
        cout<<"Points earned   = 5";
    }
    else if(bookP== 2)
    {
        cout<<"Books purchased =  "<<bookP<<endl;
        cout<<"Points earned   = 15";
    }
    else if(bookP== 3)
    {
      cout<<"Books purchased =  "<<bookP<<endl;
      cout<<"Points earned   = 30";
    }
    else 
    {
        cout<<"Books purchased =  "<<bookP<<endl;
        cout<<"Points earned   = 60";
    }
    //Display the outputs
    

    //Exit stage right or left!
    return 0;
}