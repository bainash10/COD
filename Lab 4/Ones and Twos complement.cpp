
#include<iostream>
#include<conio.h>
#include<stdbool.h>
using namespace std;
int n[10], ones[10],twos[10];
			void onescomp()
			{	int count=0,a[10];
				
				cout<<endl<<"Enter the 4 bit number in binary";
			
				for(int i=0;i<4;i++)
				{
				cin>>n[i];
				count++;
			    }
			 
			    for (int i=0;i<4;i++)
			    {
			    	a[i]=1;
				}
				 for (int i=0;i<4;i++)
			    {
			    	ones[i]=a[i]-n[i];
				}
					 for (int i=0;i<4;i++)
			    {
			    	cout<<endl<<"The ones complement is"<<ones[i];
				}
			}

void twoscomp()
{
	onescomp();
	int cut = 1;
	for(int i = 3; i >-1 ; i--)
	{
		if(ones[i] + cut > 1)
		{
			cut = 1;
			twos[i] = 0;
		}
		else {
			twos[i] = ones[i] + cut;
			cut = 0;
		}
	}
	cout<<"\nThe result of twos complement: "; 
	for(int i = 0; i < 4; i++)
	{
	 		cout<<twos[i];
	}
}


int main()
{
	
	int choice;
	char ch;
	do{
	
		cout<<"[1] Ones Comp \n";
		cout<<"[2] Twos Comp \n";
		cin>>choice;
		switch(choice)
		{
			case 1: 
				onescomp();
				break;
			case 2:
				twoscomp();
				break;
			default:
				cout<<"\nEnter valid Response";
		}
		cout<<"\nWant to continue the operation: ";
		cin>>ch;
	}while(ch!='n');
	
	
	return 0;
}
