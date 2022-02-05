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
    string poke;
    
    //Initialize variables here
   
        //List of Problems which can be run by the program
        cout<<"**********************************"<<endl;
        cout<<"*Welcome to the world of Pokemon!*"<<endl;
        cout<<"**********************************"<<endl;  
        cout<<"Enter 1 to Start"<<endl;
        cout<<"Enter 2 for How To Play"<<endl;
        cout<<"Enter Any Key to Exit"<<endl;
        cin>>choose;
        cout<<endl;
        switch(choose){
case 1:
    cout<<"************************************"<<endl;
    cout<<"*Today is the day you finally get to choose your first Pokemon."<<endl;
    cout<<"*You have been waiting for this day for your whole life."<<endl;
    cout<<"*Do you?"<<endl;
    cout<<"*1. Go downstairs"<<endl;
    cout<<"*2. Explore your room"<<endl;
            cin>>choose; 
    if (choose == 1){
        cout<<"*You run down your wooden stairs. "<<endl;
        cout<<"*Your mom is in the kitchen and she has a sandwich and a lunch bag next to it. "<<endl;
        cout<<"*Do you?"<<endl;
        cout<<"*1. Leave without taking the sandwich";
        cout<<"\n*2. Or take the sandwich and thank your mom"<<endl;
        cin>>choose;
        if (choose == 1){
            cout<<"You leave out the window."<<endl;
            cout<<"You head to the lab."<<endl;
            cout<<"Professor Lehr is waiting for you to arrive."<<endl;
            cout<<"Professor Lehr: Ah a new youngster is here to start their journey."<<endl;
            cout<<"Professor Lehr: Please choose from the following Pokemon."<<endl;
        }
        else{
            cout<<"*You leave the house and run down to the to the lab where Professor Lehr "
                    "is waiting for you. "<<endl;
            cout<<"Professor Lehr: Ah a new youngster looking to start their Pokemon Journey."<<endl;
            cout<<"Professor Lehr: Please choose from the following Pokemon."<<endl;
        }
    }
    else{
        cout<<"You notice that you are still wearing your pajamas, and decide to change."<<endl;
        cout<<"Then you head downstairs."<<endl;
        cout<<"Your mom is waiting there in the kitchen with a sandwich, and a deep sad look "
                "on her face."<<endl;
        cout<<"Mom: I can't believe my baby is growing up so fast."<<endl;
        cout<<"Do you?"<<endl;
        cout<<"1. Pretend like your mom doesn't exist"<<endl;
        cout<<"2. Hug your mom and thank her for making you a sandwich"<<endl;
        cin>>choose;
        if(choose == 1){
            cout<<"You bolt out the door."<<endl;
            cout<<"Your mom is just slowing you down from taking over the Pokemon world"<<endl;
            cout<<"You get to the lab."<<endl;
            cout<<"Professor Lehr is there helping out another youngster choosing "
                    "their first Pokemon as well.\n";
            cout<<"You push the kid out of the way and he hits the floor."<<endl;
            cout<<"Professor Lehr shocked by all of this asks if you are a new Pok"
                    "emon Trainer."<<endl;
            cout<<"Professor Lehr: Please choose from the following Pokemon."<<endl;
        }
        else {
            cout<<"You hug your mom and take the sandwich."<<endl;
            cout<<"You head straight to the lab and walk in and see Professor Lehr "
                    "is helping out another new Pokemon trainer."<<endl;
            cout<<"You wait Patiently."<<endl;
            cout<<"Professor Lehr: Ah another new youngster already."<<endl;
            cout<<"Professor Lehr: Please choose from the following Pokemon."<<endl;
        }
            
    }
        cout<<"\nPlease enter in Charmander, Squirtle , Bulbasaur"<<endl;
        cout<<"\n1. Charmander\tFire \n2. Squirtle\tWater\n3. Bulbasaur\tGrass"<<endl;
        cout<<endl;
        cin>>poke;
        if(poke== "Charmander" || poke== "charmander"){
            poke== "Charmander";
            cout<<endl;
            
        }
        else if(poke== "squirtle" || poke== "Squirtle"){
            poke== "Squirtle";
            cout<<endl;
        }
        else if(poke== "Bulbasaur" || poke== "bulbasaur"){
            poke== "Bulbasaur";
            cout<<endl;
        }
        else{
            cout<<"ERROR"<<endl;
            break;
        }
        cout<<poke;
        cout<<endl;
        cout<<"A trainer appears."<<endl;
        cout<<"Trainer Sam has challenged you."<<endl; 
     break;
            case 2:cout<<"Place Problem 1 here"<<endl;break;
            default:cout<<"Exiting the Menu"<<endl;
        }

    return 0;
}