#include <iostream>
using namespace std;
main() {
	int a;
	cout << "nhap thang :" << endl;
	cin >> a;
	if (a>=1 && a<=3)
	{
		cout << "Quy 1";
	}
	else if (a>=4 && a<=6)
	{
		cout << "Quy 2";
	}
	else if (a>=7 && a<=9)
	{
		cout << "quy 3";
	}
	else if (a>=10 && a<=12)
	{
		cout << "quy 4";
	}
	else 
	{
		cout << "khong ton tai thang";
	}
	
}
