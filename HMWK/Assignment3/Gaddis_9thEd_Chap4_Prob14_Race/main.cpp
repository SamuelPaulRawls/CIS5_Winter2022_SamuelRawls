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
    string runner1,
           runner2,
           runner3;
    float runt1,
          runt2,
          runt3;
    //Initialize or input i.e. set variable values
    cout<<"Race Ranking Program"<<endl;
    cout<<"Input 3 Runners"<<endl;
    cin>>runner1;
    cin>>runt1;
    cin>>runner2;
    cin>>runt2;
    cin>>runner3;
    cin>>runt3;
    //Map inputs -> outputs
    cout<<"Their names, then their times"<<endl;
   if(runt1<=runt2 && runt2<=runt3){
        cout<<runner1<<"\t"<<setw(3)<<runt1<<endl;
        cout<<runner2<<"\t"<<setw(3)<<runt2<<endl;
        cout<<runner3<<"\t"<<setw(3)<<runt3;
    }else if(runt1<=runt3 && runt3<=runt2){
        cout<<runner1<<"\t"<<setw(3)<<runt1<<endl;
        cout<<runner3<<"\t"<<setw(3)<<runt3<<endl;
        cout<<runner2<<"\t"<<setw(3)<<runt2;
    }else if(runt2<=runt1 && runt1<=runt3){
        cout<<runner2<<"\t"<<setw(3)<<runt2<<endl;
        cout<<runner1<<"\t"<<setw(3)<<runt1<<endl;
        cout<<runner3<<"\t"<<setw(3)<<runt3;
    }else if(runt1<=runt3 && runt3<=runt1){
        cout<<runner2<<"\t"<<setw(3)<<runt2<<endl;
        cout<<runner3<<"\t"<<setw(3)<<runt3<<endl;
        cout<<runner1<<"\t"<<setw(3)<<runt1;
    }else if(runt3<=runt1 && runt1<=runt2){
        cout<<runner3<<"\t"<<setw(3)<<runt3<<endl;
        cout<<runner1<<"\t"<<setw(3)<<runt1<<endl;
        cout<<runner2<<"\t"<<setw(3)<<runt2;
    }else{
        cout<<runner3<<"\t"<<setw(3)<<runt3<<endl;
        cout<<runner2<<"\t"<<setw(3)<<runt2<<endl;
        cout<<runner1<<"\t"<<setw(3)<<runt1<<endl;
    }
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}