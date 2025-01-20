#include <iostream>
#include "Contact.h"

Contact::Contact() {
    phone[0] = '\0';
    city[0] = '\0';
    country[0] = '\0';
}

Contact::Contact(const char* phone, const char* city, const char* country) {
    std::strncpy(this->phone, phone, sizeof(this->phone) - 1);
    this->phone[sizeof(this->phone) - 1] = '\0';
    std::strncpy(this->city, city, sizeof(this->city) - 1);
    this->city[sizeof(this->city) - 1] = '\0';
    std::strncpy(this->country, country, sizeof(this->country) - 1);
    this->country[sizeof(this->country) - 1] = '\0';
}

void Contact::Show() const {
    std::cout << "Phone: " << phone << "\nCity: " << city << "\nCountry: " << country << std::endl;
}