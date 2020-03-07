/* Printing different patterns  */

#include<iomanip>
#include<iostream>
using namespace std;

int main()
{
	for(int i=4;i>0;i--)
	{	
		cout<<setfill(' ')<<setw(i);
		cout<<"*";
		cout<<setfill('*')<<setw(4-i);
		cout<<"\0";
		cout<<setfill('*')<<setw(5-i);
		cout<<" "<<endl;
//		i--;
	}

	return 0;
}
