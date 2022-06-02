// Tik Tak Toe.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// Tic Tac Toe.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream> 
#include <string>
using namespace std;
const int SIZE = 3;
char a[SIZE][SIZE] = { {'1','2','3'} ,{'4','5','6'}, {'7','8','9'} };
int p1, p2;

void skectch()
{
    system("cls");
    cout << "\n\n\t\t\t\t          Tik Tak Toe\n\n";
    cout << "\t\t\t\t" << "  ________ _________ ________\n";
    cout << "\t\t\t\t" << " |        |         |        |\n ";
    cout << "\t\t\t\t" << " |" << "    " << a[0][0] << "   |" << "    " << a[0][1] << "    |" << "    " << a[0][2] << "   |\n";
    cout << "\t\t\t\t" << " |________ _________ ________|\n";
    cout << "\t\t\t\t" << " |        |         |        |\n ";
    cout << "\t\t\t\t" << " |" << "    " << a[1][0] << "   |" << "    " << a[1][1] << "    |" << "    " << a[1][2] << "   |\n";
    cout << "\t\t\t\t" << " |________ _________ ________|\n";
    cout << "\t\t\t\t" << " |        |         |        |\n ";
    cout << "\t\t\t\t" << " |" << "    " << a[2][0] << "   |" << "    " << a[2][1] << "    |" << "    " << a[2][2] << "   |\n";
    cout << "\t\t\t\t" << " |________ _________ ________|\n\n";

}

void toss()
{
    int s;
    cout << "\n\t\t\t\tPress any number to start the game:\t\t";
    cin >> s;
    char toss;
    cout << "\n\t\t\t\tPress " << "'h'" << "for head and " << "'t' " << "for Tail:\t\t";
    while (1)
    {
        cin >> toss;
        switch (toss)
        {
        case 'h':  if (s % 2 == 0)
        {
            cout << "\n\t\t\t\t\tHead Won the toss\n\n"; break;
        }
        case 't':  if (s % 2 >= 0)
        {
            cout << "\n\t\t\t\t\tTail Won the toss\n\n"; break;
        }
        default:
        {
            cout << "\n\tInvalid Input\n"; break;
        }
        }
        if (toss == 'h' || toss == 't')
        {
            break;
        }
        else
        {
            switch (toss)
            {
            case 'h':  if (s % 2 == 0)
            {
                cout << "\nHead Won the toss\n\n\t"; break;
            }
            case 't':  if (s % 2 >= 0)
            {
                cout << "\nTail Won the toss\n\n\t"; break;
            }
            }
        }
    }

}

string player_1(string name1)
{
    cout << "Player 1['X']:\t" << name1 << "\n";
    cin >> p1;
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            if (p1 == a[i][j])
                break;
        }
    }
    return name1;
}

void check_p1()
{
    string name1;
    switch (p1)
    {
    case 1:

        if (a[0][0] == 'X' || a[0][0] == 'O')
        {
            cout << "1 is already filled choose another number\n";
            player_1(name1);
            check_p1();
        }
        else
            a[0][0] = 'X';  break;
    case 2:
        if (a[0][1] == 'X' || a[0][1] == 'O')
        {
            cout << "2 is already filled choose another number\n";
            player_1(name1);
            check_p1();
        }
        else   a[0][1] = 'X';   break;
    case 3:
        if (a[0][2] == 'X' || a[0][2] == 'O')
        {
            cout << "3 is already filled choose another number\n";
            player_1(name1);
            check_p1();
        }
        else  a[0][2] = 'X';   break;
    case 4:
        if (a[1][0] == 'X' || a[1][0] == 'O')
        {
            cout << "4 is already filled choose another number\n";
            player_1(name1);
            check_p1();
        }
        else   a[1][0] = 'X';   break;
    case 5:
        if (a[1][1] == 'X' || a[1][1] == 'O')
        {
            cout << "5 is already filled choose another number\n";
            player_1(name1);
            check_p1();
        }
        else   a[1][1] = 'X';   break;
    case 6:
        if (a[1][2] == 'X' || a[1][2] == 'O')
        {
            cout << "6 is already filled choose another number\n";
            player_1(name1);
            check_p1();
        }
        else   a[1][2] = 'X';   break;
    case 7:
        if (a[2][0] == 'X' || a[2][0] == 'O')
        {
            cout << "7 is already filled choose another number\n";
            player_1(name1);
            check_p1();
        }
        else   a[2][0] = 'X';   break;
    case 8:
        if (a[2][1] == 'X' || a[2][1] == 'O')
        {
            cout << "8 is already filled choose another number\n";
            player_1(name1);
            check_p1();
        }
        else   a[2][1] = 'X';   break;
    case 9:
        if (a[2][2] == 'X' || a[2][2] == 'O')
        {
            cout << "9 is already filled choose another number\n";
            player_1(name1);
            check_p1();
        }
        else   a[2][2] = 'X';   break;
    default:
    {
        {
            cout << "It is already filled choose another number\n";
            player_1(name1);
            check_p1();
        }
    }
    }
}

string player_2(string name2)
{
    cout << "Player 2['O']:\t" << name2 << "\n";
    cin >> p2;
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            if (p2 == a[i][j])
                break;
        }
    }

    return name2;
}

