#include <iostream>
#include<stack>
#include<string>
using namespace std;

stack<char> brackets;
string line;

int main() {
	getline(cin, line);
	for (int i = 0; i < line.length(); i++)
	{
		if (line[i] == '(')
		{
			brackets.push(line[i]);
		}
		else if (line[i] == ')')
		{
			if (brackets.top() != '(')
			{
				cout << "greska";
			}
			brackets.pop();
		}
	}
	if (brackets.empty())
		cout << "Izraz je ispravan";
	else
		cout << "Izraz nije ispravan";

	return 0;
}