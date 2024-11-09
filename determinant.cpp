// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;



int main(){
	int m1,m2,m3,x1,y1,z1,x2,y2,z2,x3,y3,z3,pislem,nislem;
	
	cout<<("1. matrisi giriniz ve sonuc\n");
	cin>>x1>>y1>>z1>>m1;
	
    cout<<("1. matrisi giriniz ve sonuc\n");
	cin>>x2>>y2>>z2>>m2;
	
	cout<<("1. matrisi giriniz ve sonuc\n");
	cin>>x3>>y3>>z3>>m3;
	
	
	cout<<("A matrisi ")<<endl;
	cout<<x1<<y1<<z1<<m1<<endl;
	cout<<x2<<y2<<z2<<m2<<endl;
	cout<<x3<<y3<<z3<<m3<<endl;
	
	cout<<("A-1 ters matrisi")<<endl;
	cout<<x1<<x2<<x3<<endl;
	cout<<y1<<y2<<y3<<endl;
	cout<<z1<<z2<<z3<<endl;
	
	pislem = (x1 *y2 *z3 + x2 * y3 * z1 +x3 *y1 *z2);
    nislem = (z1 *y2 *x3 + z2 *y3 *x1 + z3 *y1 *x2 );
    
    cout<<("determinant sonuc",pislem - nislem);

    
}
