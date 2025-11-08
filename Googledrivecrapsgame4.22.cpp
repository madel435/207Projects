/*Madeline Adelstone's Code for Game of Nim Craps */

#include <iostream>  
#include <fstream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <iostream>
#include <iomanip>
using namespace std;

//declaring here 
//reminder to have beginning of second word captilized 
//initalizing globals that will be used as references, -M means main can see 

//initialize reference variables 
//for passing in references to functions 
//potential globals

//for printing wager
int MprintWager = 0;

//gets initial bank balance
int MstartbankBalance = 0; 

//sum of dice
int Msum = 0; 

//updatedbalance
int Mupdatedbalance = 0; 

//how many times dicerollrun
int Mdicerollrun = 0;

//for add/sub wager
bool addsub;

int initialbankbalance;

//defining functions 
//"initinal constructors"
int DiceRoll();
int dicerollrunreturn();

//prints rules 
void crapsrules();

//bank balance functions 
//initial is the starting one 
//updatedbank balance is for 
int initialbankbalance();
int updatedbankbalance(int& wager,bool& addsub);
int wageredamount();

//prints the balance 
void printBalance();

//for the background chatter
void displayChatter();

//diceroll 
int DiceRoll();
int dicerollrunreturn();

//prints the craps rules and the background noise 
string chatter();
string crapsrules();

//gets the wager
int wageredamount();

//sees if you can wager that amount
string wageredtf(int& wager);

//prints the results
void gameresultsprint();


//gets initial bank balance  
int initialbankbalance();

//updates the balance
int updatedbankbalance();

//gets the original wager 
int intialwager();

//prints the changed balance
string printupdatedbankbalance(int& Mupdatedbankbalance);

//figures out the addition and subtraction 
//need the _t and need the enum and need those specific brackets 
// enum to represent game result
enum wlc_t { win, lose, point };
enum addsub { add, sub };

