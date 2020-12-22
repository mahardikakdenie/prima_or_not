#include <iostream>
using namespace std;

int Reks(int Angka, int i){ 
	if (i == 1) { 
		return 1; 
	}else if (Angka % i == 0) { 
		return 1 + Reks(Angka, --i); 
	}else{ 
		return 0 + Reks(Angka, --i); 
	} 
}
  
int Fac(int Angka){ 
	if (Angka > 1) { 
		return (Reks(Angka, Angka) == 2);
	} 
	else 
		return false; 
}

int main(){
	
	int Angka;
	cout<<"Masukan Bilangan : ";
	cin>>Angka;

	if (Fac(Angka)){
		cout<<"Bilangan Prima "<<endl;
	}else if(Angka % 2 == 0){
        cout<<"Bilangan Genap"<<endl;
    }else if(Angka % 2 != 0){
        cout<<"Bilangan Ganjil"<<endl;
    }
    else {
		cout<<"Bukan Bilangan Prima"<<endl;
	}
	return 0;
} 


   