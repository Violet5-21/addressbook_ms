//
// Created by Violet on 24-9-5.
//
#include "addressbook.h"

void show_menu()
{
    string star1(40, '*');
    string star2(8, '*');

    cout << star1 << endl;
    cout << star2 << "  1. Add a Contact      " << star2 << endl;
    cout << star2 << "  2. Display Contacts   " << star2 << endl;
    cout << star2 << "  3. Delete a Contact   " << star2 << endl;
    cout << star2 << "  4. Find a Contact     " << star2 << endl;
    cout << star2 << "  5. Change a Contact   " << star2 << endl;
    cout << star2 << "  6. Clear Contacts     " << star2 << endl;
    cout << star2 << "  0. Exit Address Book  " << star2 << endl;
    cout << star1  << endl;
}

void add_a_contact(Person * pa, int pc)
{
    if (pc == MAX)
        cout << "The address book is full.\n";
    else
    {
        cout << "Please enter a name: ";
        string name_t;
        cin >> name_t;
        (pa+pc)->name = name_t;

        cout << "Please enter a sex:\n";
        cout << "1---male\n";
        cout << "0---female\n";
        int sex_t = -1;
        while (cin >> sex_t)
        {
            if (sex_t == 0 || sex_t == 1) {
                (pa+pc)->sex = sex_t;
                break;
            } else
                cout << "Please enter 1 or 0: ";
        }

        cout << "please enter an age: ";
        int age_t = 0;
        while (cin >> age_t)
        {
            if (age_t >= 0)
            {
                (pa+pc)->age = age_t;
                break;
            }
            else
                cout << "please enter a correct age: ";
        }

        cout << "please enter a phone number: ";
        string phone_number_t;
        cin >> phone_number_t;
        (pa+pc)->phone_number = phone_number_t;

        cout << "please enter an address: ";
        string address_t;
        cin >> address_t;
        (pa+pc)->address = address_t;

        cout << "add successfully\n";
        system("pause");
        system("cls");

    }
}

void show_contact(Person * pa, int pc)
{
    if (pc == 0)
        cout << "There is no contact! \n";
    else
    {
        for (int i = 0; i < pc; i++)
        {
            cout << "#" << i+1 << ": \n";
            cout << "name: " << (pa+i)->name << endl;
            cout << "sex: " << ((pa+i)->sex ? "male" : "female") << endl;
            cout << "age: " << (pa+i)->age << endl;
            cout << "phone number: " << (pa+i)->phone_number << endl;
            cout << "address: " << (pa+i)->address << endl;
        }
    }

    system("pause");
    system("cls");
}

int check_a_contact(Person * pa, int pc)
{
    cout << "please enter the contact name which belongs to the person you want to find, change or delete: ";
    string name_t;
    cin >> name_t;
    for (int i = 0; i < pc; ++i)
    {
        if (name_t == (pa+i)->name)
        {
            cout << "Found!\n";
            return i;
        }
    }
    cout << "Not found!\n";
    return 0;
}

void delete_a_contact(Person * pa, int pc)
{
    int i = check_a_contact(pa, pc);
    while (i < pc)
    {
        (pa+i)->name = (pa+i+1)->name;
        (pa+i)->sex = (pa+i+1)->sex;
        (pa+i)->age = (pa+i+1)->age;
        (pa+i)->phone_number = (pa+i+1)->phone_number;
        (pa+i)->address = (pa+i+1)->address;
        ++i;
    }
    cout << "deleted!\n";
    system("pause");
    system("cls");
}

void show_a_contact(Person * pa, int pc)
{
    int i = check_a_contact(pa, pc);
    if (i)
    {
        cout << "#" << i+1 << ": \n";
        cout << "name: " << (pa+i)->name << endl;
        cout << "sex: " << ((pa+i)->sex ? "male" : "female") << endl;
        cout << "age: " << (pa+i)->age << endl;
        cout << "phone number: " << (pa+i)->phone_number << endl;
        cout << "address: " << (pa+i)->address << endl;
    }
    system("pause");
    system("cls");
}

void change_a_contact(Person * pa, int pc)
{
    int i = check_a_contact(pa, pc);
    cout << "Please enter a name: ";
    string name_t;
    cin >> name_t;
    (pa+i)->name = name_t;

    cout << "Please enter a sex:\n";
    cout << "1---male\n";
    cout << "0---female\n";
    int sex_t = -1;
    while (cin >> sex_t)
    {
        if (sex_t == 0 || sex_t == 1)
        {
            (pa+i)->sex = sex_t;
            break;
        } else
            cout << "Please enter 1 or 0: ";
    }

    cout << "please enter an age: ";
    int age_t = 0;
    while (cin >> age_t)
    {
        if (age_t >= 0)
        {
            (pa+i)->age = age_t;
            break;
        }
        else
            cout << "please enter a correct age: ";
    }

    cout << "please enter a phone number: ";
    string phone_number_t;
    cin >> phone_number_t;
    (pa+i)->phone_number = phone_number_t;

    cout << "please enter an address: ";
    string address_t;
    cin >> address_t;
    (pa+i)->address = address_t;

    cout << "add successfully\n";
    system("pause");
    system("cls");
}
