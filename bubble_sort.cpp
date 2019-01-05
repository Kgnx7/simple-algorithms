#include "assets.h"

void bubble_sort()
{
	log("\n# ====================\n# bubble sort \n# ====================\n");

	std::vector<int> v = get_vector();

	for (int i = 0; i < v.size(); i++)
		for (int j = v.size()-1; j > i; j--)
			if (v[j] < v[j - 1])
				swap(&v[j], &v[j - 1]);

	output_vector(v);
}

