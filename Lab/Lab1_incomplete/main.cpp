/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr, Samuel Rawls 
 * Created on January 10, 2022, 5:05 PM
 * Purpose:  Lab 1 Optimize Fuel Purchase
 */

//System Level Libraries
#include <iostream>  //Input-Output Library
#include <iomanip>   //Format Libary
using namespace std;

//User Defined Libraries

//Global Constants, not Global Variables
//These are recognized constants from the sciences
//Physics/Chemistry/Engineering and Conversions between
//systems of units!

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Declare Variables
    float gGage,  //Gas Gage percentage full
        tnkSize,  //Size of tank in gallons
            mpg;  //Miles per Gallon
    float galReq; //Gallons Required at fill-up
    float gGageP; //Percentage of first inputted number
    
    //Initialize Variables
    
    //Map the inputs/known to the outputs
    galReq=tnkSize*(1-gGageP);
    gGageP=gGage/100;
    
    //Display the outputs
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Knowns for Your Particular Vehicle"<<endl<<endl;
    cout<<setw(10)<<"Gas Gage % Full= ";
    cin >>gGage;
    gGageP=gGage/100;
    cout<<setw(7)<<"Size of tank in Gallons= ";
    cin >> tnkSize;
    cout<<setw(7)<<"Gas Miles To the Gallons(mpg)=";
    cin >> mpg;
    galReq=tnkSize*(1-gGageP);
    cout<<setw(9)<<setprecision(1)<<"Gallons Required to fill up= "<<galReq<<endl;

    //Declare Part 2 Variables
    float g1PPG,  //Gas Station 1 $'s/Gallon
        milesG1,  //Miles to Gas Station 1
        cstfil1,  //Cost to fill up $'s
        totDis1,  //Total Distance driven
        cstDrv1,  //Cost to Drive to Station 1
        totCst1, //Total Cost for Station 1
        ppgSt1,  //Effective price per gallon station 1
        ppgSt2,  //Variables for the second station same def as First
        g2PPG,
        milesG2,
        cstfil2,  
        totDis2,  
        cstDrv2,  
        totCst2;
    
    //Calculate the cost of Gas Station 1		
    cout<<endl<<"Gas Station 1 inputs"<<endl;
    cout<<"Input Regular Price/Gallon and miles to Station 1"<<endl;
    cin>>g1PPG>>milesG1;
    cout<<endl;
    
    //Computation for Gas Station 1
    cstfil1=galReq*g1PPG;
    totDis1=2*milesG1;
    cstDrv1=totDis1/mpg*g1PPG;
    totCst1=cstfil1+cstDrv1;
    ppgSt1=totCst1/galReq;
    
    //Outputs for Gas Station 1
    cout<<setprecision(2);
    cout<<setw(6)<<"$"<<g1PPG<<"   = Regular Gas $/Gallon"<<endl;
    cout<<setw(7)<<static_cast<int>(milesG1)<<"      = Miles to Gas Station "<<endl;
    cout<<setw(5)<<"$"<<cstfil1<<"   = Cost to fill up"<<endl;
    cout<<setw(7)<<static_cast<int>(totDis1)<<"      = Total Distance driven in Miles back and forth to Gas Station"<<endl;
    cout<<setw(6)<<"$"<<cstDrv1<<"   = Cost to drive distance to and from gas station $"<<endl;
    cout<<setw(5)<<"$"<<totCst1<<"   = Total Cost $ with mileage to gas station"<<endl;
    cout<<setw(6)<<"$"<<ppgSt1<<"   = $ Price per gallon when adding in mileage to station"<<endl;
    
    //Calculate the cost of Gas Station 2
    cout<<endl<<"Gas Station 2 inputs"<<endl;
    cout<<"Input Regular Price/Gallon and miles to Station 2"<<endl;
    cin>>g2PPG>>milesG2;
    cout<<endl;
    
    //Computation for Gas Station 2 
    cstfil2=galReq*g2PPG;
    totDis2=2*milesG2;
    cstDrv2=totDis2/mpg*g2PPG;
    totCst2=cstfil2+cstDrv2;
    ppgSt2=totCst2/galReq;
    
    //Outputs for Gas Station 2 
    cout<<setprecision(2);
    cout<<setw(6)<<"$"<<g2PPG<<"    = Regular Gas $/Gallon"<<endl;
    cout<<setw(7)<<static_cast<int>(milesG2)<<"      = Miles to Gas Station "<<endl;
    cout<<setw(5)<<"$"<<cstfil2<<"   = Cost to fill up"<<endl;
    cout<<setw(7)<<static_cast<int>(totDis2)<<"      = Total Distance driven in Miles back and forth to Gas Station"<<endl;
    cout<<setw(6)<<"$"<<cstDrv2<<"   = Cost to drive distance to and from gas station $"<<endl;
    cout<<setw(5)<<"$"<<totCst2<<"   = Total Cost $ with mileage to gas station"<<endl;
    cout<<setw(6)<<"$"<<ppgSt2<<"    = $ Price per gallon when adding in mileage to station"<<endl;
    
   //Else, If to display the cheaper option
    if (ppgSt2>ppgSt1)
    {
        cout<<"\nStation 1 is the cheaper option at $"<<ppgSt1<<endl;
    }
    else if (ppgSt1>ppgSt2)
    {
        cout<<"\nStation 2 is the cheaper option at $"<<ppgSt2<<endl;
        
    }
    else 
    {
        cout<<"\nThe Stations are the same";
    }
    //Exit the program
    return 0;
}