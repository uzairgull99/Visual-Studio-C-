

#include <iostream>
#include<string>
using namespace std;


class Node {
public:
	int data;
	Node* next;

	Node()
	{
		data = 0;
		next = NULL;
	}
	Node(int data)
	{
		this->data = data;
		next = NULL;
	}
};


class List {
private:
	
public:
	Node* first;
	
	void insert(Node*, int);
	void createList(Node [], int);
	void display();
	
	void sortList();
	void sortInsert(Node*);
	Node* deleteNode(int);
	int length();
	int countNodes(Node*);
};


void List::createList(Node A[], int index)
{
	Node* last;
	Node* t;
	int i = 0;

	t = new Node;
	t->data = A[i].data;
	t->next = NULL;
	first = t;
	last = t;
	for (int i = 1; i < index; i++)
	{
		t = new Node;
		t->data = A[i].data;
		t->next = NULL;
		last->next = t;
		last = t;
	 }

}

void List::insert(Node *x, int pos)
{
	Node* p = first;
	Node* t;
	if (pos == 0)
	{
		if (first == NULL)
		{
			t = new Node;
			t->data = x->data;
			t->next = NULL;
			first = t;
		}
		else
		{
			t = new Node;
			t->data = x->data;
			t->next = first;
			first = t;
		}
		
	}
	else if(pos>0)
	{
		for (int i = 0; i < pos - 1&&p; i++)
		{
			p = p->next;
		}
		t = new Node;
		t->data = x->data;
		t->next = p->next;
		p->next = t;
	}
}

void List::display()
{
	Node* p = first;
	while (p!= NULL)
	{
		cout << p->data<<"->";
		p = p->next;
	}
}

void List::sortList()
{
	Node*q,* p = first;
	int temp;
	if (p == NULL)
	{
		cout << "List is Empty\n";
	}
	else
	{
		while (p != NULL)
		{
			q = p->next;

			while (q!= NULL)
			{
				if (p->data > q->data)
				{
					temp = p->data;
					p->data = q->data;
					q->data = temp;
					
				}
				q = q->next;
			}
			p = p->next;
		}
	}
}

void List::sortInsert(Node* x)
{
	Node*t,*q=NULL,*p = first;

	t = new Node;
	t->data = x->data;
	t->next = NULL;

	if (p == NULL)
	{
		first = t;
	}
	else
	{
		while (p != NULL && p->data < t->data)
		{
			q = p;
			p = p->next;
		}
		if (p==first)
		{
			t->next = first;
			first = t;
		}
		else
		{
			t->next = q->next;
			q->next = t;
		}
	}



}

int List::length()
{
	Node* p = first;
	int count=0;
	while (p != NULL)
	{
		count++;
		p = p->next;
	}
	return count;
}

Node* List:: deleteNode(int pos)
{
	Node* p = first, * q=NULL;
	if (pos<0||pos > length()) {
		cout << "Invalid Position";
	}
	else if (pos == 1)
	{
		p = first;
		first = first->next;
		return p;
		delete p;
	}
	else if(pos>1)
	{
		p = first;
		q = NULL;
		for (int i = 0; i < pos - 1; i++)
		{
			q = p;
			p = p->next;
		}
		if (p) 
		{
			q->next = p->next;
			return p;
			delete p;
		}
		
	}

}


int List::countNodes(Node*p)
{
	if (p == NULL)
	{
		return 0;
	}
	else
	{
		return countNodes(p->next) + 1;
	}
}



class Term {
public:
	double coeff;
	int expo;
	Term *next;

	Term()
	{
		coeff = 1;
		expo = 0;
		next = NULL;
	}
	Term(double coeff,int expo)
	{
		this->coeff = coeff;
		this->expo = expo;
		next = NULL;
	}

};

class Polynomial {
private:
	Term* first;
public:
	Polynomial()
	{
		first = NULL;
	}
	void createPolynomial(Term A[], int size);
	void display();
	void add(Polynomial ,Polynomial);
	int evaluate(int x,int terms);
	
};

int Polynomial::evaluate(int x,int terms)
{
	Term *t = first;
	int exp = 1,sum=0,p;
	while (t != NULL)
	{
		for (int i = 0; i <t->expo;i++)
		{
			exp = exp * x;
		}
		
		p = t->coeff * exp;
		exp = 1;
		sum = sum + p;
		t = t->next;
	}

	return sum;
}

void Polynomial::add(Polynomial p1,Polynomial p2)
{
	Polynomial r;
	Term* result=new Term;
	Term* last = NULL;
	Term* t1 = p1.first;
	Term* t2 = p2.first;
	first = result;
	last = result;

	while (t1->next != NULL && t2->next != NULL)
	{
		

		if (t1->expo > t2->expo)
		{
			result->expo = t1->expo;
			result->coeff = t1->coeff;
			t1 = t1->next;
		}
		else if (t2->expo > t1->expo)
		{
			result->expo = t2->expo;
			result->coeff = t2->coeff;
			t2 = t2->next;
		}
		else
		{
			result->expo = t1->expo;
			result->coeff = t1->coeff + t2->coeff;
			t1 = t1->next;
			t2 = t2->next;
		}

		result = new Term;
		result->next = NULL;
		last->next = result;
		last = result;
	
	}

	while (t1 || t2) {

		if (t1->next) 
		{
			result->expo = t1->expo;
			result->coeff = t1->coeff;
			t1 = t1->next;
		}
		else if (t2->next) {
			result->expo = t2->expo;
			result->coeff = t2->coeff;
			t2 = t2->next;
		}
		result = new Term;
		result->next = NULL;
		last->next = result;
		last = result;
	}
	
	
		

	}





void Polynomial::createPolynomial(Term A[], int size)
{
	Term* last=NULL;
	Term* t;
	int i = 0;

	t = new Term;
	t->coeff = A[i].coeff;
	t->expo = A[i].expo;
	t->next = NULL;
	first = t;
	last = t;
	for (int i = 1; i < size; i++)
	{
		t = new Term;
		t->coeff = A[i].coeff;
		t->expo = A[i].expo;
		t->next = NULL;
		last->next = t;
		last = t;
	}

}


void Polynomial::display()
{
	Term* p=first;
	while (p != NULL)
	{
		
		cout << " + " << p->coeff << "x^" << p->expo ;
		p = p->next;
	}
}



int main()
{
	
	const int size = 4;
	Node A[size] = { 1,2,3,4 };

	Term A1[size] = { {6,3},{7,2},{9,1},{9,0} };
	
	Polynomial p1,p2,p3;
	p1.createPolynomial(A1, size);
	p1.display();
	p2.createPolynomial(A1, size);
	p2.display();
	cout<<p1.evaluate(2, size)<<endl;
	p1.add(p1, p2);
	p1.display();
	
	
}


