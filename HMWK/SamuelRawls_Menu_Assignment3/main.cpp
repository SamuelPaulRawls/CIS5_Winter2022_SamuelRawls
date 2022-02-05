/* 
 * File:   main.cpp
 * Author: Samuel Rawls
 * Created on jan. 20, 6:08 pm.
 * Purpose:  Basic Menu for Homework and Exams
 */

//System Libraries
#include <iostream>   //Input/Output Library
#include <string>
#include <algorithm>
#include <cstdlib>
#include <cstring>
#include <iomanip>
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
        cout<<"Choose from the following Menu Items"<<endl;
        cout<<"0= Gaddis_9thEd_Chap4_Prob8_SortNames"<<endl;
        cout<<"1= Gaddis_9thEd_Chap4_Prob11_Books"<<endl;
        cout<<"2= Gaddis_9thEd_Chap4_Prob12_BankCharges"<<endl;
        cout<<"3= Gaddis_9thEd_Chap4_Prob14_Race"<<endl;
        cout<<"4= Gaddis_9thEd_Chap4_Prob23_ISP"<<endl;
        cout<<"5= Savitch_9thEd_Chap3_PracProb1_RockPaperScissors"<<endl;
        cout<<"6= Savitch_9thEd_Chap3_Prob3_Roman_Conversion"<<endl;
        cout<<"7= Savitch_9thEd_Chap3_PracProb4_CompatibleSigns"<<endl;
        cout<<"10 or greater, all negatives to exit"<<endl;
        cin>>choose;
        
        switch(choose){
case 0:{ 
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
    cout<<endl;
    cout<<n1<<endl;
    cout<<n2<<endl;
    cout<<n3<<endl;
    cout<<endl;
                
     break;
            }
            
case 1:{
                 int bookP;
    
    //Initialize or input i.e. set variable values
    cout<<"Book Worm Points"<<endl;
    cout<<"Input the number of books purchased this month."<<endl;
    cin>>bookP;
    //Map inputs -> outputs
    if(bookP== 0)
    {
        cout<<"Books purchased =  "<<bookP<<endl;
        cout<<"Points earned   = 0";
    }
    else if(bookP== 1)
    {
       cout<<"Books purchased =  "<<bookP<<endl;
        cout<<"Points earned   = 5";
    }
    else if(bookP== 2)
    {
        cout<<"Books purchased =  "<<bookP<<endl;
        cout<<"Points earned   = 15";
    }
    else if(bookP== 3)
    {
      cout<<"Books purchased =  "<<bookP<<endl;
      cout<<"Points earned   = 30";
    }
    else 
    {
        cout<<"Books purchased =  "<<bookP<<endl;
        cout<<"Points earned   = 60";
    }
    cout<<endl;
                break;
            }
case 2:{
          float bal,
          checks,
          tcheck,
          exchar,
          moncha;
          
    
    //Initialize or input i.e. set variable values
    exchar=15;
    moncha=10;
    cout<<"Monthly Bank Fees"<<endl;
    cout<<"Input Current Bank Balance and Number of Checks"<<endl;
    cin>>bal;
    cin>>checks;
    if(0>bal)
    {
        cout<<"ALERT! Account is Overdrawn"<<endl;
        return 0;
    }
    if(0>checks)
    {
        cout<<"Only a number 0 or above is accepted."<<endl;
        return 0;
    }
    if(20>checks)
    {
        tcheck=.10*checks;
    }
    else if(checks>20)
    {
        tcheck=.08*checks;
    }
    else if(checks>=40)
    {
        tcheck=.06*checks;
    }
    else if(checks>=60);
    {
        tcheck=.04*checks;
    }
    
    //Map inputs -> outputs
    cout<<setprecision(2)<<fixed<<showpoint;
    cout<<"Balance     $   "<<setw(2)<<bal<<endl;
    cout<<"Check Fee   $   "<<setw(6)<<tcheck<<endl;
    cout<<"Monthly Fee $   "<<setw(6)<<moncha<<endl;
    if(400>bal)
    {
        cout<<"Low Balance $   "<<setw(6)<<exchar<<endl;
        cout<<"New Balance $   "<<setw(6)<<bal-moncha-tcheck-exchar;
        
    }
    else
    {
    cout<<"New Balance $   "<<setw(6)<<bal-moncha-tcheck;
    }
    cout<<endl;
                break;
            }
case 3:{
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
        cout<<runner1<<"\t"<<runt1<<endl;
        cout<<runner2<<"\t"<<runt2<<endl;
        cout<<runner3<<"\t"<<runt3;
    }else if(runt1<=runt3 && runt3<=runt2){
        cout<<runner1<<"\t"<<runt1<<endl;
        cout<<runner3<<"\t"<<runt3<<endl;
        cout<<runner2<<"\t"<<runt2;
    }else if(runt2<=runt1 && runt1<=runt3){
        cout<<runner2<<"\t"<<runt2<<endl;
        cout<<runner1<<"\t"<<runt1<<endl;
        cout<<runner3<<"\t"<<runt3;
    }else if(runt1<=runt3 && runt3<=runt1){
        cout<<runner2<<"\t"<<runt2<<endl;
        cout<<runner3<<"\t"<<runt3<<endl;
        cout<<runner1<<"\t"<<runt1;
    }else if(runt3<=runt1 && runt1<=runt2){
        cout<<runner3<<"\t "<<runt3<<endl;
        cout<<runner1<<"\t"<<runt1<<endl;
        cout<<runner2<<"\t"<<runt2;
    }else{
        cout<<runner3<<"\t"<<runt3<<endl;
        cout<<runner2<<"\t"<<runt2<<endl;
        cout<<runner1<<"\t"<<runt1<<endl;
    }
    cout<<endl;
                break;
            }
