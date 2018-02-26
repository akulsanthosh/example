#include <iostream>
#include "Stack.h"
using namespace std;

int main(int argc, char const *argv[])
{
	unsigned int postfix[] = {'1','2','3','*','+','9','-'},ch;
	Stack<int> s;

	for (int i = 0; i < sizeof(postfix)/sizeof(unsigned int); ++i)
	{
		ch = postfix[i];
		if (isdigit(ch))
		{
			s.push(ch-'0');
		}
		else {
			int op1 = s.top(); s.pop();
			int op2 = s.top(); s.pop();
			switch(ch){
				case '*':s.push(op2 * op1); break;
				case '/':s.push(op2 / op1); break;
				case '+':s.push(op2 + op1); break;
				case '-':s.push(op2 - op1); break;
			}
		}
	}
	cout<<endl<<"Evaluation : "<<s.top();
	cout<<"learning git";
	return 0;
}

//this is an example
