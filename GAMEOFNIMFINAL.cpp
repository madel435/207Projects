//****************************************************************
//*  FILE NAME: NIM.cpp
//*
//*   AUTHOR: Madeline Adelstone
//*
//*  DESCRIPTION: To create a game about game chips in a bag 
//*
//*     This use if, while, and loops to play a game with the user. 
//* 
//*
//****************************************************************

#include <iostream>
#include <string>
#include <random>
using namespace std;
int main()
{
    //Assigning Variables 
    int total = 30; //Total in pile 
    int orange = 7; //Orange Number
    int black = 23; //Black Number 

    int selection ; //Selecting the Marble 
    int x; //Use to evaluate whether or not it is orange / black

    int countorange; //Iteriate how many times run in the sequence 
    int countblack;

    string name; //Initializing Name

    bool isPlayer = true; //Starts thing with player going first 

    srand(time(NULL));

    cout << "What is your name? "; //Inputting in name 
    cin >> name;

        // While Statement that runs while there is still black in the bag  
        while (black > 0 && total > 0) 
        {
           if (isPlayer) //Determining if player or not player 
            {
                cout << "* * * * * * * * * * * * * * * * * * * * * * * * * * " <<endl; //Used to break up the text 
                cout << "Alright, " << name <<" "<< "what is your number? Has to be between 1-3 and less than the amount in the pile which is : " << total <<endl; 
                cin >> selection ; // the following is for inputting in name and selection


                while (! ((selection  >= 1) && (selection  <= 3) && ( selection <= total ))) //Error code if they put in less than or bigger than 1-3
                {
                    cout << "Your selection was not between 1-3 or more than the total left. Try again. Choose a number between 1-3. " <<endl; 
                    cin >> selection ;
                }
            }  
        
            else  //Inputting in the computer choice  
            {
                selection  = rand() % 3 + 1 ;
                cout << "* * * * * * * * * * * * * * * * * * * * * * * * * *" <<endl;
                cout << "Computer chooses: " << selection <<endl; 

            }

            //Counter
            countorange = 0 ;
            countblack = 0; 

            while (selection !=0 && total > 0) 
            {
                --total; //Subtracting selection from total and printing out the amount of marbles                       
                --selection; // Subtracting from selection and printing the remaining of everything 
                
                if ( orange > 0  ) //If there is still orange run this 
                {
                    x = total / orange  ; //Determining if it is orange
                    x = rand() % x ; 
                
                    if (x==0 ) //If the previous lines determines it is orange then .... Removing orange and printing the remaining 
                
                    {
                        --orange;
                        ++countorange; 
                    }

                    else    //If it is not orange than run remove black 
                    {
                        --black; 
                        ++countblack;                               
                    }
                
                }
                    

            }

            //Prints total and how many orange and black were subtracted
                cout << "* * * * * * * * * * * * * * * * * * * * * * * * * *" <<endl;
                cout << countorange << " orange subtracted " <<endl; 
                cout << countblack << " black subtracted" <<endl; 
            
                cout << "* * * * * * * * * * * * * * * * * * * * * * * * * *"<<endl;
                cout << "Current number of orange marbles: " << orange <<endl;
                cout << "Current number of black marbles: " << black  <<endl;
                cout << "The total is : " << total <<endl;

            isPlayer = !isPlayer; // Toggles is player / not player 
        }

        if (total == 0 && black == 0 ) //When game is done prints who wins 
            {
                if (isPlayer) 
                {
                    cout << name << " won the Game" ;
                }

                else 
                {
                    cout << "The computer won the Game";
                }
            }
            
        if (total != 0 && black == 0) // Prints who loses 
            {
                if (isPlayer)
                {
                    cout << name << " lost the Game" ;
                }

                else 
                {
                    cout << "The computer lost the Game";
                }
            }
        
        
    return 0 ;
}

