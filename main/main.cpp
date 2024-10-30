#include <iostream>
#include <iomanip>
#include <limits>
#include <cstdlib>
using namespace std;

void clearConsole()
{
    system("clear");
}

void endl()
{
    cout << endl;
}

double getValidInput(const string &prompt)
{
    double value;
    cout << prompt;
    while (true)
    {
        if (cin >> value)
        {
            return value;
        }
        else
        {
            endl();
            cout << "\033[0;31mБудь ласка, введіть число!\033[0m" << endl;
            endl();
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << prompt;
        }
    }
    return value;
}

void convertTime()
{
    int choice;
    cout << "\033[0;32mОберіть напрямок: \033[0m" << endl;
    cout << "1. Години" << endl;
    cout << "2. Хвилини" << endl;
    cout << "3. Секунди" << endl;
    cin >> choice;

    double value = getValidInput("\033[0;32mВведіть значення:\033[0m ");
    endl();
    switch (choice)
    {
    case 1:
        cout << "Хвилини: " << value * 60 << endl;
        cout << "Секунди: " << value * 3600 << endl;
        break;
    case 2:
        cout << "Години: " << value / 60 << endl;
        cout << "Секунди: " << value * 60 << endl;
        break;
    case 3:
        cout << "Години: " << value / 3600 << endl;
        cout << "Хвилини: " << value / 60 << endl;
        break;
    default:
        endl();
        cout << "\033[0;31mНеправильний ввід!\033[0m" << endl;
        endl();
    }
}

void convertLength()
{
    int choice;
    cout << "\033[0;32mОберіть тип довжини: \033[0m" << endl;
    cout << "1. Метри" << endl;
    cout << "2. Сантиметри" << endl;
    cout << "3. Міліметри" << endl;
    cout << "4. Фути" << endl;
    cin >> choice;

    double value = getValidInput("\033[0;32mВведіть значення:\033[0m ");
    endl();
    switch (choice)
    {
    case 1:
        cout << "Сантиметри: " << value * 100 << endl;
        cout << "Міліметри: " << value * 1000 << endl;
        cout << "Кілометри: " << value / 1000 << endl;
        break;
    case 2:
        cout << "Метри: " << value / 100 << endl;
        cout << "Міліметри: " << value * 10 << endl;
        break;
    case 3:
        cout << "Метри: " << value / 1000 << endl;
        cout << "Сантиметри: " << value / 10 << endl;
        break;
    case 4:
        cout << "Метри: " << value / 3.28084 << endl;
        break;
    default:
        cout << "\033[0;31mНеправильний ввід!\033[0m" << endl;
    }
}

void convertWeight()
{
    int choice;
    cout << "\033[0;32mОберіть тип ваги: \033[0m" << endl;
    cout << "1. Кілограми" << endl;
    cout << "2. Грами" << endl;
    cout << "3. Тонни" << endl;
    cout << "4. Міліграм" << endl;
    cin >> choice;

    double value = getValidInput("\033[0;32mВведіть значення:\033[0m ");
    endl();
    switch (choice)
    {
    case 1:
        cout << "Міліграм: " << value * 1e6 << endl;
        cout << "Грами: " << value * 1000 << endl;
        cout << "Тонна: " << value / 1000 << endl;
        break;
    case 2:
        cout << "Міліграм: " << value * 1000 << endl;
        cout << "Кілограм: " << value / 1000 << endl;
        cout << "Тонна: " << value / 1e6 << endl;
        break;
    case 3:
        cout << "Кілограм: " << value * 1000 << endl;
        cout << "Грам: " << value * 1e6 << endl;
        cout << "Міліграм: " << value * 1e9 << endl;
        break;
    case 4:
        cout << "Кілограм: " << value / 1e6 << endl;
        cout << "Грам: " << value / 1000 << endl;
        cout << "Тонна: " << value * 1e9 << endl;
        break;
    default:
        cout << "\033[0;31mНеправильний ввід!\033[0m" << endl;
    }
}

