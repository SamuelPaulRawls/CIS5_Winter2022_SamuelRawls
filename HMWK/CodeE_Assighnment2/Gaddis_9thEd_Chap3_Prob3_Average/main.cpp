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
    float avg, //the five numbers as variables
          n1,
          n2,
          n3,
          n4,
          n5;
    //Initialize or input i.e. set variable values
    cout<<setprecision(1)<<fixed<<showpoint;
cout<<"Input 5 numbers to average."<<endl;
cin>>n1;
cin>>n2;  //lets user input the numbers
cin>>n3;
cin>>n4;
cin>>n5;
    
    //Map inputs -> output
    avg= (n1+n2+n3+n4+n5)/5.0f; //the equation to find the average
    //Display the outputs

cout<<"The average = "<<avg;
    //Exit stage right or left!
    return 0;
}