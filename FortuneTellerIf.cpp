//****************************************************************
//*  FILE NAME: Madeline Adelstone 
//*
//*   AUTHOR: Madeline Adelstone
//*
//*  DESCRIPTION: To create a fortune teller 
//*
//*     This use if and else statements to test for input values between 1-10 
//*     When given a value between 1-10 then it will print out an according fortune
//*     If no value or a wrong value is found it prints out error.
//* 
//*
//****************************************************************

#include <iostream>
#include <string>
#include <cmath>    
#include <iomanip>  
using namespace std;
int main()
{
//Inputing numbers 
int inputnum;
cout << "Pick a number from 1-10 to get your fortune ";
cin >> inputnum;

// Inputing the value to get the fortune 
if (inputnum == 1)
 {  cout << "You will have a successful and full life"; }

 //Values 1-10
 else if (inputnum == 2)
 {  cout << "There are a lot of chickens in your future "; }

 else if (inputnum == 3)
 {  cout <<  "Your future love will be the one to hand you a stick of gum"; }

 else if (inputnum == 4)
 {  cout << " You will have a success career by watching out for the birds "; }

 else if (inputnum == 5)
 {  cout << "Your destiny involves a lot of glitter"; }

 else if (inputnum == 6)
 {  cout << "Fruit will fall from the sky in your future"; }

 else if (inputnum == 7)
 {  cout << "You will see a rainbow this year"; }

 else if (inputnum == 8)
 {  cout << "You will see the light at the end of tunnel"; }

 else if (inputnum == 9)
 {  cout << "Bright things are in your future"; }

 else if (inputnum == 10)
 {  cout << "Great things are yet to come" ; }

 //Error code 
else
 { cout <<  "Invalid number or operator try again" ; }
 return 0;
}