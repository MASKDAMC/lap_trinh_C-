#include <iostream>
using namespace std;
main() {
	int a,b,c;
	cout << "tim so lon nhat" << endl;
	cout << "nhap a" << endl;
	cin >> a;
	cout << "nhap b" << endl;
	cin >> b;
	cout << "nhap c" << endl;
	cin >> c;
	if (a>b && a>c)
	{
		cout << "a la so lon nhat";
	}
	else if (b>a && b>c)
	{
		cout << "b la so lon nhat";
	}
	else if (c>a && c>b)
	{
		cout << "c la so lon nhat";
	}
}
