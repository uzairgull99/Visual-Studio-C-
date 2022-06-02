// Trees.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//#include <iostream>
//#include"bst.h"
//using namespace std;
//
//int main()
//{
//    BST tree;
//    char c=' ';
//   
//    cout << "-------------------------------\n";
//    cout << "1) Insert Node\n";
//    cout << "2) Pre-Order Traversal\n";   
//    cout << "3) Post-Order Traversal\n";
//    cout << "4) In-Order Traversal\n";
//    cout << "5) Level-Order Traversal\n";
//    cout << "6) Height of Tree\n";
//    cout << "0) For Exit\n";
//    cout << "-------------------------------\n";
//
//
//    do
//    {
//        
//        cout << "\nEnter your choice: ";
//        cin >> c;
//        switch (c)
//        {
//        case'1':
//        {
//            cout << "Enter node Value: ";
//            char ch;
//            cin >> ch;
//            tree.insertNode(new BSTNode(ch));
//            break;
//        }
//        
//        case'2':
//        {
//           
//            cout << "Pre-Order Walk: ";
//            tree.preOrder();
//            cout << endl;
//            break;
//        }
//        case'3':
//        {
//            cout << "Post-Order Walk: ";
//            tree.postOrder();
//            cout << endl;
//            break;
//        }
//        
//        case'4':
//        {
//            cout << "In-Order Walk: ";
//            tree.inOrder();
//            cout << endl;
//            break;
//        }
//        
//        case'5':
//        {
//            cout << "Level-Order Walk: ";
//            tree.levelOrder();
//            cout << endl;
//            break;
//        }
//     
//
//        case'6':
//        {
//            cout << "Height of Tree: ";
//            tree.treeHeight();
//            cout << endl;
//            break;
//        }  
//        }
//
//    } while(c!='0');
//   
//}






// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
