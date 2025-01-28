#include<iostream>
using namespace std;

const int N = 5;

void inputMatrix(double [][N]);

void findLocalMax(const double [][N], bool [][N]);

void showMatrix(const bool [][N]);

int main(){
	double A[N][N]; 
	bool B[N][N]; 
	cout << "Input the matrix.....\n";
	inputMatrix(A);
	findLocalMax(A,B);
	cout << "Result is \n";
	showMatrix(B);
	return 0;
}

//Do not modify source code above this line 

void inputMatrix(double A[][N]) {
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < N; ++j) {
			cin >> A[i][j];
		}
		cout << "Row " << i + 1 << ": ";
	}
}

void showMatrix(const bool A[][N]) {
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < N; ++j) {
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
}

void findLocalMax(const double A[][N], bool B[][N] ) {
	for (int i = 1; i <= N - 2;++i) {
		for (int j = 1; j <= N - 2; ++j) {
			if (A[i][j] >= A[i-1][j] && A[i][j] >= A[i][j-1] && A[i][j] >= A[i][j+1] && A[i][j] >= A[i+1][j]) {B[i][j] = true;}
			else {B[i][j] = false;}
		}
	}
}