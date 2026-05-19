#include <iostream>

using namespace std;

int parzysta(int *A, int n){
	int sr=n/2-1, a=n;
		
	while(a>1){
		a/=2;
		if(A[sr]%2==0){
			if(A[sr-1]%2==1)
				return A[sr];
			else
				sr=sr/2;
		}	
		else{
			sr=sr+sr/2;
		}
			
	}
	return A[sr];
}

int main(int argc, char** argv) {
	int n=10;
	int A[n]={5, 99, 3, 7, 111, 13, 4, 24, 4, 8};
	cout<<parzysta(A, n);
	
	return 0;
}
