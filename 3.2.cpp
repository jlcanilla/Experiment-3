#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	const int q = 3, w = 7;
	char province;
	int temperature[q][w];
	
cout<<"Enter all temperature for a week of Province A, Province B, and the Province C. \n";
for (int i=0;i<q;++i)
{
for (int j=0;j<w;++j)
{
if(i+1==1)
province ='A';
else if(i+1==2)
province = 'B';
else if (i+1==3)
province = 'C';
cout<< "Province"<<province<<", Day"<<j+1<<":";
cin >> temperature [i][j];
}
}
cout << "\n\nDisplaying Values:\n";
for (int i=0; i<q;++i)
{
if(i+1==i)
province = 'A';
else if(i+1==2)
province = 'B';
else if (i+1==3)
province ='C';
for(int j=0;j<w; ++j)
{
	cout << "Province" << province << ",Day"<< j+1<<"="<< temperature[i][j]<< endl;
	}

}
getch();
return 0;
}
