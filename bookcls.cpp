#include <iostream>
#include <string>
using namespace std;

class LibraryBook
{
    string bookName;
    string author;
    bool issued;

public:

    LibraryBook(string name, string auth)
    {
        bookName = name;
        author = auth;
        issued = false;
    }

    
    void issueBook()
    {
        if (!issued)
        {
            issued = true;
            cout << "Book issued successfully!" << endl;
        }
        else
        {
            cout << "Book is already issued!" << endl;
        }
    }

  
    void returnBook()
    {
        if (issued)
        {
            issued = false;
            cout << "Book returned successfully!" << endl;
        }
        else
        {
            cout << "Book was not issued!" << endl;
        }
    }

    void displayBook()
    
    {
        cout << "\nBook Name: " << bookName << endl;
        cout << "Author: " << author << endl;

        if (issued)
            cout << "Status: Issued" << endl;
        else
            cout << "Status: Available" << endl;
    }
};

int main()
{
    LibraryBook book("C++ Programming", "Bjarne Stroustrup");

    int choice;

    do
    {
        cout << "\n--- Library Menu ---" << endl;
        cout << "1. Issue Book" << endl;
        cout << "2. Return Book" << endl;
        cout << "3. Display Book" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                book.issueBook();
                break;

            case 2:
                book.returnBook();
                break;

            case 3:
                book.displayBook();
                break;

            case 4:
                cout << "Exiting program..." << endl;
                break;

            default:
                cout << "Invalid choice!" << endl;
        }

    } while (choice != 4);

    return 0;
}



