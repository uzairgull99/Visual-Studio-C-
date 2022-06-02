

#include <iostream>
#include<string>
using namespace std;

class Queue {
private:
	int size;
	int front; 
	int rear;
	int* qptr;
public:
	Queue();
	Queue(int size);
	void enqeue(int);
	int dequeue();
	void display();
};

Queue::Queue()
{
	this->size = 5;
	front = -1;
	rear = -1;
	qptr = new int[size];
}

Queue::Queue(int size)
{
	this->size = size;
	front = -1;
	rear = -1;
	qptr = new int[size];
}


void Queue::enqeue(int value)
{
	if ((rear + 1) % size==front)
	{
		cout << "Queue is Full.....\n";
	}
	else
	{
		rear = (rear + 1) % size;
		qptr[rear] = value;
	}
}


int Queue::dequeue()
{
	int x = -1;
	
	if (front == rear)
	{
		cout << "Queue is Empty.....\n";
	}
	else
	{
		front = (front + 1) % size;
		x = qptr[front];
	}

	return x;
}


void Queue::display()
{
	int i = front + 1;

	if (front != rear)
	{
		cout << "Queue is: ";
		do {
			
			
			cout << qptr[i] << " \t";
			i = (i + 1) % size;

		} while (i != (rear + 1) % size);
	}
	else
		cout << "Queue is Empty\n";
	
}


void queueMain()
{
	Queue q(10);

	cout << "\n1: Enqueue\n";
	cout << "2: Dequeue\n";
	cout << "3: Display\n";
	cout << "0: Exit\n";

	char ch;
	int val;

	do
	{

		cout << "\nEnter your Choice:\n";
		cin >> ch;
		switch (ch)
		{
		case'1':
		{
			cout << "Enter value: ";
			cin >> val;
			q.enqeue(val);

		}
		break;
		case'2':
		{
			cout << "Dequed value is: " << q.dequeue();

		}
		break;
		case'3':
		{
			q.display();

		}
		break;
		default:
			cout << "Invalid input..";

		}
	} while (ch != '0');

}

//int main()
//{
//	queueMain();
//	
//}

