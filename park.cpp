#include <iostream>

using namespace std;

int main() {
    int giris, cikis, saat, girisUcret = 50 , sUcret = 10;

    cout << "Otoparka hoþ geldiniz! Giriþ ve çýkýþ saatinizi girin (0-24 arasý): ";
    cin >> giris >> cikis;

    

    saat = cikis - giris;

    if (saat > 0 && saat <= 2) {
        sUcret = girisUcret +sUcret * saat;

    
	} else if (saat > 2 && saat <= 3) {
        sUcret = girisUcret +sUcret * saat;

    
	} else if (saat > 3 && saat <= 5) {
        sUcret = girisUcret +sUcret * saat;
    
	
	} else if (saat > 5 && saat <= 7) {
        sUcret = girisUcret +sUcret * saat;
    
    
	} else if (saat > 7 && saat <= 9) {
        sUcret = girisUcret + sUcret * saat;


    } else if (saat > 9 && saat <= 24) {
        sUcret = girisUcret + sUcret * saat;


    } else {
    	
        cout << "Geçersiz saat aralýðý" << endl;
    }

    cout << "Park ücreti " <<sUcret<< " TL" << endl;

    return 0;
}
