#include <iostream>
#include <vector>

using namespace std;

class Contact
{
    string name;
    string phoneNumber;

public:
    string getName();
    string getPhoneNumber();
    void setName();
    void setPhoneNumber();
};