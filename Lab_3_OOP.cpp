#include <iostream>
#include "Book.h"

using namespace std;

int main()
{
    int max_number_books;
    int number_books = 0;
    cout << "Enter the maximum number of books you can put in the library: ";
    cin >> max_number_books;

    Book* books = new Book[max_number_books]();

    char title[21];
    char author[21];
    char publishing_house[21];
    char ISBN[21];
    int year;
    int price;

    int menu_option = 0;
    int search_option = 0;
    do
    {
        cout << "1. Add a book in the library;" << endl
            << "2. Search for a book in the library;" << endl
            << "0. Exit the program;" << endl
            << "Select an option from the menu: " << endl;
        cin >> menu_option;
        switch (menu_option)
        {
        case 0:
            cout << "The program exited successfully!" << endl;
            exit(0);
            break;
        case 1:
            cout << "Please enter the title, author, the publisher, the ISBN code, the year, then the price: " << endl;
            cin.ignore();
            cin >> title;
            cin >> author;
            cin >> publishing_house;
            cin >> ISBN;
            cin >> year;
            cin >> price;

            books[number_books].set_title(title);
            books[number_books].set_author(author);
            books[number_books].set_publishing_house(publishing_house);
            books[number_books].set_ISBN(ISBN);
            books[number_books].set_year(year);
            books[number_books].set_price(price);
            number_books++;
            break;
        case 2:
            do
            {
                cout << "Search by: " << endl
                    << "1. Title;" << endl
                    << "2. Publisher; " << endl
                    << "3. ISBN;" << endl
                    << "0. Exit the search menu;" << endl;
                cin >> search_option;
                switch (search_option)
                {
                case 0:
                    break;
                case 1:
                    cout << "Enter the title of the books you want to search for: ";
                    cin >> title;
                    for (int i = 0; i < number_books; i++)
                    {
                        if (strcmp(books[i].get_title(), title) == 0)
                        {
                            cout << books[i].get_title() << " "
                                << books[i].get_author() << " "
                                << books[i].get_publishing_house() << " "
                                << books[i].get_ISBN() << " "
                                << books[i].get_year() << " "
                                << books[i].get_price() << " "
                                << endl;
                        }
                    }
                    break;
                case 2:
                    cout << "Enter the publisher of the books you want to search for: ";
                    cin >> publishing_house;
                    for (int i = 0; i < number_books; i++)
                    {
                        if (strcmp(books[i].get_publishing_house(), publishing_house) == 0)
                        {
                            cout << books[i].get_title() << " "
                                << books[i].get_author() << " "
                                << books[i].get_publishing_house() << " "
                                << books[i].get_ISBN() << " "
                                << books[i].get_year() << " "
                                << books[i].get_price() << " "
                                << endl;
                        }
                    }
                    break;
                case 3:
                    cout << "Enter the ISBN of the book you want to search for: ";
                    cin >> ISBN;
                    for (int i = 0; i < number_books; i++)
                    {
                        if (strcmp(books[i].get_ISBN(), ISBN) == 0)
                        {
                            cout << books[i].get_title() << " "
                                << books[i].get_author() << " "
                                << books[i].get_publishing_house() << " "
                                << books[i].get_ISBN() << " "
                                << books[i].get_year() << " "
                                << books[i].get_price() << " "
                                << endl;
                        }
                    }
                    break;
                }
            } while (search_option != 0);
            break;
        default:
            cout << "This option does not exist!" << endl;
            exit(-1);
        }
    } while (menu_option != 0);
}