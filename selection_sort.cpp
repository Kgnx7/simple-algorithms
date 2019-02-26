#include "assets.h"

void selection_sort()
{
	log("\n# ====================\n# Selection sort \n# ====================\n");

	std::vector<int> v = get_vector();
	int len = v.size();

	for (int i = 0; i < len; i++)
	{
		int min = i;

		for (int j = i + 1; j < len; j++)
			if (v[j] < v[min])
				min = j;
		
		if (min != i)
			swap(&v[min], &v[i]);
	}

	output_vector(v);
}
