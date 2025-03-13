#include <iostream>
using namespace std;

int main()
{
	// int - ціле число
	// double - дійсне число
    // string - рядок тексту

    // синтаксис створення змінної:
    // тип_даних ідентифікатор = ініціалізітор;

    cout << "What is your name? ";
    string name;
    cin >> name; //input(name), програма призупиняє свою роботу.
    cout << "Hello!, " << name << "!\n";

    cout << "How old are you? ";
    int age; // створення змінної
    cin >> age; // програма призупиняє свою роботу і чекає на реакцію користувача. після того, як користувач набере рядок тексту та натсне Ентер, робота програми продовжиться
    cout << "Next year you will be " << age + 1 << " )))\n";
    // + - * / %
}