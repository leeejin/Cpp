#include <iostream>
#include <string>
using namespace std;
int main()
{
	char cstyle[] = "Are you a string, too?";
	string cppstyle;
	cppstyle = cstyle;
	cppstyle[0] = 'B';
	cout<<"cstyle = "<<cstyle<<"\n";
	cout<<"cppstyle = "<<cppstyle<<"\n";
	return 0;
}