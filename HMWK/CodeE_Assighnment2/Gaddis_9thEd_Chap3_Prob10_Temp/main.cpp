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
    float f, //variable for far
    c; //variable for cel
    //Initialize or input i.e. set variable values
cout<<"Temperature Converter"<<endl;
cout<<"Input Degrees Fahrenheit"<<endl;
cin>>f;
c= (f-32)*5/9; //cel converter from far
    //Map inputs -> outputs
    
    //Display the outputs
cout<<showpoint<<fixed<<setprecision(1);
cout<<f<<" Degrees Fahrenheit = "<<c<<" Degrees Centigrade";

    //Exit stage right or left!
    return 0;
}
