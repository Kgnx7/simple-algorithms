#include "assets.h"

void insertion_sort()
{
	log("\n# ====================\n# Insertion sort \n# ====================\n");

	std::vector<int> v = get_vector();

	for (int j = 1; j < v.size(); j++)
	{
		int key = v[j], i = j - 1;
		while (i >= 0 && v[i] > key)
		{	
			v[i + 1] = v[i];
			i--;
		}
		v[i + 1] = key;
	}

	output_vector(v);
}
