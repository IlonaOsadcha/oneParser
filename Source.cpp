#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void main()
{
	ifstream input("INPUT.txt");
	string str;
	getline(input, str);
	int counter = 0;
	for (auto& i : str)
	{
		if (i == '1')
		{
			counter++;
		}
	}

	ofstream output("OUTPUT.txt");
	output << counter;
}