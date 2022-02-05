/* 
 * File:   main.cpp
 * Author: Samuel Rawls 
 * Created on January 18, 2019, 12:36 PM
 * Purpose:  Create a way to determine your internet bill. 
 */

//System Libraries
#include <iostream>  //Input/Output Library
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
    char pack;
    float hoursW,
            pPm;
        
    //Initialize or input i.e. set variable values
    cout<<"ISP Bill"<<endl;
    cout<<"Input Package and Hours"<<endl;
    cin>>pack;
    cin>>hoursW;
    
    cout<<fixed<<setprecision(2);
    
     if(hoursW>744) //if hours watch exceed 744 an error will appear
     {
         cout<<"Please do not exceed 744 hours watched.";
         return 0;
     }
    
     else if (pack=='A') //else ifs for A , B and C to decide the internet bill.
    {
        if(hoursW>=10)
        {
         pPm= (hoursW-10)*2+9.95;
                 cout<<"Bill = $ "<<pPm;
        }
        else
        {
            pPm= 9.95;
                    cout<<"Bill = $ "<<pPm;
        }
      
    }
     else if (pack=='B')
    {
         if(hoursW>=20)
         {
             pPm= (hoursW-20)+14.95;
                     cout<<"Bill = $ "<<pPm;
         }
         else
         {
             pPm= 14.95;
             cout<<"Bill = $ "<<pPm;
         }
    }
     else if (pack=='C')
     {
         pPm= 19.95;
         cout<<"Bill = $ "<<pPm;
     }
    
     else //else to cause an error if someone types in anything other than A,B or C
     {
         cout<<"Please either only choose A,B or C for your package.";
         return 0;
     }
    //Map inputs -> outputs
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}