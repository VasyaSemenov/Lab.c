#include <iostream>
#include <random>
#include <fstream>
#include <string>
using namespace std;
struct node
{
	int data;
	node* next;
	node* prev;
	node(int _data)
	{
		data = _data;
		next = nullptr;
		prev = nullptr;
	}
};

struct list
{
	node* head;
	node* tail;

	list() : head(nullptr), tail(nullptr) {}

	bool zero()
	{
		return head == nullptr;
	}

	void push_back(int y)
	{
		node* x = new node(y);

		if (zero())
		{
			head = x;
			tail = x;
		}
		tail->next = x;
		x->prev = tail;
		tail = x;
	}

	void pushback(int k)
	{
		for (int i = 0; i < k; i++)
		{
			node* x = new node(rand() % 10);

			if (zero())
			{
				head = x;
				tail = x;
			}
			tail->next = x;
			x->prev = tail;
			tail = x;
		}
	}

	void print()
	{
		if (zero()) {
			cout << "список пуст";
			return;
		}
		node* current_node = head;

		while (current_node)
		{
			cout << current_node->data << " ";
			current_node = current_node->next;
		}
		cout << endl;
	}


	node* operator[] (int index)
	{
		--index;
		if (index == 0)
		{
			node* p = head;
			p = p->next;
			p->prev = nullptr;
			free(head);
			head->next = p->next;
			head = p;
		}
		else {
			if (zero()) return nullptr;
			node* p = head;
			node* x = head;

			for (int i = 0; i < index; i++) {
				p = p->next;
				if (!p) return nullptr;
			}
			for (int i = 0; i < (index - 1); i++) {
				x = x->next;
				if (!x) return nullptr;
			}
			x->next = p->next;
			delete p;

			return 0;
		}
	}

	void alldel()
	{
		node* current;
		current = head;

		for (int i = 1; head->next = nullptr; i++) {}

		if (zero()) return;
		node* current_node = head;
		head = current_node->next;
		delete current_node;
	}



};

int main()
{
	setlocale(0, "rus");
	int n, k, y;
	srand(time(0));
	list l;
	cout << "Сколько элементов добавить спискок?" << endl;
	cin >> k;
	l.pushback(k);
	l.print();
	cout << "значение добавляемого элемента" << endl;
	cin >> y;
	l.push_back(y);
	l.print();
	cout << "Какой по счету элемент удалить?" << endl;
	cin >> n;
	l.operator[](n);
	l.print();
	l.alldel();
	return 0;
}