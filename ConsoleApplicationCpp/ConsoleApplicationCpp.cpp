#include <iostream>

int main()
{
	int homeWorkNumber{};
	std::cout << "Please enter the home work number:";

	std::cin >> homeWorkNumber;

	if (homeWorkNumber == 1)
	{
		//HW 1
	}
	else if (homeWorkNumber == 2)
	{
		//some changes
		//HW 2
	}
	else if (homeWorkNumber == 3)
	{
		//HW 3
	}
	else
	{
		std::cout << "Incorrect number!";
	}
}