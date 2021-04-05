#include <iostream>
using namespace std;
int main() {
    
    
    /* ---------------------------  1  -----------------*/
    
    int n,m;
    bool temp;
    std::cout << " ---- DZ4 --- task 1 ----" << std::endl;
    std::cout << "Enter 2 numbers: " << std::endl;
    std::cin >> n >> m;

            /* ----- tern ----- */
    temp = (((n+m) >= 10)  and ((n+m) <= 20));
    std::cout << "Method ternary : ";
    std::cout << ((temp == true) ? "true" : "false") << '\n';

            /* ----- if else -- */
    std::cout << "Method If - else : ";
    if ((n+m >= 10) and (n+m <= 20)){
        std::cout << "true" << '\n';}
    else {std::cout << "false" << '\n';}

    /* ---------------------------  2  -----------------*/
        
    std::cout << '\n' << " ---- DZ4 --- task 2 ----" << '\n';
    std::cout << " Enter a number to check " << '\n';
    std::cin >> n;
    int c=0;
    
    for (int i=1; i<=n;i++){
        if (n%i == 0 ){c++;}
            if (c > 2) break;
    }
    
    if (c!=2)  
        cout << '\n' << n <<  " - this is a not natural number" << '\n';
        
    else cout << '\n' << n <<  " - this is a natural number"<< '\n';

    /* ---------------------------  3  -----------------*/
    
    std::cout << '\n'  << " ---- DZ4 --- task 3 ----" << '\n';

    int e=5, f= 5;
    
    if (e == 10 or f == 10 or (e + f)== 10)
        cout <<'\n' << "True"<<std::endl;

    /* ---------------------------  4  -----------------*/
    std::cout << '\n' << " ---- DZ4 --- task 4 ----" << '\n';
    std::cout << "Enter the year to check for leap years : ";
    int year;
    cin >> year;
    
    if  ((year%4 == 0 and year%100 == 0 and year%400 == 0) or (year%4 == 0 and year%100 != 0))
        cout <<'\n' << year << " the year is a leap year"<< std::endl;
    else 
        cout <<'\n' << year << " the year is a NOT leap year"<< std::endl;

    bool l1,l2,l3;
        l1 = year%4 == 0;
        l2 = year%100 == 0;
        l3 = year%400 == 0;

    /* cout << l1 << std::endl;
    cout << l2 << std::endl;
    cout << l3 << std::endl; */        

    //  l1  l2  l3   
    //  1   0   x   -   true
    //  1   1   1   -   true
    //  0   x   x   -   false
    //  1   1   0   -   false

    if ((l1 and l2 and l3) or (l1==true and l2 != true and l3!=true))
        cout <<'\n' << year << " the year is a leap year"<< std::endl;
    else 
        cout <<'\n' << year << " the year is a NOT leap year"<< std::endl;

    return 0;
    };