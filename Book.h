#pragma once
#include <cstring>

class Book
{
public:
    Book() = default;
    Book(char title[], char author[], char publishing_house[], char ISBN[], int year, int price);

    char* get_title();
    void set_title(char title[]);

    char* get_author();
    void set_author(char* author);

    char* get_publishing_house();
    void set_publishing_house(char* publishing_house);

    char* get_ISBN();
    void set_ISBN(char* ISBN);

    int get_year();
    void set_year(int year);

    int get_price();
    void set_price(int price);

private:
    char title[21];
    char author[21];
    char publishing_house[21];
    char ISBN[21];
    int year;
    int price;
};