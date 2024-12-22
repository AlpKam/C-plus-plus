#include <iostream>
#include <cstdlib> 

using namespace std;


int main() {
	
	int tahmin,pctahmin,hak=5;
	
	pctahmin = rand() % 15 + 1;


	
	cout<<"sayi tahmin oyununa hos geldiniz 1-15 arasi sayi giriniz"<<endl;
	
	
	while (hak>0){
	 	cin>>tahmin;

		hak--;
		
		if (pctahmin == tahmin){
			cout<<"sayi dogru tahmin ettiniz  "<<tahmin<<endl;
			break;
		}
		else if (pctahmin != tahmin){
			cout<<"sayi dogru tahmin edemediniz tekrar deneyin kalan hak "<<hak<<endl;
		}
		
		
		if (hak == 0){
			cout<<"hakkınız bitti"<<endl;
		}
		
	}
	
	
	

	
	
	return 0;
}
