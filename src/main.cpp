#include "phone.h"

int main()
{
    Phone* phone = new Phone();
    string user_input;
    while (user_input != "exit")
    {
        cout << "Input command: ";
        cin >> user_input;
        phone->stateControl(user_input);
    }
    delete phone;
}
