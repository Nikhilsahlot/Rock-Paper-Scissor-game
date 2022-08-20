#include <iostream>
#include <stdlib.h> 
using namespace std;
//template for c++



int main(){
	srand(time(NULL));
	int randomNumber = rand() % 3 + 1;
	string answer;
	int userAnswer;
	
	for(;;){
		cin.clear();
		cout << "\nEnter r for rock, Enter p for paper p, or Enter s for scissors? ";
		getline(cin, answer);
		
		if(!answer.compare("s") || !answer.compare("s")){
			userAnswer = 1;
			break;
		}
		
		if(!answer.compare("r") || !answer.compare("r")){
			userAnswer = 2;
			break;
		}
		
		if(!answer.compare("p") || !answer.compare("p")){
			userAnswer = 3;
			break;
		}
		
		else{
			cout << "\nPlease enter a valid answer.\n";
		}
		
	} // infinite for loop to get user to enter valid answer
	
	if(randomNumber == 1){
		if(userAnswer == 1){
			cout << "\nIt's a tie! Computer chose scissors!\n ";
		}
		
		else if(userAnswer == 2){
			cout << "\nYou WIN! The computer chose scissors!\n";
		}
		
		else if(userAnswer == 3){
			cout << "\nYou LOSE! The computer chose scissors!\n";
		}
		
		
	} // result if computer chooses s
	
	else if(randomNumber == 2){
		
		if(userAnswer == 1){
			cout << "\nYou LOSE! The computer chose rock!\n";
		}
		
		else if(userAnswer == 2){
			cout << "\nIt's a tie! The computer also chose rock!\n";
		}
		
		else if(userAnswer == 3){
			cout << "\nYou WIN! The computer chose rock!\n";
		}
	
	} // result if computer chooses r
	
	else if(randomNumber == 3){
		
		if(userAnswer == 1){
			cout << "\nYou WIN! The computer chose paper!\n";
		}
		
		else if(userAnswer == 2){
			cout << "\nYou LOSE! The computer chose paper!\n";
		}
		
		else if(userAnswer == 3){
			cout << "\nIt's a TIE! The computer chose paper!\n";
		}
	} // result if computer chooses p

	
}