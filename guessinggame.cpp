#include <iostream>

using namespace std;

int main(){
	srand(time(NULL));
	int guess = (rand() % 1025);
	int uguess;
	cin >> uguess;
	int count = 0;
	while(uguess != guess){
		if(uguess > guess){
			cout << ">" << endl;
		}
		else if(uguess < guess){
			cout << "<" << endl;
		}
		else{
			cout << "=" << endl;
			break;
		}
		count++;
		cin >> uguess;
	}
	cout << count;
}