#include <iostream>
#include <fstream>

using namespace std;

int const n=500; 

int silnia(int p){
	if(p==0) return 1;
	int w=p;
	p--;
	
	while(p>0){
		w*=p;
		p--;
	}
	
	return w;
}

int main(int argc, char** argv) {
	ifstream we("C:/cpp/liczby.txt");
	int liczby[n];
	int i=0, l=0, cyfra=0, sum_silnia=0;
	
	for(i=0; i<n; i++){
		we>>liczby[i];
	}
	
	for(i=0; i<n; i++){
		sum_silnia=0;
		l=liczby[i];
		while(l>0){
			cyfra=l%10;
			l/=10;
			sum_silnia+=silnia(cyfra);
		}
		
		if(sum_silnia==liczby[i]) cout<<liczby[i]<<endl;
	}
	
	return 0;
}
