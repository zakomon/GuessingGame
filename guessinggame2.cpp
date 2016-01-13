#include <iostream>

using namespace std;



int binary_search(int guess,int high,int low,int count){
	int cguess = (high + low) / 2;
	count++;
	for(int i = 0; i <= 100; i++){
		if(cguess != guess){

			if(cguess > guess){
				return binary_search(guess,cguess,low,count);
			}
			else if(cguess < guess){
				return binary_search(guess,high,cguess,count);
			}
			

		}
		return count;
	}
}


int main(){
	srand(time(NULL));

 	int gues = (rand() % 1024) + 1;
 	int x = binary_search(gues,1024,1,0);
 	cout << gues << endl;
	cout << x << endl;
}
