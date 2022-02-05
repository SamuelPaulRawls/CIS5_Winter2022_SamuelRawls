/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <string>
#include <algorithm>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    string n1, //setting the strings 
    n2,
    n3;
    
    //Initialize or input i.e. set variable values
    cout<<"Sorting Names"<<endl;
    cout<<"Input 3 names"<<endl;
    if (cin >> n1 >> n2 >> n3) //cin to input names 
        {
        if (n2 > n3) //using ASCII values to determine alphabetical order 
            swap(n2,n3); 
        if (n1 > n3)
            swap(n1,n3);
        if (n1 > n2)
            swap(n1,n2);
    }
 
    
    //Map inputs -> outputs
    
    //Display the outputs
    cout<<n1<<endl;
    cout<<n2<<endl;
    cout<<n3;

    //Exit stage right or left!
    return 0;
}