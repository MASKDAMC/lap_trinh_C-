#include <iostream>
using namespace std;
main(){
	float a,b,c,z;
	string name;
	cout << "nhap ten" << endl;
	getline ( cin, name );
	cout << "nhap diem lan`luot. Toan', Ly', Hoa':" << endl;
	cin >> a >> b >> c;
	z = (a+b+c)/3;
	if (z >= 8)
	{
		cout << "xep' loai. xuat' sac'";
	}
	else if ( z >= 7 && z < 8 )
	{
		cout << "xep' loai. gioi?";
	}
	else if ( z >= 6 && z < 7 )
	{
		cout << "xep'loai. kha'";
	}
	else if ( z >= 5 && z < 6)
	{
		cout << "xep'loai. trung binh";
	}
	else 
	{
		cout << "xep'loai. yeu'";
	}
	cout << "tong diem la :" << z << endl;
	cout << "name";
	
}
