//(What Does This Code Do?) What does this program do?
#include <iostream>
using namespace std;
int mysery2(const char *);
int main()
{
	char string1[80];
	cout<<"Enter a string: ";
	cin>> string1;
	cout<<mysery2(string1)<<endl;
}
int mysery2(const char *s)
{
	int x;
	for(x=0;*s!='\0';++s)
		++x;
	return x;
}
