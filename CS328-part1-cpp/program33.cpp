#include<iostream>
#include<cstring>
using namespace std;

int main () {
	char string[] = "this is a sentence with 7 tokens";
	char *tokenPtr;
	
	cout<<"the string to be tokenized is: \n"<<string
	<<"\n\nthe tokens are:\n";
	
	tokenPtr = strtok(string, " ");
	
	while(tokenPtr != NULL) {
		cout<<tokenPtr<<'\n';
		tokenPtr = strtok(NULL, " ");
	}
	return 0;
}
