#include <iostream>
using namespace std;
int main() {

    /* ---------------------------  1  -----------------*/
    int n,m;
    bool temp;
    std::cin >> n >> m;

            /* ----- tern ----- */
    temp = (((n+m) >= 10)  and ((n+m) <= 20));
    std::cout << ((temp == true) ? "true" : "false") << '\n';

            /* ----- if else -- */
    if ((n+m >= 10) and (n+m <= 20)){
        std::cout << "true";}
    else {std::cout << "false";}

    /* ---------------------------  2  -----------------*/
    /* Написать программу, проверяющую, является ли некоторое число
     - натуральным простым. Простое число - это число, 
      которое делится без остатка только на единицу и себя само. */

    std::cin >> n;
    int c=0;
    
    for (int i=1; i<=n;i++){
        if (n%i == 0 ){c++;}
    }
    if (c!=2)  
        cout << '\n' << n <<  " - this is a not natural number";
        
    else cout << '\n' << n <<  " - this is a natural number";

    /* ---------------------------  3  -----------------*/
    /*Написать программу, выводящую на экран “истину”, если две 
    целочисленные константы, объявленные в её начале либо равны 
    десяти сами по себе, либо их сумма равна десяти.*/
    int e=5, f= 5;
    
    if (e == 10 or f == 10 or (e + f)== 10)
        cout <<'\n' << "True"<<std::endl;

    /* ---------------------------  4  -----------------*/
    /*Написать программу, которая определяет является ли год 
    високосным. Каждый 4-й год является високосным, кроме 
    каждого 100-го, при этом каждый 400-й – високосный. 
    Для проверки работы вывести результаты работы программы 
    в консоль*/
    int year;
    cin >> year;
    cout <<'\n' << year%400;
    cout <<'\n' << year%400 << std::endl;
    if  ((year%4 == 0 and year%100 == 0 and year%400 == 0) or (year%4 == 0 and year%100 != 0 and year%400 != 0)){
        cout <<'\n' << year << " the year is a leap year"<< std::endl;
    }
    
    bool l1,l2,l3;
        l1 = year%4 == 0;
        l2 = year%100 == 0;
        l3 = year%400 == 0;

    if ((l1 and l2 and l3) or (l1==true and l2 != true and l3!=true))
        cout <<'\n' << year << " the year is a leap year"<< std::endl;


    cout << l1 << std::endl;
    cout << l2 << std::endl;
    cout << l3 << std::endl;



    return 0;
    };
