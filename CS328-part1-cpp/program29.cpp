#include<iostream>
using namespace std;

void inputmatrix(int mat[2][2]);
void plusmatrix(int mat1[2][2], int mat2[2][2], int mat3[2][2]);
void outputmatrix(int mat[2][2]);

int main () {
	int matrix1[2][2], matrix2[2][2], output[2][2];
	cout<<"input matrix 1: \n";
	inputmatrix(matrix1);
	
	cout<<"input matrix 2: \n";
	inputmatrix(matrix2);
	
	plusmatrix(matrix1,matrix2, output);
	cout<<"ouput:\n";
	
	outputmatrix(output);
	
}

void inputmatrix(int mat[2][2]) {
	int x, y;
	for(x = 0; x < 2; x++) {
		for(y = 0; y < 2; y++) {
			cout<<"X"<<x<<"Y"<<y<<": ";
			cin>>mat[x][y];
		}
	}
}

void plusmatrix(int mat1[2][2], int mat2[2][2], int mat3[2][2]) {
	int x,y;
	for(x = 0; x < 2; x++)
	for(y = 0; y < 2; y++)
	mat3[x][y] = mat1[x][y] + mat2[x][y];
}

void outputmatrix(int mat[2][2]){
	int x,y;
	for(x = 0; x < 2; x++) {
		for (y = 0; y < 2; y++)
		cout<<mat[x][y]<<" ";
		
		cout<<"\n";
	}
}
