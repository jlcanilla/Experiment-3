#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
int main()
{
char array[20];
int size;
cout<<" Enter a char array.\n";
cin>>array;
size=0;
while(array[size]!='\0')size++;
for(int j=size-1;j>=0;j--)
{
cout << array[j];
}
cout<< "\nArray size is:"<< size;
getch();
return 0;
}
