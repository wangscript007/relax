#include <iostream>
#include <string>

using namespace std;

void echo(string name)
{
	//原来cout不能直接放在最外面，得放在函数中，命名空间也不行。
	cout<<name<< endl;
}

int main(int argc, char* argv[]){
	string name="GOGOGO";
	cout<<name<< endl;

	name="GOGOGOGOGOGOGOGOGOGOGOGOGOGOGOGOGOGO";
	cout<<name<< endl;


	return 0;
}






