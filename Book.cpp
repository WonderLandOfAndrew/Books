#include "Book.h"

Book::Book(char title[], char author[], char publishing_house[], char ISBN[], int year, int price)
{
    strcpy_s(this->title, title);
    strcpy_s(this->author, author);
    strcpy_s(this->publishing_house, publishing_house);
    strcpy_s(this->ISBN, ISBN);
    this->year = year;
    this->price = price;
}

char* Book::get_title() {
    return (this->title);
}
void Book::set_title(char title[]) {
    strcpy_s(this->title, title);
}

char* Book::get_author() {
    return (this->author);
}
void Book::set_author(char* author) {
    strcpy_s(this->author, author);
}

char* Book::get_publishing_house() {
    return (this->publishing_house);
}
void Book::set_publishing_house(char* publishing_house) {
    strcpy_s(this->publishing_house, publishing_house);
}

char* Book::get_ISBN() {
    return (this->ISBN);
}
void Book::set_ISBN(char* ISBN) {
    strcpy_s(this->ISBN, ISBN);
}

int Book::get_year() {
    return (this->year);
}
void Book::set_year(int year) {
    this->year = year;
}

int Book::get_price() {
    return (this->year);
}
void Book::set_price(int price) {
    this->price = price;
}