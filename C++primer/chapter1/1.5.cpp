#include <iostream>

int main()
{
	// prompt user to enter two numbers
	std::cout << "Enter two numbers:" << std::endl; 
	int v1 = 0, v2 = 0;
	std::cin >> v1 >> v2;   
	std::cout << "The sum of ";
	std::cout<< v1 << " and " << v2<< " is " ;
	std::cout<< v1 + v2 << std::endl;
	return 0;
}
