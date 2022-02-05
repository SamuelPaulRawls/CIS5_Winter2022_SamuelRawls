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
    int x; //used to declare 10 #
    int sumNeg,//sum of negative numbers
    sumPos;//sum of positive numbers
    
    //Initialize or input i.e. set variable values
    sumNeg=sumPos=0;
    //Map inputs -> outputs
    cout<<"Input 10 numbers, any order, positive or negative"<<endl;
    cin>>x;
    sumPos+=x>0?x:0;
    sumNeg+=x<0?x:0;
    
    cin>>x;
    sumPos+=x>0?x:0;
    sumNeg+=x<0?x:0;
    
    cin>>x;
    sumPos+=x>0?x:0;
    sumNeg+=x<0?x:0;
    
    cin>>x;
    sumPos+=x>0?x:0;
    sumNeg+=x<0?x:0;
    
    cin>>x;
    sumPos+=x>0?x:0;
    sumNeg+=x<0?x:0;
    
    cin>>x;
    sumPos+=x>0?x:0;
    sumNeg+=x<0?x:0;
    
    cin>>x;
    sumPos+=x>0?x:0;
    sumNeg+=x<0?x:0;
    
    cin>>x;
    sumPos+=x>0?x:0;
    sumNeg+=x<0?x:0;
    
    cin>>x;
    sumPos+=x>0?x:0;
    sumNeg+=x<0?x:0;
    
    cin>>x;
    sumPos+=x>0?x:0;
    sumNeg+=x<0?x:0;
    //Display the outputs
cout<<"Negative sum ="<<setw(4)<<sumNeg<<endl;
cout<<"Positive sum ="<<setw(4)<<sumPos<<endl;
cout<<"Total sum    ="<<setw(4)<<sumPos+sumNeg;
    //Exit stage right or left!
    return 0;
}