void convertPressure()
{
    int choice;
    cout << "\033[0;32mОберіть тип тиску: \033[0m" << endl;
    cout << "1. Паскалі" << endl;
    cout << "2. Атмосфери" << endl;
    cout << "3. Бар" << endl;
    cout << "4. Мм рт. ст." << endl;
    
    choice = getValidInput("\033[0;32mВведіть номер типу тиску:\033[0m ");
    

    double value = getValidInput("\033[0;32mВведіть значення:\033[0m ");
    switch (choice)
    {
    case 1:
        cout << "Атмосфери: " << value / 101325 << endl;
        cout << "Бар: " << value / 100000 << endl;
        cout << "Мм рт. ст.: " << value / 133.322 << endl;
        break;
    case 2:
        cout << "Паскалі: " << value * 101325 << endl;
        cout << "Бар: " << value * 1.01325 << endl;
        cout << "Мм рт. ст.: " << value * 760 << endl;
        break;
    case 3:
        cout << "Паскалі: " << value * 100000 << endl;
        cout << "Атмосфери: " << value / 1.01325 << endl;
        cout << "Мм рт. ст.: " << value * 750.062 << endl;
        break;
    case 4:
        cout << "Паскалі: " << value * 133.322 << endl;
        cout << "Атмосфери: " << value / 760 << endl;
        cout << "Бар: " << value / 750.062 << endl;
        break;
    }
}


void convertVolume()
{
        int choice;
    cout << "\033[0;32mОберіть напрямок або введіть 0 для повернення до головного меню:\033[0m" << endl;
    cout << "1. Літри " << endl;
    cout << "2. Мілілітри " << endl;
    cout << "3. Кубічний метр" << endl;
    cout << "4. Американська чайна ложка " << endl;
    cin >> choice;

    double value = getValidInput("\033[0;32mВведіть значення:\033[0m ");
    endl();
    switch (choice)
    {
    case 1:
        cout << "Мілілітри: " << value * 1000 << endl;
        cout << "Кубічний метр: " << value / 1000 << endl;
        cout << "Американська чайна ложка: " << value * 67.628 << endl;
        break;
    case 2:
        cout << "Літри: " << value / 1000 << endl;
        cout << "Кубічний метр: " << value / 1e6 << endl;
        cout << "Американська чайна ложка: " << value / 4.92892 << endl;
        break;
    case 3:
        cout << "Літри: " << value * 1000 << endl;
        cout << "Мілілітри: " << value * 1e6 << endl;
        cout << "Американська чайна ложка: " << value * 168.936 << endl;
        break;
    case 4:
        cout << "Літри: " << value / 67.628 << endl;
        cout << "Мілілітри: " << value * 4.92892 << endl;
        cout << "Кубічний метр: " << value / 67628 << endl;
        break;
    default:
        cout << "\033[0;31mНеправильний ввід!\033[0m" << endl;
    }
}

int main()
{
    int choice;
    do
    {
        setprecision(2);
        clearConsole();
        cout << "\033[0;34mВиберіть категорію для конвертації:\033[0m" << endl;
        cout << "1. Час" << endl;
        cout << "2. Довжина" << endl;
        cout << "3. Вага" << endl;
        cout << "4. Тиск" << endl;
        cout << "5. Об'єм" << endl;
        cout << "6. Вихід" << endl;
        
        endl();
        choice = getValidInput("\033[0;34mВведіть номер категорії:\033[0m ");
        clearConsole();


        if (choice < 1 || choice > 6) {
            cout << "\033[0;31mНеправильний ввід! Будь ласка, спробуйте ще раз.\033[0m" << endl;
            cout << "\033[0;33mНатисніть Enter, щоб продовжити...\033[0m";
            cin.ignore(); 
            cin.get();    
            continue; 
        }

        switch (choice)
        {
            case 1:
                convertTime();
                break;
            case 2:
                convertLength();
                break;
            case 3:
                convertWeight();
                break;
            case 4:
                convertPressure();
                break;
            case 5:
                convertVolume();
                break;
            case 6:
            endl();
                cout << "\033[0;32mДякуємо за використання програми!\033[0m" << endl;
                break;
        }
        endl();
        cout << "\033[0;33mНатисніть Enter, щоб продовжити...\033[0m";
        cin.ignore(); // Очищаємо буфер
        cin.get();    // Чекаємо на введення
    } while (choice != 6);

    return 0;
}
