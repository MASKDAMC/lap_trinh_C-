#include <iostream>
using namespace std;
main(){
	int a,b;
	cout << "giai phuong trinh bac 1" << endl;
	cout << "nhap hai so nguyen a va b" << endl;
	cin >> a >> b;
	if(a!=0&&b!=0)
	{
		cout << "phuong trinh co nghiem: x =" << (float)-b/a;
	}
	else if (a==0&&b!=0)
	{
		cout << "phuong trinh vo nghiem";
	}
	else 
	{ 
		cout << "phuong trinh co vo so nghiem ";
	}
}
