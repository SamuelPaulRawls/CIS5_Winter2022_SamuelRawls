/* 
 * File:   main.cpp
 * Author: Samuel Rawls 
 * Created on January 10, 2022, 10:03 PM
 * Purpose:  Finding the amount of the stock with commission and without
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
    float totWO,
            com,
            totW;
            
    //Initialize Variables
    totWO= 750*3.5;
            com= .02*totWO;
            totW= totWO +com;
    //Map the inputs/known to the outputs
    
    //Display the outputs
            cout<<" The Stock Commission";
            cout<<" \n\nAmount paid for the stock WO commission is $"<<totWO;
            cout<<" \nAmount of commission is $"<<com;
            cout<<" \nAmount paid for the stock with commission is $"<<totW;
    //Exit the program
    return 0;
}
