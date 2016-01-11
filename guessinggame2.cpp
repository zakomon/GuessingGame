#include <iostream>

using namespace std;

int main(){
	for(int i = 0; i <= 100; i++){
 		int guess = (rand() % 1025);
		int uguess;
	 	int count = 0;
		int low = 1;
		int high = 1024;

		int cguess = (low + high) / 2;
		while(cguess != guess){

			if(cguess > guess){
				 high = cguess;
			}
			else if(cguess < guess){
				 low = cguess;
			}
			else{
				break;
			}
			cguess = (high + low) / 2;
			count++;
	 	}
	 	cout << guess << endl;
		cout << count << endl;
	}
}