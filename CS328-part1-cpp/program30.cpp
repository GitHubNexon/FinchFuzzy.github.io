#include<iostream>
#include<cstring>
using namespace std;

int main() {
	char x[] = "Happy Birthday to You";
	char y[25], z[15];
	
	cout<<"the strring in array x is: "<<x
	<<"\nThe string in array y is: "<<strcpy(y, x)
	<<'\n';
	
	strncpy(z, x, 14); // does not copy null character
	z[14] = '\0';
	
	
	
	cout<<"the string in array z is: "<<z<<endl;
	
	return 0;
}


