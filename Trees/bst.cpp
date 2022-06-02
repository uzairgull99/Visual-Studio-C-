//
//#include"bst.h"
//#include <string>
//#include<iostream>
//#include <stack> 
//#include<queue>
//using namespace std;
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
//void BSTNode::setLeft(BSTNode *l)
//{
//	left = l;
//}
//
//void BSTNode::setRight(BSTNode *r)
//{
//	right = r;
//}
//
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
//
//
//BST::BST()
//{
//	root = NULL;
//}
//
//
////void BST::insertNode(BSTNode n)
////{
////	BSTNode* newNode = new BSTNode;
////	newNode->setValue(n.getValue());
////	newNode->setLeft(NULL);
////	newNode->setRight(NULL);
////
////	insert(root, newNode);
////
////}
////
////void BST::insert (BSTNode*& root,BSTNode*& node)
////{
////	if (root == NULL)
////	{
////		root = node;
////	}
////	else if (root->getValue() < node->getValue())
////	{
////		BSTNode* temp = root->getRight();
////		insert(temp, node);
////	}
////	else if (root->getValue() > node->getValue())
////	{
////		BSTNode* temp = root->getLeft();
////		insert(temp, node);
////	}
////
////}
//
//
//
//void BST::insertNode(BSTNode* newNode)
//{
//	
//
//	if (root== NULL)
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
//void BST::inorder(BSTNode *r)
//{
//	if (r!=NULL)
//	{
//		inorder(r->getLeft());
//		cout << r->getValue();
//		inorder(r->getRight());
//	}
//}
//
//void BST::inorderWalk()
//{
//	inorder(root);
//}
//
//
//
//
//
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
//			while (temp!=NULL)
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
//		temp =& s.top();
//		cout << temp->getValue()<<" ";
//		s.pop();
//		temp = temp->getRight();
//		
//	}
//}
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
//			temp = &s.top();
//			s.pop();
//
//			
//	}
//}
//
//
//void BST::postOrder()
//{
//	stack<BSTNode> s1,s2;
//	BSTNode* temp=root;
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
//int BST::treeHeight()
//{
//
//	queue<BSTNode> q;
//	BSTNode* temp = root;
//	q.push(*temp);
//	int height = 0;
//
//		while (!q.empty())
//		{
//			
//			*temp = q.front();
//			cout << temp->getValue();
//			q.pop();
//			height++;
//			
//
//			if (temp->getLeft())
//				q.push(*temp->getLeft());
//
//			if (temp->getRight())
//				q.push(*temp->getRight());
//
//		}
//		return height;
//	}
//		
//
//
//void BST ::levelOrder()
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