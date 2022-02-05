/* 
 * File:   main.cpp
 * Author: Samuel Rawls
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cmath>
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
   const float PI = 4*atan(1);
    float angle,
     rad;
    
    //Initialize or input i.e. set variable values
    cout<<setprecision(4)<<fixed<<showpoint;
    cout<<"Calculate trig functions"<<endl;
    cout<<"Input the angle in degrees."<<endl;
    cin>>angle;
    rad= angle*PI/180;
    //Map inputs -> outputs
    
    //Display the outputs
    
    cout<<"sin("<<static_cast<int>(angle)<<") = "<<sin(rad)<<endl;
    cout<<"cos("<<static_cast<int>(angle)<<") = "<<cos(rad)<<endl;
    cout<<"tan("<<static_cast<int>(angle)<<") = "<<tan(rad);
    //Exit stage right or left!
    return 0;
}