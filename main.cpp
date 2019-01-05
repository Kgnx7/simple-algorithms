#include <string>
#include "assets.h"

void insertion_sort();
void bubble_sort();
void show_menu();
void heap_sort();
void binary_search_tree();
void linear_search();
void binary_search();
void interpolation_search();
void hash_table();
//void selection_sort();
//void merge_sort();
//void shell_sort();
//void quick_sort();

int main()
{

	// ======================
	// MAIN MENU
	// ======================

	while (1)
	{
		show_menu();

		int x = get_value();

		switch (x)
		{
		case 0: return 0;
		case 1: linear_search();
			break;
		case 2: binary_search();
			break;
		case 3: interpolation_search();
			break;
		case 4: hash_table();
			break;
		//case 5: insertion_sort();
		//	break;
		//case 6: bubble_sort();
		//	break;
		//case 7: selection_sort();
		//	break;
		//case 8: merge_sort();
		//	break;
		//case 9: shell_sort();
		//	break;
		//case 10: quick_sort();
		//	break;
		//case 11: heap_sort();
		//	break;
		case 12: binary_search_tree();
			break;
		default:
			log("\n# Incorrect value...\n");
			continue;
			break;
		}
	}
}

void show_menu()
{
	log("# ====================\n# List of algorithms \n# ====================\n");

	const int num = 12;
	std::string algorithms[num] = {
		"Linear search",
		"Binary Search", 
		"Interpolation Search", 
		"Hash table",
		"Insertion sort",
		"Bubble sort",
		"Selection sort",
		"Merge sort",
		"Shell sort",
		"Quick sort",
		"Heap sort",
		"Binary search tree"
	};

	log("# 0. Press to exit");
	for (int i = 0; i < num; i++)
		std::cout << "# " << i + 1 << ". " << algorithms[i] << std::endl;
}



