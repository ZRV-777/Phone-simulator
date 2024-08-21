#include "phone.h"

void Phone::stateControl(string user_input)
{
    if (user_input == "add")
        userCommdans = Phone::add;
    else if (user_input == "call")
        userCommdans = Phone::call;
    else if  (user_input == "sms")
        userCommdans = Phone::sms;
    else if (user_input == "exit")
        userCommdans = Phone::exit;
    else
    {
        cerr << "Incorrect command!" << endl;
        cout << "Input command: ";
        cin >> user_input;
    }

    if (userCommdans == Phone::add)
        addContact();
    else if (userCommdans == Phone::call)
        callContact();
    else if (userCommdans == Phone::sms)
        smsContact();
    else if (userCommdans == Phone::exit)
        exitProgram();
}

void Phone::addContact()
{
    Contact contact;
    contact.setName();
    contact.setPhoneNumber();
    phoneBook.push_back(contact);
}

void Phone::callContact()
{
    string user_input;
    cout << "Enter name or phone number of contact: ";
    cin >> user_input;
    for (int i = 0; i < phoneBook.size(); i++)
    {
        if (user_input == phoneBook[i].getName() || user_input == phoneBook[i].getPhoneNumber())
        {
            cout << "Calling " << phoneBook[i].getPhoneNumber() << "..." << endl;
        }
        else
        {
            cerr << "Contact is not found!" << endl;
        }
    }
}

void Phone::smsContact()
{
    string user_input;
    string message;
    cout << "Enter name or phone number of contact: ";
    cin >> user_input;
    for (int i = 0; i < phoneBook.size(); i++)
    {
        if (user_input == phoneBook[i].getName() || user_input == phoneBook[i].getPhoneNumber())
        {
            cout << "Enter message: ";
            cin >> message;
        }
        else
        {
            cerr << "Contact is not found!" << endl;
        }
    }
    cout << "Message sent" << endl;
}

void Phone::exitProgram()
{
    cout << "Goodbye!" << endl;
}
