#include "assets.h"

struct node {
	int data;

	struct node* leftChild;
	struct node* rightChild;
};

struct node *root = NULL;

static void insert(int data)
{
	struct node* tempNode = (struct node*) malloc(sizeof(struct node));
	struct node* current;
	struct node* parent;
	tempNode->data = data;
	tempNode->leftChild = NULL;
	tempNode->rightChild = NULL;

	//if tree is empty, create root node
	if (root == NULL)
		root = tempNode;
	else
	{
		current = root;
		parent = NULL;

		while (1)
		{
			parent = current;

			// go to left of the tree
			if (data < parent->data)
			{
				current = current->leftChild;

				// insert to the left
				if (current == NULL)
				{
					parent->leftChild = tempNode;
					return;
				}
			}

			// go to right of the tree
			else
			{
				current = current->rightChild;

				//insert to the right
				if (current == NULL)
				{
					parent->rightChild = tempNode;
					return;
				}
			}
		}
	}
}

static struct node* search(int data)
{
	struct node* current = root;
	std::cout << "# Visiting elements: ";

	while (current->data != data)
	{
		if (current != NULL)
			std::cout << current->data << " ";
		if (current->data > data)
			current = current->leftChild;
		else
			current = current->rightChild;

		if (current == NULL)
			return NULL;
	}
	log("\n");
	return current;
}

void binary_search_tree()
{
	std::vector<int> v = get_vector();

	for (int data : v)
		insert(data);
	
	log("\n# Enter the element to found below.\n");
	int i = get_value();
	struct node* temp = search(i);

	log("# ====================\n# Result: ");
	if (temp != NULL)
		std::cout << "[" << temp->data << "] element found." << std::endl;
	else
		std::cout << "[x] Element not found (" << i << ")\n" << std::endl;
	log("# ====================");

	pause();
}