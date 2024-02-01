#include<iostream>
#include<cstring>
using namespace std;

int main () {
	char string1[] = "abcdefghijklmnopqrstuvwxyz";
	char string2[] = "four";
	char string3[] = "boston";
	
	cout<<"the lenght of "<<string1
	<<"is "<<strlen(string1)
	<<"\nThe lenght of "<<string2
	<<"is "<<strlen(string2)
	<<"\n the lenght of "<<string3
	<<" is "<<strlen(string3)<<endl;
	
	return 0;
}
