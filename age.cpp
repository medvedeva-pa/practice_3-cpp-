#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    system("chcp 65001");
    time_t now = time(0);
    tm* ltm = localtime(&now);
    int d;
    int m;
    int y;


    cout << "Введите день рождения: \n";
    cin >> d;

    cout << "Введите месяц рождения: \n";
    cin >> m;

    cout << "Введите год рождения: \n";
    cin >> y;

    int day = ltm->tm_mday - d;
    int month = 1 + ltm->tm_mon - m;
    int year = 1900 + ltm->tm_year - y;



    if (day < 0)
    {
        month = month - 1;
        switch (month) {
        case 2:
        case -10:
            day += 28;
            break;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        case -11:
        case -9:
        case -7:
        case -5:
        case -4:
        case -2:
        case 0:
            day += 31;
            cout << "???\n" << endl;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
        case -8:
        case -6:
        case -3:
        case -1:
            day += 30;
            break;



        }
    }


    if (month < 0)
    {
        year = year - 1;
        month = 12 + month;
    }

    cout << "Лет: " << year << endl;
    cout << "Месяцев: " << month << endl;
    cout << "Дней: " << day << endl;
}