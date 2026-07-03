#include <iostream>
#include <string>
using namespace std;

int main() {
    int attempts = 3;
    string password = "p2Ocx45";
    string userpass;
    int useractions;
    int useractions2;
    int useractions3;
    int useractions4 = 0;
    bool terminalHacked = false;
    while (terminalHacked == false) {
        cout << "The terminal asks for a password\n";
        cout << "What are you doing?\n";
        cout << "1) Enter password\n";
        cout << "2) Explore the hard drive\n";
        cin >> useractions;
        if (useractions == 1) {
        while(attempts > 0) {
            cout << "Please enter password:\n";
            cin >> userpass;
            if (userpass != password) {
                    cout << "Wrong! Please try again.\n";
                    attempts = attempts - 1;
                } else if (userpass == password) {
                cout << "Welcome!\nYou hacked the terminal!\n";
                return 0;
            }
            }
        }
        if(attempts == 0) {
            cout << "You've run out of attempts.\nGame over.\n";
            return 0;
        }
        if (useractions == 2) {
            cout << "Where will you look?\n";
            cout << "1) In the Trash.\n";
            cout << "2) In Desktop Folders.\n";
            cout << "3) In Private Messages.\n";
            cin >> useractions2;
            if (useractions2 == 1) {
                cout << "You find a delete file.\nOpen it?\n";
                cout << "1) Yes.\n";
                cout << "2) No.\n";
                cin >> useractions3;
                if (useractions3  == 1) {
                    cout << "It was a hidden virus! Terminal is completely blocked.\nGame over.\n";
                    return 0;
                } else if(useractions3 == 2) {
                    cout << "Where will you look now?\n";
                    cin >> useractions2;
                }
            }
            if (useractions2 == 2) {
                cout << "There is nothing here that could help you.\nWhere will you look now?\n";
                cin >> useractions2;
            
            }
            if (useractions2 == 3) {
             cout << "You find a password in the archived chat!\n Password: p2Ocx45\n Do you want enter password in terminal?\n";
                cout << "1) Yes";
                cin >> useractions4;
            }
        }
        if (useractions4 == 1) {
            cout << "Going back\n";
        }
    }
    return 0;
}
