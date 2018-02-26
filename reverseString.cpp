#include <iostream>
#include "Stack.h"
using namespace std;

int main(int argc, char const *argv[])
{
	char str[] = "ABCDEF";

	Stack<char> s;

	for (int i = 0; i < strlen(str); ++i)
	{
		s.push(str[i]);
	}

	cout<<"Reversed String: "<<endl;
	while(!s.empty()) {
		cout<<s.top();
		s.pop();
	}
	cout<<"this is an example2";
	return 0;
}
