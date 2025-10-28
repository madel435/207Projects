//****************************************************************
//*  FILE NAME: Madeline Adelstone 
//*
//*   AUTHOR: Madeline Adelstone
//*
//*  DESCRIPTION: To create a fortune teller 
//*
//*     This switch test for input values between 1-10 
//*     When given a value between 1-10 then it will print out an according fortune
//*     If no value or a wrong value is found it prints out error.
//* 
//*
//****************************************************************

#include <iostream>
using namespace std;
int main()
{
//Inputing the fortune number 
   int inputnum;
    cout << "Pick a number from 1-10 to get your fortune ";
    cin >> inputnum;
switch(inputnum)
{
//Fortune 1 
    case 1:
    cout << "You will have a successful and full life";
    break;

//Fortune 2
    case 2:
    cout << "There are a lot of chickens in your future ";
    break;

//Fortune 3 
    case 3:
    cout << "Your future love will be the one to hand you a stick of gum";
    break;

//Fortune 4
    case 4:
    cout << " You will have a success career by watching out for the birds ";
    break;

//Fortune 5 
    case 5:
   cout << "Your destiny involves a lot of glitter";
    break;

//Fortune 6
    case 6:
    cout << "Fruit will fall from the sky in your future";
    break;
    
//Fortune 7
    case 7:
    cout << "You will see a rainbow this year ";
    break;    
    
//Fortune 8
    case 8:
    cout << "You will see the light at the end of tunnel ";
    break;    

//Fortune 9
    case 9:
    cout << "Bright things are in your future";
    break;

//Fortune 10
case 10:
cout << "Great things are yet to come ";
 break;

default :
    cout << "Invalid number or operator try again";
break;
    return 0;
}
}