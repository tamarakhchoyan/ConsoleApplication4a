#include <iostream>
int main()
{
	int mul=1;
	int i;
	int n;
	std::cin >> n;
	for(i=1;i<10;++i)
	{
		std::cout << mul << std::endl;
		mul *= n;
	}
	std::cout << mul;
	return 0;
}