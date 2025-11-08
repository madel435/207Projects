#include <iostream>
#include <string>

using namespace std;

/* Put the enum and struct type defitions here
For non number values creating new class system 
*/
enum CardSuits_t {CLUBS,HEARTS,DIAMONDS};

//struct is defintion
struct CardType { //defines new type of data 
	int rank;
	CardSuits_t suit;
};

void outputsSuit (CardType Card) // Function for outputting suits
{
	switch(Card.suit) {
		case CLUBS: 
			cout << 'C';
	  		cout << endl;
	  		break;
		case HEARTS: 
			cout << 'H';
	  		cout << endl;
	  		break;
		case DIAMONDS:
			cout << 'D';
	  		cout << endl;
	  		break;
	}
}


void outputsRank (CardType Card)
{
   switch(Card.rank) {
	case 1:
		cout << 'A';
	  	break;
	case 2:
	 	cout << 2 ;
	  	break;
	case 3:
		cout << 3;
		break ;
	case 4:
		cout << 4;
		break; 
      	case 5:
 		cout << 5;
		break;
	case 6:
		cout << 6;
		break;
	case 7:
		cout << 7;
		break;
	case 8:
	 	cout << 8;
		break;
	case 9:
		cout << 9;
		break;
	case 10:
		cout << 10;
		break;
	case 11:
		cout << 'J';
		break;
	case 12:
		cout << 'Q';
		break;
	case 13:
		cout << 'K';
		break;
	default:
 		cout << "[Invalid Rank]";
		break;
   }
}

void PrintCard(CardType card) { //sending the information
	outputsRank(card);
	outputsSuit(card);
	//cout << "This function is not done" << endl;

// Implement the print routine here
}


int main() {

    CardType myCard1, myCard2, myCard3, myCard4;

    myCard1.rank = 2;
    myCard1.suit = HEARTS;
    PrintCard(myCard1);

    myCard2.rank = 11;
    myCard2.suit = CLUBS;
    PrintCard(myCard2);

    myCard3.rank = 1;
    myCard3.suit = DIAMONDS;
    PrintCard(myCard3);

    myCard4.rank = 17;
    myCard4.suit = DIAMONDS;
    PrintCard(myCard4);

    // Everything is okay
    return 0;
}