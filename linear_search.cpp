#include "assets.h"

void linear_search()
{
	log("\n# ====================\n# Linear search \n# ====================\n");

	std::vector<int> v = get_vector();

	log("\n# Enter the element to found below.\n");
	int x = get_value();
	int temp = -1;
	int comparisons = 0;

	for (int i = 0; i < v.size(); i++)
	{
		comparisons++;
		if (v[i] == x)
		{
			temp = i;
			break;
		}
	}

	search_output(temp, comparisons);
}