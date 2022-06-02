//#pragma once
//#include<iostream>
//#include <string>
//#include <stack> 
//#include<queue>
//using namespace std;
//
//
//class BSTNode {
//private:
//	char value;
//	BSTNode* left;
//	BSTNode* right;
//public:
//	BSTNode();
//	BSTNode(char);
//	void setValue(char);
//	void setLeft(BSTNode*);
//	void setRight(BSTNode*);
//	char getValue();
//	BSTNode* getLeft();
//	BSTNode* getRight();
//};
//
//
//class BST {
//
//public:
//	BSTNode* root;
//	BST();
//	void insertNode(BSTNode*);
//	void inOrder();
//	void preOrder();
//	void postOrder();
//	int treeHeight();
//	void levelOrder();
//};
//
//
////BST Node Methods
//
//BSTNode::BSTNode()
//{
//	value = ' ';
//	left = NULL;
//	right = NULL;
//}
//
//BSTNode::BSTNode(char c)
//{
//	value = c;
//	left = NULL;
//	right = NULL;
//}
//
//void BSTNode::setValue(char c)
//{
//	value = c;
//}
//void BSTNode::setLeft(BSTNode* l)
//{
//	left = l;
//}
//
//void BSTNode::setRight(BSTNode* r)
//{
//	right = r;
//}
//
//
//char BSTNode::getValue()
//{
//	return value;
//}
//
//BSTNode* BSTNode::getLeft()
//{
//	return left;
//}
//
//BSTNode* BSTNode::getRight()
//{
//	return right;
//}
//
//
//
////BST Methods
//
//BST::BST()
//{
//	root = NULL;
//}
//
////Insertion 
//
//void BST::insertNode(BSTNode* newNode)
//{
//
//
//	if (root == NULL)
//	{
//		root = newNode;
//		cout << "Value is inserted at Root\n";
//	}
//	else
//	{
//		BSTNode* temp = root;
//		while (1)
//		{
//
//			if (newNode->getValue() < temp->getValue())
//			{
//				if (temp->getLeft() == NULL)
//				{
//					temp->setLeft(newNode);
//					cout << "Value inserted at left\n";
//					break;
//				}
//				temp = temp->getLeft();
//			}
//			else if (newNode->getValue() > temp->getValue())
//			{
//
//				if (temp->getRight() == NULL)
//				{
//					temp->setRight(newNode);
//					cout << "Value inserted at right\n";
//					break;
//				}
//				temp = temp->getRight();
//			}
//		}
//	}
//
//}
//
//
//
//
//
////InOrder
//
//void BST::inOrder()
//{
//	stack<BSTNode>  s;
//	BSTNode* temp = root;
//
//	while (1)
//	{
//
//		{
//			while (temp != NULL)
//			{
//				s.push(*temp);
//				temp = temp->getLeft();
//			}
//
//		}
//		if (s.empty())
//		{
//			break;
//		}
//		temp = &s.top();
//		cout << temp->getValue() << " ";
//		s.pop();
//		temp = temp->getRight();
//
//	}
//}
//
////PreOrder
//
//void BST::preOrder()
//{
//	stack<BSTNode> s;
//	BSTNode* temp = root;
//
//	while (1)
//	{
//		while (temp != NULL)
//		{
//			cout << temp->getValue() << " ";
//			if (temp->getRight())
//			{
//				s.push(*temp->getRight());
//			}
//			temp = temp->getLeft();
//		}
//
//		if (s.empty())
//		{
//			break;
//		}
//		temp = &s.top();
//		s.pop();
//
//
//	}
//}
//
////Post Order 
//
//void BST::postOrder()
//{
//	stack<BSTNode> s1, s2;
//	BSTNode* temp = root;
//
//	s1.push(*temp);
//
//	while (!s1.empty())
//	{
//
//		*temp = s1.top();
//		s1.pop();
//		s2.push(*temp);
//
//		if (temp->getLeft())
//			s1.push(*temp->getLeft());
//
//		if (temp->getRight())
//			s1.push(*temp->getRight());
//
//
//	}
//
//	while (!s2.empty())
//	{
//		*temp = s2.top();
//		cout << temp->getValue() << " ";
//		s2.pop();
//
//	}
//
//}
//
////Level Order
//
//void BST::levelOrder()
//{
//	queue<BSTNode> q;
//	BSTNode* temp = root;
//	q.push(*temp);
//
//	while (!q.empty())
//	{
//		*temp = q.front();
//		cout << temp->getValue() << " ";
//		q.pop();
//
//		if (temp->getLeft())
//			q.push(*temp->getLeft());
//
//		if (temp->getRight())
//			q.push(*temp->getRight());
//
//	}
//}
//
////Tree Height
//int BST::treeHeight()
//{
//
//	queue<BSTNode> q;
//	BSTNode* temp = root;
//	q.push(*temp);
//	int height = 0;
//
//	while (!q.empty())
//	{
//
//		*temp = q.front();
//		cout << temp->getValue();
//		q.pop();
//		height++;
//
//
//		if (temp->getLeft())
//			q.push(*temp->getLeft());
//
//		if (temp->getRight())
//			q.push(*temp->getRight());
//
//	}
//	return height;
//}
//
//
//
//
//
////Main Function
//
//int main()
//{
//	BST tree;
//	char c = ' ';
//
//	cout << "-------------------------------\n";
//	cout << "1) Insert Node\n";
//	cout << "2) Pre-Order Traversal\n";
//	cout << "3) Post-Order Traversal\n";
//	cout << "4) In-Order Traversal\n";
//	cout << "5) Level-Order Traversal\n";
//	cout << "6) Height of Tree\n";
//	cout << "0) For Exit\n";
//	cout << "-------------------------------\n";
//
//
//	do
//	{
//
//		cout << "\nEnter your choice: ";
//		cin >> c;
//		switch (c)
//		{
//		case'1':
//		{
//			cout << "Enter node Value: ";
//			char ch;
//			cin >> ch;
//			tree.insertNode(new BSTNode(ch));
//			break;
//		}
//
//		case'2':
//		{
//
//			cout << "Pre-Order Walk: ";
//			tree.preOrder();
//			cout << endl;
//			break;
//		}
//		case'3':
//		{
//			cout << "Post-Order Walk: ";
//			tree.postOrder();
//			cout << endl;
//			break;
//		}
//
//		case'4':
//		{
//			cout << "In-Order Walk: ";
//			tree.inOrder();
//			cout << endl;
//			break;
//		}
//
//		case'5':
//		{
//			cout << "Level-Order Walk: ";
//			tree.levelOrder();
//			cout << endl;
//			break;
//		}
//
//
//		case'6':
//		{
//			cout << "Height of Tree: ";
//			tree.treeHeight();
//			cout << endl;
//			break;
//		}
//		}
//
//	} while (c != '0');
//
//}