void check_p2()
{
    string name2;
    switch (p2)
    {
    case 1:

        if (a[0][0] == 'X' || a[0][0] == 'O')
        {
            cout << "1 is already filled choose another number\n";
            player_2(name2);
            check_p2();
        }
        else
            a[0][0] = 'O';  break;
    case 2:
        if (a[0][1] == 'X' || a[0][1] == 'O')
        {
            cout << "2 is already filled choose another number\n";
            player_2(name2);
            check_p2();
        }
        else   a[0][1] = 'O';   break;
    case 3:
        if (a[0][2] == 'X' || a[0][2] == 'O')
        {
            cout << "3 is already filled choose another number\n";
            player_2(name2);
            check_p2();
        }
        else  a[0][2] = 'O';   break;
    case 4:
        if (a[1][0] == 'X' || a[1][0] == 'O')
        {
            cout << "4 is already filled choose another number\n";
            player_2(name2);
            check_p2();
        }
        else   a[1][0] = 'O';   break;
    case 5:
        if (a[1][1] == 'X' || a[1][1] == 'O')
        {
            cout << "5 is already filled choose another number\n";
            player_2(name2);
            check_p2();
        }
        else   a[1][1] = 'O';   break;
    case 6:
        if (a[1][2] == 'X' || a[1][2] == 'O')
        {
            cout << "6 is already filled choose another number\n";
            player_2(name2);
            check_p2();
        }
        else   a[1][2] = 'O';   break;
    case 7:
        if (a[2][0] == 'X' || a[2][0] == 'O')
        {
            cout << "7 is already filled choose another number\n";
            player_2(name2);
            check_p2();
        }
        else   a[2][0] = 'O';   break;
    case 8:
        if (a[2][1] == 'X' || a[2][1] == 'O')
        {
            cout << "8 is already filled choose another number\n";
            player_2(name2);
            check_p2();
        }
        else   a[2][1] = 'O';   break;
    case 9:
        if (a[2][2] == 'X' || a[2][2] == 'O')
        {
            cout << "9 is already filled choose another number\n";
            player_2(name2);
            check_p2();
        }
        else   a[2][2] = 'O';   break;
    default:
    {
        {
            cout << "It is already filled choose another number\n";
            player_2(name2);
            check_p2();
        }
    }
    }
}

bool win1()
{

    if (a[0][0] == 'X' && a[0][1] == 'X' && a[0][2] == 'X')
        return true;
    else if (a[1][0] == 'X' && a[1][1] == 'X' && a[1][2] == 'X')
        return true;
    else if (a[2][0] == 'X' && a[2][1] == 'X' && a[2][2] == 'X')
        return true;
    else if (a[0][0] == 'X' && a[1][0] == 'X' && a[2][0] == 'X')
        return true;
    else if (a[0][1] == 'X' && a[1][1] == 'X' && a[2][1] == 'X')
        return true;
    else if (a[0][2] == 'X' && a[1][2] == 'X' && a[2][2] == 'X')
        return true;
    else if (a[0][0] == 'X' && a[1][0] == 'X' && a[2][0] == 'X')
        return true;
    else if (a[0][0] == 'X' && a[1][1] == 'X' && a[2][2] == 'X')
        return true;
    else if (a[0][2] == 'X' && a[1][1] == 'X' && a[2][0] == 'X')
        return true;
    else
        return false;
}

bool win2()
{
    if (a[0][0] == 'O' && a[0][1] == 'O' && a[0][2] == 'O')
        return true;
    else if (a[1][0] == 'O' && a[1][1] == 'O' && a[1][2] == 'O')
        return true;
    else if (a[2][0] == 'O' && a[2][1] == 'O' && a[2][2] == 'O')
        return true;
    if (a[0][0] == 'O' && a[1][0] == 'O' && a[2][0] == 'O')
        return true;
    if (a[0][1] == 'O' && a[1][1] == 'O' && a[2][1] == 'O')
        return true;
    if (a[0][2] == 'O' && a[1][2] == 'O' && a[2][2] == 'O')
        return true;
    else if (a[0][0] == 'O' && a[1][1] == 'O' && a[2][2] == 'O')
        return true;
    else if (a[0][2] == 'O' && a[1][1] == 'O' && a[2][0] == 'O')
        return true;
    else
        return false;
}


int main()
{
    int n = 0;
    cout << "\t\t          -------           -------            --------                \n";
    cout << "\t\t             |   '   <<<<      |   <>    <<<<      |   __    ___       \n";
    cout << "\t\t             |   |   |         |  <__>   |         |  |  |  |__        \n";
    cout << "\t\t             |   |   <<<<      | <    >  <<<<      |  |__|  |___       \n";
    toss();
    string name1, name2;
    cout << "\t\t\t\t\Enter Name of Player 1:\t\t\t\t";
    cin >> name1;
    cout << "\n\n";
    cout << "\t\t\t\tEnter Name of Player 2:\t\t\t\t";
    cin >> name2;
    system("cls");
    skectch();
    while (n != 5)
    {
        n++;
        player_1(name1);
        check_p1();
        skectch();
        if (win1() == true)
        {
            cout << "Congratulaions: " << name1 << " You Won the Match\n";
            break;
        }
        if (n == 5)
        {
            cout << "Match Draw";
            break;
        }
        player_2(name2);
        check_p2();
        skectch();
        if (win2() == true)
        {
            cout << "Congratulaions: " << name2 << " You Won the Match\n";
            break;
        }


    }
}




// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
