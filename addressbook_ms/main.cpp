#include "addressbook.h"

int main()
{
    show_menu();

    Person per_arr[MAX];
    int per_cnt = 0;

    unsigned short select;
    while (cin >> select && select)
    {
        switch (select)
        {
            case 1:
                add_a_contact(per_arr, per_cnt);
                ++per_cnt;
                break;
            case 2:
                show_contact(per_arr, per_cnt);
                break;
            case 3:
                delete_a_contact(per_arr, per_cnt);
                --per_cnt;
                break;
            case 4:
                show_a_contact(per_arr, per_cnt);
                break;
            case 5:
                change_a_contact(per_arr, per_cnt);
                break;
            case 6:
                per_cnt = 0;
                cout << "All contacts deleted!\n";
                system("pause");
                system("cls");
                break;
            default:
                cout << "Please enter an int number (0-6): ";
        }
    }
    cout << "Thank you!\n";

    return 0;
}
