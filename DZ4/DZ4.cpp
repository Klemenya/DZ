#include <iostream>

int main() {
    
    
    /* ---------------------------  1  -----------------*/
    {
        int num1, num2;
        bool temp;
        std::cout << " ---- DZ4 --- task 1 ----\n";
        std::cout << "Enter 2 numbers: \n";
        std::cin >> num1 >> num2;

            /* ----- tern ----- */
        temp = (( ( num1 + num2 ) >= 10)  && (( num1 + num2 ) <= 20 ));
        std::cout << "Ternary : ";
        std::cout << ((temp == true) ? "true\n" : "false\n");

            /* ----- if else -- */
        std::cout << "If - else : ";
        if ((num1 + num2 >= 10) && (num1 + num2 <= 20)){
            std::cout << "true\n";}
        else {
            std::cout << "false\n";}
    }

    /* ---------------------------  2  -----------------*/
        
    std::cout << "\n ---- DZ4 --- task 2 ----\n";
    std::cout << " Enter a number to check \n";
    int number;
    std::cin >> number;
    int c=0;
    
    for (int i=1; i<=number;i++){
        if (number%i == 0 ){c++;}
            if (c > 2) break;
    }

    if (c!=2)  
        std::cout << '\n' << number <<  " - this is a not prime number\n";
        
    else std::cout << '\n' << number <<  " - this is a prime number\n";

    /* ---------------------------  3  -----------------*/
    
    std::cout << "\n ---- DZ4 --- task 3 ----\n";
    {
        int num1, num2;
        std::cout << "Enter the first number > ";
        std::cin >> num1;
        std::cout << "Enter the second number > ";
        std::cin >> num2;
    
        if ((num1 == 10 && num2 == 10) || (num1 + num2)== 10)
            std::cout <<"\n True\n";
    }

    /* ---------------------------  4  -----------------*/
    std::cout << '\n' << " ---- DZ4 --- task 4 ----\n";
    std::cout << "Enter the year to check for leap years : ";
    int year;
    std::cin >> year;
    
    if  ((year%4 == 0 && year%100 == 0 && year%400 == 0) || (year%4 == 0 && year%100 != 0))
        std::cout <<'\n' << year << " the year is a leap year\n";
    else 
        std::cout <<'\n' << year << " the year is a NOT leap year\n";

    bool l1,l2,l3;
    l1 = year%4 == 0;
    l2 = year%100 == 0;
    l3 = year%400 == 0;

    //  l1  l2  l3   
    //  1   0   x   -   true
    //  1   1   1   -   true
    //  0   x   x   -   false
    //  1   1   0   -   false

    if (( l1 && l2 && l3 ) || ( l1 && ! l2 && ! l3)){
        std::cout <<'\n' << year << " the year is a leap year\n";}
    else 
        std::cout <<'\n' << year << " the year is a NOT leap year\n" ;

    return 0;
    }; 