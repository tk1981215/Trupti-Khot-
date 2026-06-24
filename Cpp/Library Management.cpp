#include <iostream>
#include <string>
using namespace std;

struct Book
{
    int id;
    string title;
    string author;
    bool issued;
};

Book library[100];
int countBooks = 0;

// Add Book
void addBook()
{
    cout << "\nEnter Book ID: ";
    cin >> library[countBooks].id;

    cin.ignore();

    cout << "Enter Book Title: ";
    getline(cin, library[countBooks].title);

    cout << "Enter Author Name: ";
    getline(cin, library[countBooks].author);

    library[countBooks].issued = false;
    countBooks++;

    cout << "\nBook Added Successfully!\n";
}

// Display Books
void displayBooks()
{
    if (countBooks == 0)
    {
        cout << "\nNo Books Available!\n";
        return;
    }

    cout << "\n------ Library Books ------\n";

    for (int i = 0; i < countBooks; i++)
    {
        cout << "\nBook " << i + 1 << endl;
        cout << "ID      : " << library[i].id << endl;
        cout << "Title   : " << library[i].title << endl;
        cout << "Author  : " << library[i].author << endl;

        if (library[i].issued)
            cout << "Status  : Issued\n";
        else
            cout << "Status  : Available\n";
    }
}

// Search Book
void searchBook()
{
    int id;

    cout << "\nEnter Book ID to Search: ";
    cin >> id;

    for (int i = 0; i < countBooks; i++)
    {
        if (library[i].id == id)
        {
            cout << "\nBook Found!\n";
            cout << "Title  : " << library[i].title << endl;
            cout << "Author : " << library[i].author << endl;

            if (library[i].issued)
                cout << "Status : Issued\n";
            else
                cout << "Status : Available\n";

            return;
        }
    }

    cout << "\nBook Not Found!\n";
}

// Issue Book
void issueBook()
{
    int id;

    cout << "\nEnter Book ID to Issue: ";
    cin >> id;

    for (int i = 0; i < countBooks; i++)
    {
        if (library[i].id == id)
        {
            if (library[i].issued)
            {
                cout << "\nBook Already Issued!\n";
            }
            else
            {
                library[i].issued = true;
                cout << "\nBook Issued Successfully!\n";
            }
            return;
        }
    }

    cout << "\nBook Not Found!\n";
}

// Return Book
void returnBook()
{
    int id;

    cout << "\nEnter Book ID to Return: ";
    cin >> id;

    for (int i = 0; i < countBooks; i++)
    {
        if (library[i].id == id)
        {
            if (!library[i].issued)
            {
                cout << "\nBook is Already Available!\n";
            }
            else
            {
                library[i].issued = false;
                cout << "\nBook Returned Successfully!\n";
            }
            return;
        }
    }

    cout << "\nBook Not Found!\n";
}

int main()
{
    int choice;

    do
    {
        cout << "\n========== Library Management System ==========\n";
        cout << "1. Add Book\n";
        cout << "2. Display All Books\n";
        cout << "3. Search Book\n";
        cout << "4. Issue Book\n";
        cout << "5. Return Book\n";
        cout << "6. Exit\n";

        cout << "\nEnter Your Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addBook();
            break;

        case 2:
            displayBooks();
            break;

        case 3:
            searchBook();
            break;

        case 4:
            issueBook();
            break;

        case 5:
            returnBook();
            break;

        case 6:
            cout << "\nThank You!\n";
            break;

        default:
            cout << "\nInvalid Choice!\n";
        }

    } while (choice != 6);

    return 0;
}
