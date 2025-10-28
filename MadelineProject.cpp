//****************************************************************

//*  FILE NAME: 
 //Madeline Project
//* AUTHOR: Madeline Adelstone 
//*  DESCRIPTION:
// To help children with mixed fractions  
//*

//* 

//*

//****************************************************************
#include <iostream>
using namespace std;
int main()
{
    int numNumber;
    int denoNumber;
    int wholeNum;
    int remainder;
    

    //Inputing Values 
    cout << "Enter numerator number: ";
    cin >> numNumber;

   cout << "Enter denominator number: "; 
   cin >> denoNumber;

    //Checking to see if the numbers are in the right range 
    
    if (( denoNumber >= 1 ) and (numNumber >= 1 ) && (numNumber < 2147483647) && (denoNumber < 2147483647))  
    {
    
        //Finding the whole numbers 
        //Getting the remainders 
        if (numNumber >= denoNumber)
        {
        wholeNum = numNumber / denoNumber;  
        remainder = numNumber % denoNumber;

        cout << wholeNum << " " << remainder << "/" << denoNumber << endl;

        }
        else
        {
        cout << " ";
        cout << numNumber << "/" << denoNumber << endl;
        }
    }
    else
        cout << "Your Denominator and/ or your Numerator should be between 1-2,147,483,647";
    return 0; 
}
\\#include <iostream>
#include <string>
using namespace std;

int main() 
{
    // Declare the string for phone number 
    string number;

    cin >> number ;
    string areaCode = number.substr(0,3);

   // cout << areaCode << endl;
    string prefix = number.substr(3,3);
    
    string postfix = number.substr(6,4);
    cout << "(" << areaCode << ")" << prefix << " " << postfix << endl;
    return 0;
}
 