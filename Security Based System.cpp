#include <iostream>
#include <conio.h>
using namespace std;
int a = 0;
struct Register
{
    int id;
    string name, email, password;

} R[25];
void registerAccount()
{
    system("cls");
    char ch;
    cout << " \n ";
    for (int i = 1; i <= 23; i++)
        cout << ch;
    cout << " Security Project ";
    for (int i = 1; i <= 23; i++)
        cout << ch;
    cout << " \n\n\n " << ch << ch << " ENTER USER ID -> ";
    cin >> R[a].id;
    cout << " \n\n\n " << ch << ch << " ENTER USER NAME -> ";
    cin >> R[a].name;
    cout << " \n\n\n " << ch << ch << " ENTER USER EMAIL -> ";
    cin >> R[a].email;
    cout << " \n\n\n " << ch << ch << " ENTER USER PASSWORD -> ";
    do
    {
        ch = getch();
        if (isdigit(ch) || isalpha(ch) || ispunct(ch))
        {
            R[a].password += ch;
            cout << " *";
        }

    } while ((isdigit(ch) || isalpha(ch) || ispunct(ch)));
    a++;
    cout << " \n\n\n " << ch << ch << " ACCOUNT REGISTER SUCCESSFULLY " << ch;
}
void loginAccount()
{
    system("cls");
    char ch;
    cout << " \n ";
    for (int i = 1; i <= 23; i++)
        cout << ch;
    cout << " Security Project ";
    for (int i = 1; i <= 23; i++)
        cout << ch;
    if (a == 0)
    {
        cout << " \n\n " << ch << ch << " NO ANY RECORD FOUND " << ch;
    }
    else
    {
        int found = 0;
        string t_email, t_password;
        cout << " \n\n\n " << ch << ch << " ENTER USER EMAIL ->";
        cin >> t_email;
        cout << " \n\n\n " << ch << ch << " ENTER USER PASSWORD ->";
        do
        {
            ch = getch();
            if (isdigit(ch) || isalpha(ch) || ispunct(ch))
            {
                t_password += ch;
                cout << "*";
            }

        } while ((isdigit(ch) || isalpha(ch) || ispunct(ch)));
        for (int k = 0; k < a; k++)
        {
            if (t_email == R[k].email && t_password == R[k].password)
            {
                cout << " \n\n\n " << ch << ch << " USER ID ->" << R[k].id;
                cout << " \n\n\n " << ch << ch << " USER NAME ->" << R[k].name;
                cout << " \n\n\n " << ch << ch << " USER EMAIL ->" << R[k].email;
                cout << " \n\n\n " << ch << ch << " USER PASSWORD ->" << R[k].password;
                found++;
                break;
            }
        }
        if (found == 0)
        {
            cout << " \n\n\n " << ch << ch << " USER DATA INCORRECT " << ch;
        }
    }
}
void forgotEmail()
{
    system("cls");
    char ch;
    cout << " \n ";
    for (int i = 1; i <= 23; i++)
        cout << ch;
    cout << " Security Project ";
    for (int i = 1; i <= 23; i++)
        cout << ch;
    if (a == 0)
    {
        cout << " \n\n " << ch << ch << " NO ANY RECORD FOUND " << ch;
    }
    else
    {
        int found = 0;
        string t_password;
        cout << " \n\n\n " << ch << ch << " ENTER USER PASSWORD ->";
        do
        {
            ch = getch();
            if (isdigit(ch) || isalpha(ch) || ispunct(ch))
            {
                t_password += ch;
                cout << "*";
            }

        } while ((isdigit(ch) || isalpha(ch) || ispunct(ch)));
        for (int k = 0; k < a; k++)
        {
            if (t_password == R[k].password)
            {
                cout << " \n\n\n " << ch << ch << " USER ID ->" << R[k].id;
                cout << " \n\n\n " << ch << ch << " USER NAME ->" << R[k].name;
                cout << " \n\n\n " << ch << ch << " USER EMAIL ->" << R[k].email;
                cout << " \n\n\n " << ch << ch << " USER PASSWORD ->" << R[k].password;
                found++;
                break;
            }
        }
        if (found == 0)
        {
            cout << " \n\n\n " << ch << ch << " USER DATA INCORRECT " << ch;
        }
    }
}
void forgotPassword()
{
    system("cls");
    char ch;
    cout << " \n ";
    for (int i = 1; i <= 23; i++)
        cout << ch;
    cout << " Security Project ";
    for (int i = 1; i <= 23; i++)
        cout << ch;
    if (a == 0)
    {
        cout << " \n\n " << ch << ch << " NO ANY RECORD FOUND " << ch;
    }
    else
    {
        int found = 0;
        string t_email;
        cout << " \n\n\n " << ch << ch << " ENTER USER EMAIL ->";
        cin >> t_email;
        for (int k = 0; k < a; k++)
        {
            if (t_email == R[k].email)
            {
                cout << " \n\n\n " << ch << ch << " USER ID ->" << R[k].id;
                cout << " \n\n\n " << ch << ch << " USER NAME ->" << R[k].name;
                cout << " \n\n\n " << ch << ch << " USER EMAIL ->" << R[k].email;
                cout << " \n\n\n " << ch << ch << " USER PASSWORD ->" << R[k].password;
                found++;
                break;
            }
        }
        if (found == 0)
        {
            cout << " \n\n\n " << ch << ch << " USER DATA INCORRECT " << ch;
        }
    }
}
main()
{
p:
    system("cls");
    int ascii = 178, choice;
    char ch = ascii;
    cout << "\n";
    for (int i = 1; i <= 23; i++)
        cout << ch;
    cout << " Security Project ";
    for (int i = 1; i <= 23; i++)
        cout << ch;
    cout << " \n\n\n " << ch << ch << " 1.REGISTER ACCOUNT ";
    cout << " \n\n " << ch << ch << " 2.LOGIN ACCOUNT ";
    cout << " \n\n " << ch << ch << " 3.FORGOT EMAIL ";
    cout << " \n\n " << ch << ch << " 4.FORGOT PASSWORD ";
    cout << " \n\n " << ch << ch << " 5.EXIT ";
    cout << " \n\n ";
    for (int i = 1; i <= 22; i++)
        cout << ch;
    cout << " \n\n\n " << ch << ch << " ENTER YOUR CHOICE --> ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        registerAccount();
        break;
    case 2:
        loginAccount();
        break;
    case 3:
        forgotEmail();
        break;
    case 4:
        forgotPassword();
        break;
    case 5:
        exit(0);
    default:
        cout << " \n\n " << ch << ch << " PLEASE SELECT CORRECT OPTION " << ch;
    }
    getch();
    goto p;
}