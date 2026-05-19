#include <iostream>
#include <fstream>

using namespace std;

int const n=500; 

void potegi(int *A){
	int p=1, i=0;
	while(p<100000){
		A[i]=p;
		i++;
		p*=3;
	}
}

int main(int argc, char** argv) {
	ifstream we("C:/cpp/liczby.txt");
	int liczby[n], pot_3[11];
	int i=0, j=0, zgodne=0,  liczba_poteg=11;
	
	for(i=0; i<n; i++){
		we>>liczby[i];
	}
	
	potegi(pot_3);
	
	for(i=0; i<n; i++){
		for(j=0; j<liczba_poteg; j++){
			if(liczby[i]==pot_3[j])	zgodne++;
		}
	}	
	
	cout<<zgodne;
	
	return 0;
}
