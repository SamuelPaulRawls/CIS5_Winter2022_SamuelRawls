/* 
 * File:   main.cpp
 * Author: Samuel Rawls
 * Created on January 10, 2022, 8:14 PM
 * Purpose: To show how many millimeters the ocean levels will rise 
 * in 5, 7, and 10 years 
 *           
 */

//System Level Libraries
#include <iostream>  //Input-Output Library
using namespace std;

//User Defined Libraries

//Global Constants, not Global Variables
//These are recognized constants from the sciences
//Physics/Chemistry/Engineering and Conversions between
//systems of units!

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Initialize Random Seed once here!
    
    //Declare Variables
    float year1,//using float variables to represent each year
          year2,
          year3;
    
    //Initialize Variables
          year1 = 5; //what each year represents
          year2 = 7;
          year3 = 10;
         
    
    //Map the inputs/known to the outputs
    
    //Display the outputs
          cout<<"The Ocean levels will rise "<<year1*1.5<<" mm. in 5 years."<<endl;
          cout<<"The Ocean levels will rise "<<year2*1.5<<" mm. in 7 years."<<endl;
          cout<<"The Ocean levels will rise "<<year3*1.5<<" mm. in 10 years."<<endl;
    //Exit the program
    return 0;
}
