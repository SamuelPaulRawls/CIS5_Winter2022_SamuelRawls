/* 
 * File:   main.cpp
 * Author: Samuel Rawls 
 * Created on January 12, 2022, 8:24 PM
 * Purpose:  To show the military budget percentage and 
 * NASA of the national budget
 *           
 */

//System Level Libraries
#include <iostream>  //Input-Output Library
#include <iomanip> //Format Library 
#include <locale>
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
    float   natBudg, //National Budget 
            dodBudg, //DOD Budget 
            nasBudg, //NASA budget 
            dodPerc, //DOD Percent
            nasPerc; //NASA Percent 
    //Initialize Variables
            natBudg= 6.8e12;
            dodBudg= 7.529e11;
            nasBudg= 2.52e10;
            dodPerc= dodBudg/natBudg;
            nasPerc= nasBudg/natBudg;
    //Map the inputs/known to the outputs
  
    //Display the outputs
            cout<<setprecision(2)<<fixed;
            cout<<" THE NATIONALBUDGET "<<endl;
            cout<<"\nThe national budget is $"<<"6,820,000,000,000.00"
<<endl;
            cout<<"\nThe military receives $"<<"752,900,000,000.00"
<<" or "<<dodPerc*100<<"%"<<endl;
            cout<<"\nNASA receives $"<<"$25,200,000,000.00"
<<" or "<<nasPerc*100<<"%";
    //Exit the program
    return 0;
}
