
#include<iostream>
#include<fstream>
#include <string>
#include<queue>
using namespace std; 


#define MAX 100

class QueueNode {
public:
	char data;
	unsigned freq;
	QueueNode* left, * right;
};


class Queue {
public:
	int front, rear;
	int capacity;
	QueueNode** array;
};

QueueNode* newNode(char data, unsigned freq)
{
	QueueNode* temp = new QueueNode[(sizeof(QueueNode))];
	temp->left = temp->right = NULL;
	temp->data = data;
	temp->freq = freq;
	return temp;
}

Queue* createQueue(int capacity)
{
	Queue* queue = new Queue[(sizeof(Queue))];
	queue->front = queue->rear = -1;
	queue->capacity = capacity;
	queue->array = new QueueNode * [(queue->capacity
		* sizeof(QueueNode*))];
	return queue;
}

int isSizeOne(Queue* queue)
{
	return queue->front == queue->rear
		&& queue->front != -1;
}

int isEmpty(Queue* queue) { return queue->front == -1; }

int isFull(Queue* queue)
{
	return queue->rear == queue->capacity - 1;
}

void enQueue(Queue* queue, QueueNode* item)
{
	if (isFull(queue))
		return;
	queue->array[++queue->rear] = item;
	if (queue->front == -1)
		++queue->front;
}


QueueNode* deQueue(Queue* queue)
{
	if (isEmpty(queue))
		return NULL;
	QueueNode* temp = queue->array[queue->front];
	if (queue->front
		== queue
		->rear) // If there is only one item in queue
		queue->front = queue->rear = -1;
	else
		++queue->front;
	return temp;
}


QueueNode* getFront(Queue* queue)
{
	if (isEmpty(queue))
		return NULL;
	return queue->array[queue->front];
}


QueueNode* findMin(Queue* firstQueue, Queue* secondQueue)
{
	
	if (isEmpty(firstQueue))
		return deQueue(secondQueue);

	
	if (isEmpty(secondQueue))
		return deQueue(firstQueue);

	
	if (getFront(firstQueue)->freq
		< getFront(secondQueue)->freq)
		return deQueue(firstQueue);

	return deQueue(secondQueue);
}


int isLeaf(QueueNode* root)
{
	return !(root->left) && !(root->right);
}

void printArr(int arr[], int n)
{
	int i;
	for (i = 0; i < n; ++i)
		cout << arr[i];
	cout << endl;
}

QueueNode* buildHuffmanTree(char data[], int freq[],
	int size)
{
	QueueNode* left, * right, * top;

	
	Queue* firstQueue = createQueue(size);
	Queue* secondQueue = createQueue(size);

	
	for (int i = 0; i < size; ++i)
		enQueue(firstQueue, newNode(data[i], freq[i]));

	
	while (
		!(isEmpty(firstQueue) && isSizeOne(secondQueue))) {
	
		left = findMin(firstQueue, secondQueue);
		right = findMin(firstQueue, secondQueue);

		
		top = newNode('$', left->freq + right->freq);
		top->left = left;
		top->right = right;
		enQueue(secondQueue, top);
	}

	return deQueue(secondQueue);
}


void printCodes(QueueNode* root, int arr[], int top)
{
	
	if (root->left) {
		arr[top] = 0;
		printCodes(root->left, arr, top + 1);
	}

	
	if (root->right) {
		arr[top] = 1;
		printCodes(root->right, arr,top + 1);
	}

	
	if (isLeaf(root)) {
		cout << root->data << ": ";
		printArr(arr, top);
	}
}


void HuffmanCodes(char data[], int freq[], int size)
{
	
	QueueNode* root = buildHuffmanTree(data, freq, size);

	
	int arr[MAX], top = 0;
	printCodes(root, arr, top);
}

int* removeEndingZeros(int *freq, int size,char *ch)
{
	int index = -1;
	for (int i = 0; i < size; i++)
	{
		if (freq[i] == 0)
		{
			index = i;
			break;
		}
	}
	int start = index;
	
	int *NewArray = new int [start];

	for (int i = 0; i < start; i++)
	{
		NewArray[i] = freq[i];


	}

	HuffmanCodes(ch, NewArray, start);

	for (int i = 0; i < start; i++)
	{
		cout << freq[i] << " ";

	}
	
	return NewArray;

}

void swap(char *t1,char *t2,int *frq1, int* frq2)
{
	int temp = 0;
	char temp1;

	temp1 = *t1;
	*t1 = *t2;
	*t2 = temp1;

	temp = *frq1;
	*frq1 = *frq2;
	*frq2 = temp;
}

void sortArray(char ch[], int freq[],int size)
{
	int k = 0;
	for (int i = 0; i < size - 1; i++)
	{
		k = i;
		for (int j = i; j < size; j++)
		{

			if (freq[j]>freq[k])
			{
				k = j;

			}
		}
		swap(&ch[i],&ch[k],&freq[i],&freq[k]);
	}
	removeEndingZeros(freq, size,ch);
	
}
void characterCount()
{
	const int size = 100;
	ifstream obj;
	obj.open("file.txt");

	char* array = new char[size];
	int* freq = new int[size];


	char ch;
	int count = 0;

	while (obj >> ch)
	{
		array[count] = ch;
		count++;
	}


	for (int i = 0; i < count; i++)
	{
		freq[i] = 1;

		for (int j = i + 1; j < count; j++)
		{
			if (array[i] == '0')
						{
								freq[i] = 0;
								break;
							}
			
			if (array[i] == array[j])
			{
				freq[i] = freq[i] + 1;
				array[j] = '0';
			}
		}
	}
	sortArray(array, freq,count);

	
	
}

int main()
{
	characterCount();
	return 0;
}


