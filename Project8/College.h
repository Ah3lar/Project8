#pragma once
#include "Contact.h"

class College {
private:
    Contact contact;
    char name[50];

public:
    College();
    College(const Contact& contact, const char* name);
    void Show() const;
};
