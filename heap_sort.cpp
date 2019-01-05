#include "assets.h"

void swap(int *xp, int *yp);

void heapify(std::vector<int> v, int n, int i)
{
	int largest = i; // Initialize largest as root 
	int l = 2 * i + 1; // left = 2*i + 1 
	int r = 2 * i + 2; // right = 2*i + 2 

	// If left child is larger than root 
	if (l < n && v[l] > v[largest])
		largest = l;

	// If right child is larger than largest so far 
	if (r < n && v[r] > v[largest])
		largest = r;

	// If largest is not root 
	if (largest != i)
	{
		swap(&v[i], &v[largest]);

		// Recursively heapify the affected sub-tree 
		heapify(v, n, largest);
	}
}

void heap_sort()
{
	std::vector<int> v = get_vector();
	int n = v.size();

	for (int i = n / 2 - 1; i >= 0; i--)
		heapify(v, n, i);

	for (int i = n - 1; i >= 0; i--)
	{
		swap(&v[0], &v[i]);
		heapify(v, i, 0);
	}

	output_vector(v);
}

