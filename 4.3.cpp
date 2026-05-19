#include <iostream>
#include <fstream>

using namespace std;

int const n=500;

int NWD(int a, int b){
	int r=0;
	while(b!=0){
		r=a%b;
		a=b;
		b=r;
	}
	return a;
}

int main(int argc, char** argv) {
	ifstream we("C:/cpp/liczby.txt");
	int liczby[n];
	int i=0, j=0, l=0, dl_c=0, poczatek_najdl_c=0, dl_najdl_c=0, nwd_najdl_c=0;
	
	for(i=0; i<n; i++){
		we>>liczby[i];
	}
	
	for(i=0; i<n; i++){
		l=liczby[i];
		j=i;
		dl_c=1;
		
		if(NWD(l, liczby[j+1])>1){
			while(NWD(l, liczby[j+1])>1){
				l=NWD(l, liczby[j+1]);
				j++;
				dl_c++;
			}
		}
		
		if(dl_c>dl_najdl_c){
			poczatek_najdl_c=liczby[i];
			dl_najdl_c=dl_c;
			nwd_najdl_c=l;
		}		
	}
	
	cout<<poczatek_najdl_c<<endl<<dl_najdl_c<<endl<<nwd_najdl_c;
	
	return 0;
}
