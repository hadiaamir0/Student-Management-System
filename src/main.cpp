#include <iostream>

using namespace std;

int main()
{
    int choice;

    do
    {
        cout << "\n================================";
        cout << "\n STUDENT MANAGEMENT SYSTEM";
        cout << "\n================================";

        cout << "\n1. Add Student";
        cout << "\n2. View Students";
        cout << "\n3. Search Student";
        cout << "\n4. Update Student";
        cout << "\n5. Delete Student";
        cout << "\n6. Exit";

        cout << "\n\nEnter Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "\nAdd Student";
                break;

            case 2:
                cout << "\nView Students";
                break;

            case 3:
                cout << "\nSearch Student";
                break;

            case 4:
                cout << "\nUpdate Student";
                break;

            case 5:
                cout << "\nDelete Student";
                break;

            case 6:
                cout << "\nGoodbye!";
                break;

            default:
                cout << "\nInvalid Choice";
        }

    } while(choice != 6);

    return 0;
}