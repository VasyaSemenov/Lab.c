#include <iostream>
#include <ctime>


using namespace std;

struct Node
{
	char z;
	Node* next;
};

void s_push(Node** top, char _data)
{
	Node* current_node;
	current_node = new Node();
	current_node->z = _data;
	if (top == NULL)
	{
		*top = current_node;
	}
	else
	{
		current_node->next = *top;
		*top = current_node;
	}
}

void s_delete_key(Node** top)
{
	Node* current_node = *top;
	Node* prev = NULL;

	cout << "\nВведите ключ узла, который нужно удалить\n";
	char key;
	cin >> key;

	while (current_node != NULL)
	{
		if (current_node->z == key)
		{
			if (current_node == *top)
			{
				*top = current_node->next;
				free(current_node);
				current_node->z = NULL;
				current_node->next = NULL;
			}
			else
			{
				prev->next = current_node->next;
				free(current_node);
				current_node->z = NULL;
				current_node->next = NULL;
			}
		}
		prev = current_node;
		current_node = current_node->next;
	}
}

void s_print(Node* top)
{
	Node* current_node = top;
	while (current_node)
	{
		cout << current_node->z << " ";
		current_node = current_node->next;
	}
}


int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));

	cout << "Сколько узлов в стеке?\n";

	Node* top = NULL;
	int n;

	cin >> n;

	while (n < 0)
	{
		cout << "Введите количество узлов >= 0\n";
		cin >> n;
	}

	if (n == 0)
	{
		cout << "\nСтек пуст\n";
	}
	else
	{
		char u;

		for (int i = 1; i <= n; i++)
		{
			cout << "\nВведите  элемент списка\n";
			cin >> u;

			s_push(&top, u);
		}

		cout << "\nСоздан список: \n";

		s_print(top);

	}
	s_delete_key(&top);

	cout << "Измененный стек: \n";
	s_print(top);

	return 0;
}
