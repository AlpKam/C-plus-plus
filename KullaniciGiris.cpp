/*

#include <iostream>
#include <string>

using namespace std;

	
	

int main(){

	int giris();
	char[50]kullanici="alp",gkul;
	int sifre=123,gsif;
	
	
	if (gkul != kullanici && gsif != sifre){
	cout<<" Aubanka giriþ yapamadýnýz lütfen tekrar deneyiniz: "<<giris();
	}else if (gkul != kullanici && gsif == sifre or gkul == kullanici && gsif != sifre){
	cout<<" Aubanka giriþ yapamadýnýz lütfen tekrar deneyiniz: "<<giris();
	}else{
	cout<<" Aubanka giriþ yaptýnýz lütfen iþleminizi giriniz: "<<giris();
	}
	
}	
	

	
int giris(){
	char[50]gkul,gsif,kullanici="alp";
	int sifre=123,gsif;

	cout<<" Aubanka hosgeldiniz kullanici adi giriniz:";
	cin>>gkul;
	cout<<" Aubanka hosgeldiniz sifrenizi giriniz:";
	cin>>gsif;
}
	
	
	
*/
#include <iostream>
#include <string>

using namespace std;

int giris();

int main(){
    string kullanici = "alp",gkul;
    int sifre =123, gsif;

   if (gkul == kullanici && gsif == sifre) {
        return 1;
    } else {
        return 0;
    }else {
        cout<<"Aubanka giriþ yapamadýnýz lütfen tekrar deneyiniz: ";
        main();
    }
}

int giris(){
    string gkul,kullanici;
    int sifre =123,gsif;

    cout<<"Aubanka hosgeldiniz kullanici adi giriniz:";
    cin>>gkul;
    cout<<"Aubanka hosgeldiniz sifrenizi giriniz:";
    cin>>gsif;

    if (gkul == kullanici && gsif == sifre) {
        return 1;
    } else {
        return 0;
    }
}




























