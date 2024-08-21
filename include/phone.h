#include "contact.h"

class Phone
{
    vector<Contact> phoneBook;

    enum command
    {
        add,
        call,
        sms,
        exit
    };
    command userCommdans;

public:
    string userInput;
    void stateControl (string user_input);
    void addContact();
    void callContact();
    void smsContact();
    void exitProgram();
};