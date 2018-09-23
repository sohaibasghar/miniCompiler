#include <iostream>
#include <stack>
#include <string>
using namespace std;

//@Author Sohiab Asghar

bool areParanthesisBalanced(string expr)
{
	stack <char> s;
	char x;
	for (int i = 0; i<expr.length(); i++)
	{
		if (expr[i] == '(' || expr[i] == '[' || expr[i] == '{')
		{
			s.push(expr[i]);
			continue;
		}
		if (s.empty())
			return false;

		switch (expr[i])
		{
		case ')':

			x = s.top();
			s.pop();
			if (x == '{' || x == '[')
				return false;
			break;

		case '}':

			
			x = s.top();
			s.pop();
			if (x == '(' || x == '[')
				return false;
			break;

		case ']':

			
			x = s.top();
			s.pop();
			if (x == '(' || x == '{')
				return false;
			break;
		}
	}

	
	return (s.empty());
}


int main()
{
	string expr ="";
	cout << "Enter Your Expression\n";
	cin >> expr;


	if (areParanthesisBalanced(expr))
		cout << "Accepted\n";
	else
		cout << "Rejected";
	return 0;
}
