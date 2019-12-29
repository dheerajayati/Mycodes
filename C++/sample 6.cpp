#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	system("cls");
	int number;
	cout<<"Enter a postive number :";
	cin>>number;
	cout<<"Last 3 digits number are ";
	cout<< number%1000;
	getch();
	return 0;
	
}
