#include<iostream>
#include<fstream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	int n;
	cin >> n;
	cin.ignore();
	string *str = new string[n];
	for (int i = 0; i < n; i++)
	{
		getline(cin, str[i]);
	}
	sort(str, str + n);
	fstream fajl;
	fajl.open("imenik.txt", ios::app | ios::out);
	for (int i = 0; i < n; i++)
	{
		fajl << str[i] << endl;
	}
	fajl.close();
	return 0;
}