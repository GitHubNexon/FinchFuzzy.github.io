#include <iostream>
using namespace std;

int main() {
	
	int marks, sum = 0, i = 0;
	float ave;
	
	while(true) {
		cout<<"Enter grade: ";
		cin>>marks;
		
		if(marks < 0 || marks > 100)
			break;
		
		sum = sum + marks;
		i++;
		
	}
	
		cout<<"Value of counter: "<<i<<"\nTotal sum is "<<sum<<"\n";
		ave = (float)sum / i;
		cout<<"Average is "<<ave;
}
	
