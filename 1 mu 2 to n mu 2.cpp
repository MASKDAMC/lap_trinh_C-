#include <iostream>
using namespace std;
main()
{
	int a,i,b = 0;
	cout<<"nhap n: "<<endl;
	cin>>a;
	for (i=1;i<=a;i++)
	{
	 b+= ( i*i );
	}
	cout<<"tong S = "<< b;
}
