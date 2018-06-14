#include <iostream>
using namespace std;
main() {
	int a,b;
	cout << "nhap thang :" << endl;
	cin >> a;
	cout << "nhap nam :" << endl;
	cin >> b;
	if (a== 1 || a== 3 || a== 5 || a== 7 || a== 8 || a== 10 || a== 12)
	{
		cout << "thang nay co 31 ngay";
	}
	else if (a>12 || a<=0)
	{
		cout << "thang khong ton tai";
	}
	else if (a==2 && b%4==0 || b%100==0 && b%400==0)
	{
		cout << "thang nay co 29 ngay";
	}
	else if (a==2)
	{
		cout << "thang nay co 28 ngay";
	}
	else
	{
		cout << "thang nay co 30 ngay";
	}
}
