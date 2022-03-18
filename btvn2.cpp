#include<iostream>
using namespace std;
void nhapho(char a[])
{
	cout << " nhap ho : " ;
	cin.getline(a,30); 
}
void nhaptendem(char b[])
{
	cout << " nhap ten dem : " ;
	cin.getline(b,30);
}
void nhapten(char c[])
{
	cout << " nhap ten : " ; 
	cin.getline(c,30);
}
int main()
{
	char a[30] , b[30] , c[30];
	nhapho(a);
	nhaptendem(b);
	nhapten(c);
	cout << " ho cua nguoi vua nhap vao la : " << endl ;
	cout << a ;
	cout << endl ;
	cout << " ten cua nguoi nhap vao la : " << endl ;
	cout << a << " " << b << " " << c;
}
