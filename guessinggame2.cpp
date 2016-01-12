#include <iostream>

using namespace std;

int main(){
	for(int i = 0; i <= 100; i++){
 		int guess = (rand() % 1024) + 1;
		int uguess;
	 	int count = 0;
		int low = 1;
		int sep = 0;
		int high = 1024;
		int cguess = 512;
		while(cguess != guess){

			if(cguess > guess){
				high = cguess;
				string r = "range ";
				string h = "-";
			}
			else if(cguess < guess){
				low = cguess;
			}
			else{
				break;
			}
			string g = "Guesses Count ";
			string r = "range ";
			string h = "-";
			cout << r << low << h << high << endl; 

			count++;
			cout << cguess << endl;
			cout << g << count << endl;
			cguess = (high + low) / 2;
			sep = count;
	 	}
	 	string r = "Final Guess Count ";
	 	cout << r << sep << endl;
	}
}