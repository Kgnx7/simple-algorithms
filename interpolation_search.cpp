#include "assets.h"

void interpolation_search()
{
	log("\n# ====================\n# Binary search \n# ====================\n");

	std::vector<int> v = get_vector();

	log("\n# Enter the element to found below.\n");
	int x = get_value();
	int temp = -1;

	int low = 0;
	int high = v.size() - 1;
	int comparisons = 0;

	while (low <= high)
	{
		comparisons++;

		int mid = low + ((double)(high - low) / (v[high] - v[low])) * (x - v[low]);

		if (v[mid] == x)
		{
			temp = mid;
			break;
		}
		else if (v[mid] < x)
			low = mid + 1;
		else
			high = mid - 1;
	}

	search_output(temp, comparisons);
}