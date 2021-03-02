#include <fstream>
#include <iostream>
#include <string>

#include "Common.h"

using namespace std;

int main() 
{
	string line;
	string request;
	ifstream infile("Memory.txt");
	ofstream outfile("Memory.txt");
	request = askText("G'day, Sire. My name is Lodwig Cottage. What doth thine require?");
	if (infile.is_open()) 
	{
		cout << "Memorizing thy requests, spare me a spell while we wait." << endl;
		outfile << request << endl;
	}
	else 
	{
		cout << "Input file is not open." << endl;
	}
	return 0;
}