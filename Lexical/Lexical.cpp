// Lexical.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using namespace std;


bool is_letter(char);
bool is_digit(char);
bool is_delimeter(char);
void lexical(string);

int main()
{
    string input;
    cout << "Enter string: ";
    getline(cin,input);
    lexical(input);
}


bool is_letter(char ch)
{
    if ((ch >= 'a' && ch <= 'z') ||  (ch == 'A' && ch == 'Z')||ch=='_')
        return true;
    else
        return false;
}


bool is_digit(char ch)
{
    if (ch >= '0' && ch <= '9')
        return true;
    else
        return false;

}

bool is_delimeter(char ch)
{
    if(ch==' '|| ch=='/n'||ch=='/t')
        return true;
    else
        return false;
}




void lexical(string str)
{

    int i = 0;
    int state = 0;
    string lexeme =" ";
    char c = '\0';
    int flag = 1;

    while (str[i] != '\0')
    {
        c = str[i];

        flag = 1;

        switch (state)
        {

        case 0:
        {
            //underscore  
            if (c =='_')
            {
                state = 3;
            }
            //Simple identifier
            if (is_letter(c))
            {
                    state = 1;                             
            }

            else if (is_digit(c))
            {
                state = 4;
            }
            //Punctuations
            else if (c == '(')
            {
                state = 0;
                lexeme = c;
                cout << "Tokken <" << "Bracket: " << lexeme << ">" << endl;
                lexeme = " ";
                flag = 0;
            }
            else if (c == ')')
            {
                state = 0;
                lexeme = c;
                cout << "Tokken <" << "Bracket: " << lexeme << ">" << endl;
                lexeme = " ";
                flag = 0;
            }
            else if (c == '}')
            {
                state = 0;
                lexeme = c;
                cout << "Tokken <" << "Curly Bracket:: " << lexeme << ">" << endl;
                lexeme = " ";
                flag = 0;
            }
            else if (c == '{')
            {
                state = 0;
                lexeme = c;
                cout << "Tokken <" << "Curly Bracket: " << lexeme << ">" << endl;
                lexeme = " ";
                flag = 0;
            }
            else if (c == ']')
            {
                state = 0;
                lexeme = c;
                cout << "Tokken <" << "Square Bracket: " << lexeme << ">" << endl;
                lexeme = " ";
                flag = 0;
            }
            else if (c == '[')
            {
                state = 0;
                lexeme = c;
                cout << "Tokken <" << "Square Bracket: " << lexeme << ">" << endl;
                lexeme = " ";
                flag = 0;
            }
            else if (c == ';')
            {
                state = 0;
                lexeme = c;
                cout << "Tokken <" << "Semicolon: " << lexeme << ">" << endl;
                lexeme = " ";
                flag = 0;
            }
            else if (c == ',')
            {
                state = 0;
                lexeme = c;
                cout << "Tokken <" << "comma: " << lexeme << ">" << endl;
                lexeme = " ";
                flag = 0;
            }

            //Operators
            else if (c == '/')
            {
                if (str[i + 1] == '/')
                {
                    state = 46;
                    lexeme = lexeme + c;
                }
                else if(str[i+1]!='*')
                {
                    state = 0;
                    lexeme = c;
                    cout << "Tokken <" << "Division OP: " << lexeme << ">" << endl;
                    lexeme = " ";
                    flag = 0;
                }
                
            }
            else if (c == '*')
            {
                if (str[i -1] == '/')
                {
                    state = 49;
                }
                else
                {
                    state = 0;
                    lexeme = c;
                    cout << "Tokken <" << "Mul OP: " << lexeme << ">" << endl;
                    lexeme = " ";
                    flag = 0;
                }
                
            }
            else if (c == '!')
            {
                state = 0;
                lexeme = c;
                cout << "Tokken <" << "Not OP: " << lexeme << ">" << endl;
                lexeme = " ";
                flag = 0;
            }
            else if (c == '&')
            {
                state = 0;
                lexeme = c;
                cout << "Tokken <" << "AND OP: " << lexeme << ">" << endl;
                lexeme = " ";
                flag = 0;
            }
            else if (c == '<')
            {
                state = 19;
            }
            else if (c == '>')
            {
                state = 20;
            }
            else if (c == '=')
            {
                state = 21;
            }
            else if (c =='+')
            {
                state = 23;
            }
            else if (c == '-')
            {
                state = 24;
            }
            //String and Character litreals
                       /* else if (c ='')
                        {
                        state = 13;
                        }*/
            else if (c == '"')
            {
                state = 10;
            }


            //float literal
            else if (c == '.')
            {
                state = 6;
            }

            //Comment
            else if (c == '/')
            {
                state = 46;
            }
            else if (is_delimeter(c))
            {
                flag = 0;
            }
            else
            {
                cout << "Invalid string\n";
                break;
            }
            break;
        }



        case 1:
        {
     
            if (is_letter(c) || is_digit(c))
            {
                state = 1;
            }
            else      
            {
               
                state = 0;
                if (lexeme == "int"||  lexeme == "float" || lexeme == "double"
                    || lexeme == "char" || lexeme == "if" || lexeme == "while" || lexeme == "for"
                    || lexeme == "break" || lexeme == "switch" || lexeme == "case")
                {
                    
                    cout << "Tokken <" << "Keyword: " << lexeme << ">" << endl;

                }
                
                else

                {
                   
                    cout << "Tokken <" << "Identifier: " << lexeme << ">" << endl;
                }

                lexeme = " ";
                continue;
            }
            
            break;
        }

 
        case 3:
        {
            if (is_letter(c) || is_digit(c))
            {
                state = 3;
            }
            else
            {
                state = 0;
                cout << "Tokken <" << "Identifier: " << lexeme << ">" << endl;
                lexeme = " ";
                continue;
            }

            break;
        }
        //float and int 
        case 4:
        {

            if (is_digit(c))
            {
                state = 4;
            }
            else if (c == '.')
            {
                state = 17;
            }
            else
            {
                state = 0;
                cout << "Tokken <" << "INT literal: " << lexeme << ">" << endl;
                lexeme = " ";
                continue;
            }
            break;
        }

        case 17:
        {
            if (is_digit(c))
            {
                state = 17;
            }
            else
            {
                state = 0;
                cout << "Tokken <" << "Float literal: " << lexeme << ">" << endl;
                lexeme = " ";
                continue;
            }
            break;
        }
     
        

        //comment
        case 46:
        {
            if (c == '/')
            {
                state = 0;
                cout << "Tokken <" << "Single Line Comment: " << lexeme << ">" << endl;
                continue;

            }
            else if (c == '*')
            {
                state = 49;
            }

            break;
        }
        case 49:
        {

            if (c == '*')
            {
                state = 51;
            }
            else
            {
                state = 49;
            }

            break;
        }
        case 51:
        {

            if (c == '/')
            {
                state = 0;
                cout << "Tokken <" << "Multi Line Comment: " << lexeme << ">" << endl;
                lexeme = " ";
            }
            break;
        }

        //float
        case 6:
        {
            if (is_digit(c))
            {
               
                state = 6;
            }
            else if(str[i-1]==is_digit(c))
            {
                state = 0;
                cout << "Tokken <" << "Float Literal: " << lexeme << ">" << endl;
                lexeme = " ";
                continue;
            }
            break;
        }
       

        //decrement or SUB
        case 24:
        {
            if (c == '-')
            {
                state = 0;
                cout << "Tokken <" << "Decrement OP: " << lexeme << ">" << endl;
                lexeme = " ";
            }
            else
            {
                state = 0;
                cout << "Tokken <" << "Sub OP: " << lexeme << ">" << endl;
                lexeme = " ";
                continue;
            }
            break;
        }

        //increment or ADD
        case 23:
        {
            if (c == '+')
            {
                state = 0;
                cout << "Tokken <" << "Incremnet OP: " << lexeme << ">" << endl;
                lexeme = " ";
            }
            else
            {
                state = 0;
                cout << "Tokken <" << "ADD OP: " << lexeme << ">" << endl;
                lexeme = " ";
                continue;
            }
            break;
        }
        //Less or less Equal
        case 19:
        {
            if (c == '=')
            {
                state = 0;
                cout << "Tokken <" << "Less than Equal OP: " << lexeme << ">" << endl;
                lexeme = " ";
            }
            else
            {
                state = 0;
                cout << "Tokken <" << "Less than OP: " << lexeme << ">" << endl;
                lexeme = " ";
                continue;
            }
            break;
        }
        //greater or greater Equal
        case 20:
        {
            if (c == '=')
            {
                state = 0;
                cout << "Tokken <" << "Greater than Equal To OP: " << lexeme << ">" << endl;
                lexeme = " ";
            }
            else
            {
                state = 0;
                cout << "Tokken <" << "Greater than OP: " << lexeme << ">" << endl;
                lexeme = " ";
                continue;
            }
            break;
        }

        //Equal to or Equal equal
        case 21:
        {
            if (c == '=')
            {
                state = 0;
                cout << "Tokken <" << "== OP: " << lexeme << ">" << endl;
                lexeme = " ";
            }
            else
            {
                state = 0;
                cout << "Tokken <" << "= OP: " << lexeme << ">" << endl;
                lexeme = " ";
                continue;
            }
            break;
        }

        //string

        case 10:
        {
            if (is_digit(c) || is_letter(c))
            {
                state = 10;
            }
            else if (c == '"')
            {
                state = 0;
                cout << "Tokken <" << "String literal: " << lexeme << ">" << endl;
                lexeme = " ";
                continue;
            }
            break;
        }


        default:
            cout << "Error: ";
        }

       if (flag)
        {
            lexeme = lexeme + c;
        }
        
        i++;
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
