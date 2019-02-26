#include "assets.h"

#define SIZE 100

struct DataItem 
{
	int data;
};

struct DataItem* hashArray[SIZE];
struct DataItem* dummyItem;
struct DataItem* item;

int hashCode(int data)
{
	return data % SIZE;
}

static struct DataItem* search(int data)
{
	int hashIndex = hashCode(data);

	while (hashArray[hashIndex] != NULL)
	{
		if (hashArray[hashIndex]->data == data)
			return hashArray[hashIndex];

		++hashIndex;

		hashIndex %= SIZE;
	}
	return NULL;
}

static void insert(int data)
{

	struct DataItem* item = new DataItem;
	item->data = data;

	int hashIndex = hashCode(data);

	while (hashArray[hashIndex] != NULL)
	{
		++hashIndex;
		hashIndex %= SIZE;
	}
	hashArray[hashIndex] = item;
}

void hash_table()
{
	log("\n# ====================\n# hash table \n# ====================\n");

	std::vector<int> v = get_vector();

	for (int n: v)
		insert(n);

	log("\n# Enter the element to found below.\n");
	int i = get_value();
	struct DataItem* temp = search(i);

	log("# ====================\n# Result: ");
	if (temp != NULL)
		std::cout << "[" << temp->data << "] element found." << std::endl;
	else
		std::cout << "Element not found (" << i << ")\n" << std::endl;
	log("# ====================");

	pause();
}