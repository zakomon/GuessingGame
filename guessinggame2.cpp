#include <iostream>

using namespace std;



int binary_search(int guess,int high,int low,int count){
	int cguess = (high + low) / 2;
	count++;
	if(cguess != guess){

		if(cguess > guess){
			return binary_search(guess,cguess - 1,low,count);
		}
		else if(cguess < guess){
			return binary_search(guess,high,cguess + 1,count);
		}
			

	}
	return count;
}


int main(){
	for(int i = 0; i <= 100; i++){

	 	int gues = (rand() % 1024) + 1;
	 	int x = binary_search(gues,1024,1,0);
	 	cout << gues << endl;

		cout << x << endl;
	}
}
