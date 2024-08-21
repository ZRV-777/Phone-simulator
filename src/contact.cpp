#include "contact.h"

string Contact::getName()
{
    return name;
}

string Contact::getPhoneNumber()
{
    return phoneNumber;
}

void Contact::setName()
{
    cout << "Enter name: ";
    cin >> name;
}

void Contact::setPhoneNumber()
{
    string input_number;
    cout << "Enter phone number (+7 <10 digits>): ";
    cin >> input_number;

    if (input_number.length() != 12)
    {
        cout << "Invalid phone number length" << endl;
    }
    else
    {
        for (int i = 0; i < 2; i++)
        {
            if (phoneNumber[0] != '+' || phoneNumber[1] != '7')
            {
                cerr << "Incorrect format of phone number (+7)" << endl;
                cout << "Enter phone number (+7 <10 digits>): ";
                cin >> input_number;
            }
            for (int i = 2; i < phoneNumber.size(); i++)
            {
                if (phoneNumber[i] < '0' || phoneNumber[i] > '9')
                {
                    cerr << "Incorrect format of phone number" << endl;
                    cout << "Enter phone number (+7 <10 digits>): ";
                    cin >> input_number;
                }
                else
                {
                    phoneNumber = input_number;
                }
            }
        }
    }
}