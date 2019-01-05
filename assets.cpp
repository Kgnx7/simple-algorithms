#include "assets.h"

int get_value()
{
	int num;
	bool valid = false;

	while (!valid)
	{
		valid = true;

		log("Enter an integer value: ");
		std::cin >> num;

		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(10000, '\n');
			log("Please enter an Integer only.");
			valid = false;
		}
	}
	std::cout << "You entered: " << num << std::endl;
	return num;
}

std::vector<int> get_vector()
{
	std::cout << "The length of array(less then 100): " << std::endl;
	const int len = get_value();
	std::vector<int> v;

	for (int i = 0; i < len; i++)
	{
		std::cout << "fill the arr[" << i << "] element" << std::endl;
		v.push_back(get_value());
	}

	return v;
}

void output_vector(std::vector<int> v)
{
	log("# ====================");
	std::cout << "# Result: ";
	for (int i = 0; i < v.size(); i++)
		std::cout << v[i] << (i == v.size() - 1 ? "\n" : ", ");
	log("# ====================");

	pause();
}

void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void pause()
{
	log("Press enter key to continue...");
	std::cin.clear();
	std::cin.ignore(10000, '\n');
	std::cin.get();
}

void search_output(int temp, int comparisons)
{
	log("# ====================\n# Result\n# ====================\n");
	if (temp != -1)
	{
		std::cout << "# Total comparisons made: " << comparisons << std::endl;
		std::cout << "# Element found at location: " << temp << std::endl;
	}
	else
		std::cout << "# Element not found" << std::endl;
	pause();
}