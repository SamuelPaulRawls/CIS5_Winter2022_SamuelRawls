/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 19, 2022, 10:40 AM
 * Purpose:  Rock-Paper-Scissors
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
    char ply1, ply2;
    
    //Initialize Variables
    cout<<"Rock Paper Scissors Game"<<endl;
    cout<<"Input Player 1 and PLayer 2 Choices"<<endl;
    cin>>ply1;
    cin>>ply2;
    
    //Map the inputs/known to the outputs
    if(ply1==ply2){
        cout<<"This is Tie!"<<endl;
    }else if(ply1=='R'||ply1=='r'){
        if(ply2=='S'||ply2=='s')cout<<"Rock breaks scissors.";
        if(ply2=='P'||ply2=='p')cout<<"Paper covers rock.";
    }else if(ply1=='P'||ply1=='p'){
        if(ply2=='R'||ply2=='r')cout<<"Paper covers rock.";
        if(ply2=='S'||ply2=='s')cout<<"Scissors cuts paper.";
    }else if(ply1=='S'||ply1=='s'){
        if(ply2=='P'||ply2=='p')cout<<"Scissors cuts paper.";
        if(ply2=='R'||ply2=='r')cout<<"Paper covers rock.";
    }
    else
    {
        cout<<"Please either choose P,R,S";
        return 0;
    }
       
    //Display the outputs

    //Exit the program
    return 0;
}