/* 
 * File:   main.cpp
 * Author: Samuel Rawls
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Calculating cans of coke to save your friends life
 *           
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
    float Mm, //mass of mouse 
    Mkm, //mass of sweetener that killed the mouse
    Cnv, //conversion mass and weight in .lbs and grams
    Cs, //concentration of sweetener 
    Ms, //mass of 1 can of soda pop 
    Wf,// weight of friend in .lbs 
    Mf, //mass of Friend
    Mkf,// mass of sweetener to kill friend
    Ncans;//amount of soda pop to drink 
    int totCans; //converison of decimal to whole number
    //Initialize or input i.e. set variable values
    cout<<"Program to calculate the limit of Soda Pop Consumption."<<endl;
    cout<<"Input the desired dieters weight in lbs."<<endl;
    cin>>Wf;
    Mkm= 5;
    Mm= 35;
    Cs= .001;
    Ms= 350;
    Cnv= 45359.2/100;
    Mf= Cnv*Wf;
    Mkf=Mkm/Mm*Mf;
    Ncans= Mkf/Ms*Cs;
    totCans= Ncans*1000000;
    //Map inputs -> outputs
    
    //Display the outputs
    cout<<setprecision(8)<<fixed;
    cout<<"The maximum number of soda pop cans\n";
    cout<<"which can be consumed is "<<totCans<<" cans";

    //Exit stage right or left!
    return 0;
}