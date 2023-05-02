#include <iostream>
#include <string>
using namespace std;

int countPluas();

int main()
{
	int i=0;
	while (i < 10)
	{
		cout << countPluas() << endl;
		i++;
	}
}

int countPluas()
{
	static int count = 0;
	count++;
	return count;
}