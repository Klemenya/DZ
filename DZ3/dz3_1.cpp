#include <iostream>

extern  int a2, b2, c2, d2;

int main()
{
    /* ------------------ 1 ----------------- */
    int a=7,b=4,c=7,d=3;
    double res;
    res = ( a * ( b + static_cast<double> ( c ) / d ));

    std::cout << a << '*' << '(' << b << '+' << c << '/' << d << ')'<< '=';
    std::cout << res << std::endl;
    std::cout << std::endl;

    /* ------------------ 2 ----------------- */

    int N,t;
    std::cout << "Enter the number for task 2: ";
    std::cin >> N;

    std::cout << "Var 1. distance between numbers: " << std::endl;
    std::cout << ( N > 21 ? (N-21)*2 : 21 - N ) << std::endl;;
    
    std::cout << "Var 2. difference N and 21: " << std::endl;
    std::cout << (N-21 < 0 ? N-21 : (N-21)*2) << std::endl;
    std::cout << std::endl;

    /* ------------------ 3 ----------------- */

    std::cout << a2 << '*' << '(' << b2 << '+' << c2 << '/' << d2 << ')'<< '=';  

    std::cout << ( a2 * ( b2 + static_cast<double> ( c2 ) / d2 )) << std::endl;
    std::cout << std::endl;
    
    /* -----------------  4  ------------------- */
    int m[3][3][3] = 
    { {{1,2,3}, {4,5,6}, {7,8,9}},
      {{10,11,12}, {13,14,15}, {16,17,18}},
      {{19,20,21}, {22,23,24}, {25,26,27}} }, *pm, *ppm ;
      
    ppm = &m[0][0][0];                           // pointer to m 
    pm = &m[2][2][2];                            // pointer to the last elements
    
    int temp = ((sizeof(m) / sizeof(int))/2);    // number of cells / 2
    int res2 = ( temp%2 == 0 ?  0 : temp);       // central cell ?

    std::cout << "Center cell is: " << res2 << std::endl;
    std::cout << "Center cell value is: " << *ppm + res2 << std::endl;
    std::cout << *pm-res2 << std::endl;
    std::cout << *pm/2+1 << std::endl;

    return 0;
}