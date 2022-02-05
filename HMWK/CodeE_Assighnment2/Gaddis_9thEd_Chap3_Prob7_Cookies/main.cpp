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
    float eatnCoo, //eaten cookies
          totCal, //total calories
          totSer; //total servings
          
          
    
    //Initialize or input i.e. set variable values
    cout<<"Calorie Counter"<<endl;
    cout<<"How many cookies did you eat?"<<endl;
    cin>>eatnCoo;
    totSer= eatnCoo*4;
    totCal= eatnCoo*75;
    //Map inputs -> outputs
    
    //Display the outputs
    cout<<"You consumed "<<totCal<<" calories.";
    //Exit stage right or left!
    return 0;
}