case 4:{
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
     }
    cout<<endl;
        break;
    }
case 5:{   char ply1, ply2;
    
    //Initialize Variables
    cout<<"Rock Paper Scissors Game"<<endl;
    cout<<"Input Player 1 and Player 2 Choices"<<endl;
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
    }
    cout<<endl;
    break;
}
case 6:{
       short algebra;
    string roman="";
    char n1000s,n100s,n10s,n1s;
    
    //Initialize variables here
    cout<<"Arabic to Roman numeral conversion."<<endl;
    cout<<"Input the integer to convert."<<endl;
    cin>>algebra;
    
    //Determine if an appropriate number
    if(algebra<1000 || algebra>=3001){
        if(algebra>=3001)cout<<algebra<<" is Out of Range!";
        else cout<<algebra<<" is Out of Range!";
        return 0;
    }
    
    //Calculate the number of powers of 10
    n1000s=algebra/1000;    //Strip 1000's
    n100s=algebra%1000/100; //Stripped the 100's place
    n10s=algebra%100/10;    //Stripped the 10's place
    n1s=algebra%10;         //Stripped the 1's place
    
    //Output Roman Numerals 1000's - Switch Case
    switch(n1000s){
        case 3:roman+="M";
        case 2:roman+="M";
        case 1:roman+="M";
    }
    
    //Output Roman Numerals 100's -  Ternary Operator
    roman+=n100s==9?"CM":
           n100s==8?"DCCC":
           n100s==7?"DCC":
           n100s==6?"DC":
           n100s==5?"D":
           n100s==4?"CD":
           n100s==3?"CCC":
           n100s==2?"CC":
           n100s==1?"C":"";
    
    //Output Roman Numerals 10's - Dependent if
    if(n10s==9)roman+="XC";
    else if(n10s==8)roman+="LXXX";
    else if(n10s==7)roman+="LXX";
    else if(n10s==6)roman+="LX";
    else if(n10s==5)roman+="L";
    else if(n10s==4)roman+="XL";
    else if(n10s==3)roman+="XXX";
    else if(n10s==2)roman+="XX";
    else if(n10s==1)roman+="X";
              
    //Output Roman Numerals 10's - Independent if
    if(n1s==9)roman+="IX";
    if(n1s==8)roman+="VIII";
    if(n1s==7)roman+="VII";
    if(n1s==6)roman+="VI";
    if(n1s==5)roman+="V";
    if(n1s==4)roman+="IV";
    if(n1s==3)roman+="III";
    if(n1s==2)roman+="II";
    if(n1s==1)roman+="I";
    
    //Display the results
    cout<<algebra<<" is equal to "<<roman;
    cout<<endl;
    break;
}
case 7:{
     string sign1, //label each sign as strings
         sign2;
    //Initialize or input i.e. set variable values
    cout<<"Horoscope Program which examines compatible signs."<<endl;
    cout<<"Input 2 signs."<<endl;
    cin>>sign1;
    cin>> sign2;
    //Map inputs -> outputs
    if(sign1== "Aries")                               // a long statement of IF's and ELSE to determine compatible signs.
    {
        if(sign2== "Leo" || sign2== "Sagittarius"){
            cout<<sign1<<" and "<<sign2<<" are compatible Fire signs.";
            
        }
        else
        {
            cout<<sign1<<" and "<<sign2<<" are not compatible signs.";
            
        }
        
    }
    else if(sign1== "Leo")
    {
        if(sign2== "Aries" || sign2== "Sagittarius"){
            cout<<sign1<<" and "<<sign2<<" are compatible Fire signs.";

        }
        else
        {
            cout<<sign1<<" and "<<sign2<<" are not compatible signs.";
            
        }
    }
    else if(sign1== "Sagittarius")
    {
        if(sign2== "Aries" || sign2== "Leo"){
            cout<<sign1<<" and "<<sign2<<" are compatible Fire signs.";
            
        }
        else
        {
            cout<<sign1<<" and "<<sign2<<" are not compatible signs.";
            
        }
    }
    else if(sign1== "Cancer")
    {
        if(sign2== "Scorpio" || sign2== "Pisces"){
            cout<<sign1<<" and "<<sign2<<" are compatible Water signs.";
            
        }
        else
        {
            cout<<sign1<<" and "<<sign2<<" are not compatible signs.";
            
        }
    }
    else if(sign1== "Scorpio")
    {
        if(sign2== "Cancer" || sign2== "Pisces"){
            cout<<sign1<<" and "<<sign2<<" are compatible Water signs.";
            
        }
        else
        {
            cout<<sign1<<" and "<<sign2<<" are not compatible signs.";
            
        }
    }
    else if(sign1== "Pisces")
    {
        if(sign2== "Scorpio" || sign2== "Cancer"){
            cout<<sign1<<" and "<<sign2<<" are compatible Water signs.";
            
        }
        else
        {
            cout<<sign1<<" and "<<sign2<<" are not compatible signs.";
            
        }
    }
       else if(sign1== "Capricorn")
    {
        if(sign2== "Taurus" || sign2== "Virgo"){
            cout<<sign1<<" and "<<sign2<<" are compatible Earth signs.";
            
        }
        else
        {
            cout<<sign1<<" and "<<sign2<<" are not compatible signs.";
            
        }
    }
        else if(sign1== "Taurus")
    {
        if(sign2== "Capricorn" || sign2== "Virgo"){
            cout<<sign1<<" and "<<sign2<<" are compatible Earth signs.";
            
        }
        else
        {
            cout<<sign1<<" and "<<sign2<<" are not compatible signs.";

        }
    }
        else if(sign1== "Virgo")
    {
        if(sign2== "Taurus" || sign2== "Capricorn"){
            cout<<sign1<<" and "<<sign2<<" are compatible Earth signs.";
            
        }
        else
        {
            cout<<sign1<<" and "<<sign2<<" are not compatible signs.";
            
        }
    }
        else if(sign1== "Gemini")
    {
        if(sign2== "Libra" || sign2== "Aquarius"){
            cout<<sign1<<" and "<<sign2<<" are compatible Air signs.";
            
        }
        else
        {
            cout<<sign1<<" and "<<sign2<<" are not compatible signs.";
            
        }
    }
       else if(sign1== "Libra")
    {
        if(sign2== "Gemini" || sign2== "Aquarius"){
            cout<<sign1<<" and "<<sign2<<" are compatible Air signs.";
            
        }
        else
        {
            cout<<sign1<<" and "<<sign2<<" are not compatible signs.";
            
        }
    }
       else if(sign1== "Aquarius")
    {
        if(sign2== "Libra" || sign2== "Gemini"){
            cout<<sign1<<" and "<<sign2<<" are compatible Air signs.";

        }
        else
        {
            cout<<sign1<<" and "<<sign2<<" are not compatible signs.";

        }
    }
    else
    {
        cout<<"INVALID! Please make sure you input a sign. Ex. Cancer";

    }
    cout<<endl;
    break;
}
default:cout<<"Exiting the Menu"<<endl;
        }
    }while(choose>=0 && choose<=9);

    return 0;
}