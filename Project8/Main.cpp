#include <iostream>
#include "Contact.h"
#include "College.h"

int main() {
    Contact contact("123-456-7890", "Odessa", "Ukraine");
    College college(contact, "Odessa Polytechnic Institute");
    college.Show();
    return 0;
}