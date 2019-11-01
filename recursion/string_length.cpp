#include <iostream>
using namespace std;

int length(char str[]){
	if(str[0] == '\0'){
		return 0;
	}

	int smallOutput = length(str + 1);
	return smallOutput + 1;
}

int main(){
	char str[100];
	cin >> str;

	cout << length(str) <<  endl;
}
