#include<iostream>
#include<string>

using namespace std;

int main()
{
	string name;

	while (0 == 0)
	{
		cout << "Enter a name" << endl;
		cin >> name;

		if (name == "Amanda" || name == "amanda" || name == "Shannon" || name == "shannon" || name == "Spencer" || name == "spencer" || name == "David" || name == "david")
		{
			cout << "false" << endl;
		}
		else
		{
			cout << "true" << endl;
		}
	}

	system("pause");
	return 0;
}