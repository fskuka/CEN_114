#include <iostream>
#include <string>
#include <cstring>
#include <string.h>
using namespace std;

void reverseDisplay1(const string& s)
{
	if (s.size() > 0)
	{
		cout << s[s.size() - 1];
		reverseDisplay1(s.substr(0, s.size() - 1));
	}
}

void reverseDisplay2(char str[])
{
	if (strlen(str)> 0)
	{
		cout << str[strlen(str) - 1];
		str[strlen(str) - 1] = '\0';
		reverseDisplay2(str);
	}
}

int main()
{
	cout << "Enter a string: ";
	char s[50];
	cin >> s;

	reverseDisplay2(s);
	getchar();


	return 0;
}
