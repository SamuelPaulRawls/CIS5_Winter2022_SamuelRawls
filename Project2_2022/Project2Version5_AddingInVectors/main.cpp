/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 8th, 2021, 10:41 AM
 * Purpose:  Basic Menu for Homework and Exams
 */

//System Libraries
#include <iostream>   //Input/Output Library
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;  //STD Name-space where Library is compiled

//User Libraries

//Global Constants not Variables
//Math/Physics/Science/Conversions/Dimensions

//Function Prototypes
void H2P();
void scoreboard();

//Code Begins Execution Here with function main
int main(int argc, char** argv) {
    //Set random number seed once here
    srand(static_cast<unsigned int>(time(0))); //seed the random number 
    int rpoke2 = rand() % 3 + 1; //for npc choosing pokemon
    //Declare variables here
    int choose;//Choose a problem
    int poke, choose2; //choose2 = npc scratch attack
    int h1, h2;
    char again; // to ask player if they want to play again
    int score;
    string name; //input your name
    //string for pokemon
    string pokeA[] = {"Charmander", "Squirtle", "Bulbasaur" };
    //Initialize variables here
    h2= 50; //Health for each player
    h1= 50;
    score= 0;
    
        //List of Problems which can be run by the program
        cout<<"**********************************"<<endl;
        cout<<"*Welcome to the world of Pokemon!*"<<endl;
        cout<<"**********************************"<<endl;  
        cout<<"Enter 1 to Start"<<endl;
        cout<<"Enter 2 for How To Play"<<endl;
        cout<<"Enter Any Key to Exit"<<endl;
        cin>>choose;
        cout<<endl;
        
do{ switch(choose){
    
case 1:
    //starting the game 
    cout<<"Ready Player One"<<endl;
    cout<<"\n************************************"<<endl;
    cout<<"What is your name?"<<endl;
    cin>>name;
    cout<<"Hello "<<name<<","<<endl;
    cout<<"Today is the day you finally get to choose your first Pokemon."<<endl;
    cout<<"You have been waiting for this day for your whole life."<<endl;
    cout<<"Do you?"<<endl;
    cout<<"1. Go downstairs"<<endl;
    cout<<"2. Explore your room"<<endl;
            cin>>choose;
            
    if (choose == 1){
        cout<<"You run down your wooden stairs. "<<endl;
        cout<<"Your mom is in the kitchen and she has a sandwich and a lunch bag next to it. "<<endl;
        cout<<"Do you?"<<endl;
        cout<<"1. Leave without taking the sandwich";
        cout<<"\n2. Or take the sandwich and thank your mom"<<endl;
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
        cout<<"\nPlease enter in 1 , 2 , 3"<<endl;
        cout<<"\n1. Charmander\tFire \n2. Squirtle\tWater\n3. Bulbasaur\tGrass"<<endl;
        cout<<endl;
        cin>>poke; // choose pokemon
        cout<<endl;
        
        if (poke== 1){
            cout<<"You have chosen "<<pokeA[0]<<"!"<<endl;
        }
        else if (poke== 2){
            cout<<"You have chosen "<<pokeA[1]<<"!"<<endl;
        }
        else{
            cout<<"You have chosen "<<pokeA[2]<<"!"<<endl;
        }
        
        cout<<"A trainer appears."<<endl;
        cout<<"Trainer Sam has challenged you."<<endl;
        cout<<"************************************"<<endl;
        cout<<"Trainer Sam has sent out "<<rpoke2<<"!"<<endl;
        cout<<"You sent out "<<poke<<"!"<<endl;
        
        do{ // BATTLE CODE
            cout<<"How would you like to attack?"<<endl;
            cout<<"1. Scratch"<<endl;
            cout<<"2. Tackle"<<endl;
            cin>>choose;
            
            choose2= 2; //random for opponent 
            
            score++; // add score to each turn
            
            if(choose== 1){
            int scratch = rand() % 40;
            cout<<"Your "<<poke<<"'s scratch did "<<scratch<<" damage!"<<endl;
            h2= h2 - scratch;
            cout<<"Trainer Sam's "<<rpoke2<<" has "<<h2<<" health!"<<endl;
            cout<<endl;
            }
            if (choose == 2){
            int tackle = rand() % 50;
            cout<<"Your "<<poke<<"'s tackle did "<<tackle<<" damage!"<<endl;
            h2= h2 - tackle;
            cout<<"Trainer Sam's "<<rpoke2<<" has "<<h2<<" health!"<<endl;
            cout<<endl;
            }
            if(choose2== 1){
             int scratch2 = rand() % 40;
            cout<<"Trainer Sam's "<<rpoke2<<"'s scratch did "<<scratch2<<" damage!"<<endl;
            h1= h1 - scratch2;
            cout<<"Your "<<poke<<" has "<<h1<<" health!"<<endl;
            cout<<endl;
            }
            if (choose2== 2){
            int tackle2 = rand() % 50;
            cout<<"Trainer Sam's "<<rpoke2<<"'s tackle did "<<tackle2<<" damage!"<<endl;
            h1= h1 - tackle2;
            cout<<"Your "<<poke<<" has "<<h1<<" health!"<<endl;
            cout<<endl;
            }
            if(0 >= h2){
                cout<<endl;
                cout<<"Trainer Sam's "<<rpoke2<<" has fainted."<<endl;
                cout<<"You Win"<<endl;
                cout<<"You have received a score of "<<score<<" points"<<endl;
                cout<<"Would you like to play again? y/n"<<endl;
                cin>>again;
                break; 
            }
            else if(0 >= h1){
                cout<<endl;
                cout<<"Your "<<poke<<" has fainted."<<endl;
                cout<<"Game Over"<<endl;
                cout<<"You have received a score of "<<score<<" points"<<endl;
                cout<<"Would you like to play again? y/n"<<endl;
                cin>>again;
                break;
            }
           
        }while(h2 >= 0 || h1 >= 0); 
        
        //scoreboard
        cout<<"************************************"<<endl;
        cout<<"\tScoreboard"<<endl;
        cout<<name<<"  =   "<<score<<endl;
        cout<<"Jerry   =   4"<<endl;
        cout<<"Terry   =   7"<<endl; 
        cout<<"Toyo    =   9"<<endl;
        cout<<"AFM     =   9"<<endl;
        cout<<"Fred    =   10"<<endl;
        cout<<"Nard    =   12"<<endl;
        cout<<"Waur    =   12"<<endl;
        cout<<"Jomo    =   13"<<endl;
        cout<<"************************************"<<endl;
        break;
            case 2:  H2P();break;
            
            default:cout<<"Exiting the Menu"<<endl;
        }

}while(again== 'y' || again== 'Y');

    return 0;
}

void H2P(){
    cout<<"****************************"<<endl;
            cout<<"*Welcome to the How To play*"<<endl;
            cout<<"****************************"<<endl;
            cout<<"When faced with the option to choose your fate, usually "
                    "scattered throughout the story, only Enter either 1 or 2."<<endl;
            cout<<"Pokemon:"<<endl;
            cout<<"1 = Charmander"<<endl;
            cout<<"2 = Squirtle"<<endl;
            cout<<"3 = Bulbasaur"<<endl;
            cout<<"Battle:"<<endl;
            cout<<"When in battle only enter in the number in front of the"
                  " attack you wish to do."<<endl;
            cout<<"Have fun and Please Enjoy, Thank you for playing!"<<endl;
            cout<<"This version created by Samuel Rawls"<<endl;
            cout<<"All rights for Pokemon reserved to Nintendo"<<endl;
           
}