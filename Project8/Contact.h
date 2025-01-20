#pragma once
class Contact {
private:
    char phone[20];
    char city[30];
    char country[30];

public:
    Contact();
    Contact(const char* phone, const char* city, const char* country);
    void Show() const;
};