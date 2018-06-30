#include <iostream>
using namespace std;
main () {
	int a[20],i,b = 0,j;
	float n;
	for (i = 0; i < 20; i ++)
	{
		cout << "nhap 20 so trong mang :" << endl;
		cin >> a[i];
	}
	cout << "gia tri da nhap vao la :" << endl;
	for (i = 0; i < 20; i++)
	{
		cout << a[i] << endl;
	}
	cout << "cac gia tri da nhap vao la ( nguoc ) :";
	for (i=20; i >= 0; i --)
	{
		cout << a[i] << endl;
	}
	cout << "cac phan tu co gia tri chan la :" << endl;
	for (i=0; i < 20; i ++)
	{
		if ( a[i] % 2 == 0)
		{
			cout << a[i] << endl;
		}
	}
	cout << "cac phan tu co gia tri le la :" << endl;
	for (i=0; i < 20; i ++)
	{
		if ( a[i] % 2 != 0)
		{
			cout << a[i] << endl;
		}
	}
	
	cout << "cac so nguyen to la : " << endl;

	cout << "cac so nguyen to la :" << endl;
		for (i=0; i < 20; i ++)
	{
		if ( a[i] % 1 == 0 && a[i] % a[i] == 0 && a[i] % 2 != 0)
		{
			cout << a [i] << endl;
		}
	}
	

	for (i = 0; i < 5; i ++)
	{
		b += a[i];
	}
		cout << "tong so trong mang la :" << b << endl; 
}
