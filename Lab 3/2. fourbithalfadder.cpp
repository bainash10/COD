#include<iostream>
#include<conio.h>
using namespace std;
int main()
{ 
	int a[16],b[16],c[16],d[16],carry[16],sum[16];
	
		cout<<"Enter a\n";
		for(int i=0;i<16;i++)
		{
		
		cout<<i+1<<"->";
		cin>>a[i];			
		}
		
		cout<<"Enter b\n";
		for(int i=0;i<16;i++)
		{
	
		cout<<i+1<<"->";
		cin>>b[i];			
		}
		
		cout<<"Enter c\n";
		for(int i=0;i<16;i++)
		{
		
		cout<<i+1<<"->";
		cin>>c[i];
		}
		
		cout<<"Enter d\n";
		for(int i=0;i<16;i++)
		{
	
		cout<<i+1<<"->";
		cin>>d[i];
		}
		
		cout<<"Inputs \t \t \t \t Outputs\n";
		cout<<"a \t b \t c \t d \t C \t S \t\n";
		
			for(int i=0;i<16;i++)
			{
				sum[i]=(a[i]+b[i]+c[i]+d[i])%2;
				carry[i]=(a[i]+b[i]+c[i]+d[i])/2;
				
			if(a[i]==1&&b[i]==1&&c[i]==1&&d[i]==1)
				{
					cout<<"1\t1\t1\t1";
					carry[i]=carry[i]/2;
				cout<<" \t"<<carry[i];
				cout<<" \t" <<sum[i];	
				
				}
				
			else
				{
			cout<<a[i]<<"\t"<<b[i]<<"\t"<<c[i]<<"\t"<<d[i]<<"\t"<<sum[i]<<"\t"<<carry[i]<<endl;
				}
			
		}
	
	return 0;
	getch();
}
