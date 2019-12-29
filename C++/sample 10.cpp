#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	system("cls");
	int number;
	cout<<"Enter a positive integer : ";
	cin>>number;
	int digit = number%10;
	cout<<"last digit : "<<digit<<"\n";
	number = number / 10;
	digit = number % 10;
  	cout<<"Second last digit : "<<digit<<"\n";
	getch();
	return 0;
	
}
