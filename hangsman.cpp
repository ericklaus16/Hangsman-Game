#include <iostream>
#include <string>

using namespace std;

int main(){
	
	string word, codified;
	bool won = false;
	char tried;
	int chances = 6, correct = 0, letters;
	
	
	cout << "Type the word that your friend must guess! " << endl;
	cin >> word;
	letters = word.size();
	
	for(int i = 0; i < letters; i++){
		codified[i] = '_';
	}
	
	system("cls");
	

	
	while(chances > 0 && correct < letters){
		won = false;
		cout << "Remaining chances: " << chances << endl;
		cout << "Word: ";
		for(int i = 0; i < letters; i++){
			cout << codified[i];
		}
		cout << endl << "Type a letter: ";
		cin >> tried;
		for(int i = 0; i < letters; i++){
			if(tried == word[i]){
				codified[i] = word[i];
				correct += 1;
				won = true;	
			}		
		}
			
		if(won == false){
			chances -= 1;
		}
		system("cls");
		
	}
		if(correct >= letters && chances > 0){
			cout << "Victory!";	
		} else if(chances == 0){
			cout << "No remaining chances!"; 
		}
		return 0;	
	}
	
			
