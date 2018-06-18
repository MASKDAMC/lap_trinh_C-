#include<iostream>
using namespace std;
main()	
{
	int a,i;
	float b;
	cout<<"nhap n: "<<endl;
	cin>>a;
	for (i=1;i<=a;i++)
	{
		b+= ( float ) 1/i;
	}
	cout<<"tong S = "<< b ;	
}
