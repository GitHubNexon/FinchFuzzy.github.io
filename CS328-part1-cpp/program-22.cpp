#include <iostream>

using namespace std;

void add();
void sub();
void mul();
void div();
void mod();

int num1, num2;
float ans;

int main (){
	int ch;
	
	do {
		cout<<"\n\t\t<<<<< Program of operations >>>";
		cout<<"\n\n1.\tAddition\n2.\tSubtraction\n3.\tMultiplication\n4.\tDivision\n5.\tModulus\n6.\tExit\n";
		cout<<"\nEnter your choice: ";
		cin>>ch;
		
		switch(ch) {
			case 1:
				add();
				break;
			case 2:
				sub();
				break;
			case 3:
				mul();
				break;
			case 4:
				div();
				break;
			case 5:
				mod();
				break;
			case 6:
				return 0;
			default:
				cout<<"\n\n Invalid input. Please try Again. \n";
		}
	}while(ch !=6);
}

void add() {
	cout<<"\nEnter two numbers to add: ";
	cin>>num1>>num2;
	ans = num1 + num2;
	cout<<"\nSum is "<<ans<<"\n";
}

void sub() {
	cout<<"\nEnter two numbers to subtract: ";
	cin>>num1>>num2;
	ans = num1 + num2;
	cout<<"\nDifference is "<<ans<<"\n";
}

void mul() {
	cout<<"\nEnter two numbers to multiply: ";
	cin>>num1>>num2;
	ans = num1 * num2;
	cout<<"\nProduct is "<<ans<<"\n";
}

void div() {
	cout<<"\nEnter two numbers to divide: ";
	cin>>num1>>num2;
	ans = (float) num1 / num2;
	cout<<"\nQuotient is "<<ans<<"\n";
}
void mod() {

	cout<<"\nEnter two numbers for modulus: ";
	cin>>num1>>num2;
	ans = num1 % num2;
	cout<<"\nRemainder is "<<ans<<"\n";
}


