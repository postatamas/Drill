#include "std_lib_facilities.h"

int main()
{
    
    cout << "Enter the name of the person you want to write to:\n";
    string first_name;
    cin >> first_name;
    cout << "Dear " << first_name << ",\n"
         
         << "How are you? I am fine. I miss you.\n"
         << "I wanted to buy a new graphic card.\n"
         << "Unfortunatelly I do not have enough money.\n";
    
    cout << "Please enter the name of someone you both know:\n";
    string friend_name;
    cin >> friend_name;
    cout << "Have you seen " << friend_name << " lately?\n";
    
    cout << "Is this friend a male or a female?\n"
         << "(m/f)?";
    char friend_sex = '0';
    cin >> friend_sex;
    if (friend_sex == 'm')
        cout << "If you see " << friend_name << " please ask him to call me.\n";
             
    if (friend_sex == 'f')
        cout << "If you see " << friend_name << " please ask her to call me.\n";
             
    cout << "How old is " << first_name << "?\n";
    int age;
    cin >> age;
    if (age <= 0) simple_error("you're kidding!");
    if (age > 110) simple_error("you're kidding!");
    
    if (age < 12)
        cout << "Next year you will be " << age+1 << ".\n";
    if (age == 17)
        cout << "Next year you will be able to vote!\n";
    if (age > 70)
        cout << "I hope you are enjoying retirement.\n";
    
    cout << "Yours sincerely,\n\n\nTamás Posta\n";

    keep_window_open();

    return 0;
}