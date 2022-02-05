/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 8th, 2021, 10:41 AM
 * Purpose:  Basic Menu for Homework and Exams
 */

//System Libraries
#include <iostream>   //Input/Output Library
using namespace std;  //STD Name-space where Library is compiled

//User Libraries

//Global Constants not Variables
//Math/Physics/Science/Conversions/Dimensions

//Function Prototypes


//Code Begins Execution Here with function main
int main(int argc, char** argv) {
    //Set random number seed once here
    
    //Declare variables here
    int choose;//Choose a problem
    
    //Initialize variables here
    do{
        //List of Problems which can be run by the program
        cout<<"**********************************"<<endl;
        cout<<"*Welcome to the world of Pokemon!*"
        cout<<"**********************************"    
        cout<<"Enter 1 to Start"<<endl;
        cout<<"Enter 2 for How To Play"<<endl;
        cout<<"Enter Any Key to Exit"<<endl;
        cin>>choose;
        cout<<endl;
        switch(choose){
            case 1:cout<<  <<endl;break;
            case 2:cout<<"Place Problem 1 here"<<endl;break;
            default:cout<<"Exiting the Menu"<<endl;
        }
    }while(choose >= 2);

    return 0;
}