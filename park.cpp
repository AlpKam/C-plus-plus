#include <iostream>

using namespace std;

int main() {
    int giris, cikis, saat, girisUcret = 50 , sUcret = 10;

    cout << "Otoparka ho� geldiniz! Giri� ve ��k�� saatinizi girin (0-24 aras�): ";
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
    	
        cout << "Ge�ersiz saat aral���" << endl;
    }

    cout << "Park �creti " <<sUcret<< " TL" << endl;

    return 0;
}
