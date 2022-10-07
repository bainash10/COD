#include<iostream>
#include<conio.h>
using namespace std;
int main()
{ 
	int a[8],b[8],c[8],carry[8],sum[8];
		for(int i=0;i<8;i++)
		{
		cout<<"Enter a\n";
		cin>>a[i];

				
		}
			for(int i=0;i<8;i++)
		{
		cout<<"Enter b\n";
		cin>>b[i];

				
		}
			for(int i=0;i<8;i++)
		{
		cout<<"Enter c\n\n";
		cin>>c[i];

		}
		cout<<"Inputs \t \t \t Outputs\n";
		cout<<"a \t b \t c \t C \t S \t\n";
			for(int i=0;i<8;i++)
			{
				sum[i]=(a[i]+b[i]+c[i])%2;
				carry[i]=(a[i]+b[i]+c[i])/2;
			
			
		
			cout<<a[i]<<"\t"<<b[i]<<"\t"<<c[i]<<"\t"<<sum[i]<<"\t"<<carry[i]<<endl;
		
		}
	
	return 0;
	getch();
}
