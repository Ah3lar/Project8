#include "College.h"
#include <iostream>


College::College() {
    name[0] = '\0';
}

College::College(const Contact& contact, const char* name) : contact(contact) {
    std::strncpy(this->name, name, sizeof(this->name) - 1);
    this->name[sizeof(this->name) - 1] = '\0';
}

void College::Show() const {
    std::cout << "College Name: " << name << std::endl;
    contact.Show();
}