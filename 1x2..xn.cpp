#include <iostream>
using namespace std;
main()
{
	int i,a,b = 1;
	cout<<"nhap n: "<<endl;
	cin>>a;
	for (i=1;i<=a;i++)
	{
	 b *= i;
	}
	cout<<"P = "<< b;
}