//main  
int main (int& dicerollrunreturn) 
{  
    cout << fixed << setprecision(2);

    crapsrules();
    initialbankbalance ();
    wageredamount();
    wageredtf ();

    if (dicerollrunreturn == 0)
    {
    DiceRoll();

    void gameresults (int& dicerollrunreturn)
    {
    printupdatedbankbalance();
    dicerollrunreturn++ ;
    }

    else (point)
    {
        DiceRoll();
        void gameresults (int& dicerollrunreturn);
        printupdatedbankbalance();
        dicerollrunreturn++ ;
    }

    
}

//start defining here
double initialbankbalance()
{  
    double startbankBalance;
    double bankbalance;

    cout << "What is the initial bank balance?";
    cin >> startbankBalance;

    cout << "The initial bank balance is :" << startbankBalance; 

    return startbankBalance; 
}


string printupdatedbankbalance(int& Mupdatedbankbalance,int& startbankBalance,int& wageramount)
{
      if (add) 
      {
        Mupdatedbankbalance = startbankBalance - wageramount;
      } 
    else if (sub) 
    {
        Mupdatedbankbalance = startbankBalance + wageramount;
    }
    return Mupdatedbankbalance;
}

int wageredamount()
{
    int wageramount;  
  
    cout << "What do you want to wager?";
    cin >> wageramount;

    return wageramount;
}

string crapsrules()
{
    " A player rolls two dice. Each die has six faces. These faces contain 1, 2, 3, 4, 5, and
    6 spots. After the dice have come to rest, the sum of the spots on the two upward
    faces is calculated. If the sum is 7 or 11 on the first throw, the player wins. If the
    sum is 2, 3, or 12 on the first throw (called crap), the player loses (i.e. the house
    wins). If the sum is 4, 5, 6, 8, 9, or 10 on the first throw, then the sum becomes the
    player's point. To win, you must continue rolling the dice until you  make your
    point.The player loses by rolling a 7 before making the point " 

}

bool wageredtf(int& wageramount, int&updatedbankbalance)
{
    bool wagertf;

    if (wageramount < updatedbankbalance && wageramount > 0 )
    {
        wagertf = true;
    }

    else if (wageramount > updatedbankbalance || wageramount < 0)
    {
        wagertf = false;
    }

    return wagertf; 
}

int dicerollrunreturn(int& dicerollrunreturn) {
    return dicerollrunreturn ;
}

string chatter() {
    int run = dicerollrunreturn();

    if (run == 1)
        return "Good start";
    else if (run == 4)
        return "You almost got it, keep going!";
    else if (run == 3)
        return "What a loser.";
    else
        return "KEEP GOING, KEEP GOING!";
}

string crapsrules() 
{
    cout << 
        "A player rolls two dice. If the sum is 7 or 11 on the first throw, the player wins."
        "If the sum is 2, 3, or 12, the player loses."
        "If the sum is 4, 5, 6, 8, 9, or 10, that becomes the player's point."
        "To win, the player must roll the point again before rolling a 7.";
}

int initialbankbalance (int& startbankBalance) 
{
    cout << "What is the initial Bank Balance? ";
    cin >> startbankBalance;
    cout << "Your initial Bank Balance is: " << startbankBalance << endl;
    return startbankBalance;
}

int updatedbankbalance(int wager, bool& addsub, int& initalbankbalance) 
{
    if (add) {
        Mupdatedbalance = initialbankbalance + wager;
    } 
    else {
        Mupdatedbalance = initialbankbalance - wager;
    }
}

int wageredamount() {
    int wager;
    cout << "What do you want to wager? ";
    cin >> wager;
    return wager;
}

bool wageredtf (int& wager,int& firstbankbalance) 
{
    return (wager > 0 && wager <= firstbankbalance);
}

wlc_t theresults(int& sum,int& wlc_t,int& dicerollrunreturn) 
{
    if ((sum == 7 || sum == 11) && (dicerollrunreturn== 0)) 
    {
        dicerollrunreturn = 0;
        win;
    } 
    else if ((sum == 2 || sum == 3 || sum == 12) && (dicerollrunreturn == 0)) 
    {
        dicerollrunreturn = 0;
        lose;
    } 
    else if ((sum >= 4 && sum <= 10) && (dicerollrunreturn == 0)) 
    {
        point;
    }
    
}

void initialbankbalance(int& MstartbankBalance) 
{
    if (int)
    {
    cout << "What is your starting Balance? ";
    cin >> MstartbankBalance;  
    cout << MstartbankBalance; 
    }
    else
    {"Error in initialbankbalance function" }
}

int updatedbankbalance(int& MstartbankBalance, bool& Madd, bool& Msub , int& Mwager, int& dicerollrunreturn )
{
    int Mupdatedbalance = 0 ;
    
    if (dicerollrunreturn == 0)
    {Mupdatedbalance = MstartbankBalance;}

    else if (add)
    {
        Mupdatedbalance = MstartbankBalance + Mwager;
          
    }

    else if (sub)
    {
        Mupdatedbalance = MstartbankBalance - Mwager;
          
    }

    else 
    {
    Mupdatedbalance = 4;
    }

    return Mupdatedbalance;

}

//prints balance
void printBalance(int& Mupdatedbalance) 
{
    cout << "Current Bank Balance: " << Mupdatedbalance << endl;
}

string chatter(int& dicerollrun)
    {
        string crowdnoise;

        if (dicerollrun == 1)
        {
        crowdnoise = "Good start";
        }

        else if(dicerollrun == 4)
        {
        crowdnoise =  "You almost got it keep going ";
        }
        else if (dicerollrun == 3)
        {
        crowdnoise = "What a loser ";
        }
        else 
        {
        crowdnoise = " KEEP GOING, KEEP GOING";
        }

        return crowdnoise;
    }

int DiceRoll(int Msum,int& dicerollrunreturn) 
{   srand(time(0));

    int dice1 = rand() % 6 + 1;  
    int dice2 = rand() % 6 + 1;  
    int Msum = dice1 + dice2; 
    dicerollrunreturn++;
    return Msum;  
}
 
int dicerollrunreturn(int dicerollrun)
{
    dicerollrun++;
    return dicerollrun;
}

string chatter(int& dicerollrun)
{
    string crowdnoise;

    if (dicerollrun == 1)
    {
    crowdnoise = "Good start";
    }

    else if(dicerollrun == 4)
    {
    crowdnoise =  "You almost got it keep going ";
    }
    else if (dicerollrun == 3)
    {
    crowdnoise = "What a loser ";
    }
    else 
    {
    crowdnoise = " KEEP GOING, KEEP GOING";
    }
    return crowdnoise;
}

void gameresults (int& dicerollrun)
{
    
    int result = wlc_t(Msum);
    
    switch (result) 
    {
        if (win) 
        {  
            cout << "Round: " << Mdicerollrun << "Dice sum :" << Msum << " Win!" << endl;
            dicerollrun = 0;  
        }  
        else if (lose) 
        {  
            cout << "Round: " << Mdicerollrun << "Dice sum :" << Msum << " Lose!" << endl;
            dicerollrun = 0;  
        }  

        else if (point) 
        {  
            cout << "Round: " << Mdicerollrun << "Dice sum :" << Mupdatedsum << endl;
        }  
    }
}
