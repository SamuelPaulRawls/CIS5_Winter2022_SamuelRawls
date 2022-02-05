/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 8th, 2021, 10:41 AM
 * Purpose:  Basic Menu for Homework and Exams
 */

//System Libraries
#include <iostream>   //Input/Output Library
#include <math.h>
#include <iomanip>
#include <string.h>
using namespace std;  //STD Name-space where Library is compiled

//User Libraries

//Global Constants not Variables
//Math/Physics/Science/Conversions/Dimensions

//Function Prototypes
const float lpg= 0.264179;
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
float calc(float liters, float miles)
{
    float gal;
    gal= lpg*liters;
    float mileage = miles/gal;
    return(mileage);
}
const int PERC= 100;
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
float calc1(float curP, float yearP)
{
    float inflR;
    inflR= ((curP- yearP)/yearP)*PERC;
    //float inflRP = inflR*PERC;
    return(inflR);
}
float calcP1(float curP, float yearP)
{
    float inflR;
     inflR= ((curP- yearP)/yearP);
     float price1= pow(1+inflR, 1)*curP;
     
     return(price1);
}
float calcP2(float curP, float yearP)
{
    float inflR;
     inflR= ((curP- yearP)/yearP);
     float price1= pow(1+inflR, 2)*curP;
     
     return(price1);
}
//Code Begins Execution Here with function main
int main(int argc, char** argv) {
    //Set random number seed once here
    
    //Declare variables here
    int choose;//Choose a problem
    
    //Initialize variables here
    do{
        //List of Problems which can be run by the program
        cout<<"Choose from the following Menu Items"<<endl;
        cout<<"Problem 0 - Gaddis_9thEd_Chap5_Prob1_Sum"<<endl;
        cout<<"Problem 1 - Gaddis_9thEd_Chap5_Prob7_PayInPennies"<<endl;
        cout<<"Problem 2 - Gaddis_9thEd_Chap5_Prob13_MinMax"<<endl;
        cout<<"Problem 3 - Gaddis_9thEd_Chap5_Prob22_Rectangle"<<endl;
        cout<<"Problem 4 - Gaddis_9thEd_Chap5_Prob23_Pattern"<<endl;
        cout<<"Problem 5 - Sav9EdC4P1"<<endl;
        cout<<"Problem 6 - Sav9EdC4P2"<<endl;
        cout<<"Problem 7 - Sav9EdC4P4"<<endl;
        cout<<"Problem 8 - Sav9EdC4P5"<<endl;
        cout<<"Problem 9 - Gaddis_9thEd_Chap5_Prob13_MinMax"<<endl;
        cout<<"Etc......"<<endl;
        cout<<"10 or greater, all negatives to exit"<<endl;
        cin>>choose;
        
switch(choose){
case 0:{    
    int user_number,
        total = 0;
    //Initialize or input i.e. set variable values 
    cin >> user_number;
    //Map inputs -> outputs
    for (int i = 1; i <= user_number; i++)
    {
        total += i;

    }
    cout << "Sum = "<<total;
    cout<<endl;
    cout<<endl;
    break;}
case 1:{ 
    int day;
    //Initialize or input i.e. set variable values

    //Map inputs -> outputs
    cin >> day;
    if (day >= 1){
    //Display the outputs
    
    cout << fixed << setprecision(2);
    cout << "Pay = $" << setw(3) << ((pow(2,day) - 1) * 0.01);
    }break;}
case 2:{
                 int varble, //users inputted variable
    small, large; //to determine the smallest and largest variable 
    //Initialize or input i.e. set variable values
    cin>> varble;
    small = varble;
    large = varble;
    //Map inputs -> outputs
   while (varble != -99)
   {
       if (varble > large )
   {
      large = varble;
   }
   else 
        if (varble < small)
      {
         small = varble;
      }
      cin>>varble;
   }
    //Display the outputs
    cout<<"Smallest number in the series is "<<small<<endl;
    cout<<"Largest  number in the series is "<<large;
    break;}
case 3:{
                 int side;
    char let;

    //Initialize or input i.e. set variable values
   
    cin >> side >> let;

    if (side <= 15 && side >= 1){
    for (int i = side; i > 0; i--){
    for (int i = side; i > 0; i--){
        cout << let;
    } if (i > 1){
        cout << endl;
    }
    }
    } 
break;}
case 4:{
                 int given;
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cin >> given;
    for (int x = 0; x < given; x++){
        int i = x + 1;
    
    while(i > 0){
        
        cout << "+";
        i -= 1;        
    }
    cout << endl << endl;
    }
    for (int z = given; z > 0; z--){
        int y = z;    
    while(y > 0){
        
        cout << "+";
        y -= 1;        
    }
    if (z > 1 ){
    cout << endl << endl;
    }
        
    }
    
break;}

case 5:{
                   float lit, miles;
    char ch;
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    do{
        cout<<setprecision(2)<<fixed;
        cout<<"Enter number of liters of gasoline:\n"<<endl;
        cin>>lit;
        cout<<"Enter number of miles traveled:\n"<<endl;
        cin>>miles;
        cout<<"miles per gallon:"<<endl;
        cout<<calc(lit,miles)<<endl;
        cout<<"Again:\n";
        cin>>ch;
        if (ch=='y')
        {
            cout<<endl;
        }
        
        
    }while(ch=='y');
break;}
case 6:{
             float lit, miles, lit2, miles2;
    int car1, car2;
    char ch;
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    do{
        cout<<setprecision(2)<<fixed;
        cout<<"Car 1"<<endl;
        cout<<"Enter number of liters of gasoline:"<<endl;
        cin>>lit;
        cout<<"Enter number of miles traveled:"<<endl;
        cin>>miles;
        cout<<"miles per gallon: ";
        cout<<calc(lit,miles)<<endl;
        cout<<endl;
        cout<<"Car 2"<<endl;
        cout<<"Enter number of liters of gasoline:"<<endl;
        cin>>lit2;
        cout<<"Enter number of miles traveled:"<<endl;
        cin>>miles2;
        cout<<"miles per gallon: ";
        cout<<calc(lit2,miles2)<<endl;
        if (calc(lit,miles)>= calc(lit2,miles2))
        {
            cout<<"\nCar 1 is more fuel efficient"<<endl;
        }
        else 
            cout<<"\nCar 2 is more fuel efficient"<<endl;
        cout<<"\nAgain:\n";
        cin>>ch;
        if (ch=='y')
        {
            cout<<endl;
        }
        
        
    }while(ch=='y');    
break;}
case 7:{
                 float curPrc, yearPrc;
    char ch;
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    do
    {
        cout<<setprecision(2)<<fixed;
    cout<<"Enter current price:"<<endl;
    cin>>curPrc;
    cout<<"Enter year-ago price:"<<endl;
    cin>>yearPrc;
    cout<<"Inflation rate: "<<calc1(curPrc, yearPrc)<<"%"<<endl;
    cout<<"\nAgain:"<<endl;
    cin>>ch;
     if (ch=='y')
        {
            cout<<endl;
        }
    }while(ch== 'y');
break;}
case 8:{
                    float curPrc, yearPrc;
    char ch;
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    do
    {
        cout<<setprecision(2)<<fixed;
    cout<<"Enter current price:"<<endl;
    cin>>curPrc;
    cout<<"Enter year-ago price:"<<endl;
    cin>>yearPrc;
    cout<<"Inflation rate: "<<calc1(curPrc, yearPrc)<<"%"<<endl;
    cout<<endl;
    cout<<"Price in one year: $"<<calcP1(curPrc, yearPrc)<<endl;
    cout<<"Price in two year: $"<<calcP2(curPrc, yearPrc)<<endl;
    cout<<"\nAgain:"<<endl;
    cin>>ch;
     if (ch=='y')
        {
            cout<<endl;
        }
    }while(ch== 'y');
break;}
            case 9:cout<<"Place Problem 9 here"<<endl;break;
            default:cout<<"Exiting the Menu"<<endl;
        }
    }while(choose>=0 && choose<=9);

    return 0;
}