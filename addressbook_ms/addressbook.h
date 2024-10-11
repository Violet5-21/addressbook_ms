//
// Created by Violet on 24-9-5.
//

#ifndef ADDRESS_BOOK_ADDRESS_BOOK_H
#define ADDRESS_BOOK_ADDRESS_BOOK_H

#include <iostream>
#include <string>

using namespace std;

const int MAX = 1000;

struct Person
{
    string name;
    unsigned short sex = 0;
    unsigned short age = 0;
    string phone_number;
    string address;
};

void show_menu();
void add_a_contact(Person * pa, int pc);
void show_contact(Person * pa, int pc);
int check_a_contact(Person * pa, int pc);
void delete_a_contact(Person * pa, int pc);
void show_a_contact(Person * pa, int pc);
void change_a_contact(Person * pa, int pc);

#endif //ADDRESS_BOOK_ADDRESS_BOOK_H
