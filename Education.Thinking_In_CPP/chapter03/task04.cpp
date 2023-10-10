#include <iostream>

using namespace std;

int main()
{
    char c;
    while (true)
    {
        cout << "MAIN MENU" << endl;
        cout << "L <- PRESS KEY -> R" << endl;
        cout << "PRESS -> Q <- EXIT" << endl;
        cin >> c;
        switch (c)
        {
        case 'l':
            cout << "LEFT MENU" << endl;
            cout << "A <- PRESS KEY -> B" << endl;
            cout << "PRESS -> Q <- EXIT" << endl;
            cin >> c;
            switch (c)
            {
            case 'a':
                cout << " YOU ABSOLUTELY" << endl;
                break;
            case 'b':
                cout << " YOU BEAUTIFEL" << endl;
                break;
            case 'q':
                cout << "See you later!" << endl;
                return 0;
                break;
            default:
                cout << "error";
                break;
            }
            break;
        case 'r':
            cout << "RIGHT MENU" << endl;
            cout << "A <- PRESS KEY -> B" << endl;
            cout << "PRESS -> Q <- EXIT" << endl;
            cin >> c;
            switch (c)
            {
            case 'a':
                cout << " YOU ABSOLUTELY" << endl;
                break;
            case 'b':
                cout << " YOU BEAUTIFEL" << endl;
                break;
            case 'q':
                cout << "See you later!" << endl;
                return 0;
                break;
            default:
                cout << "error";
                break;
            }
            break;
        case 'q':
            cout << "See you later!" << endl;
            return 0;
        default:
            cout << "error";
            break;
        }
    }
}