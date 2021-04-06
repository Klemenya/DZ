#include <iostream>

extern  int a2, b2, c2, d2;

int main()
{
    /* ------------------ 1 ----------------- */
    std::cout << " --  a * (b + (c / d)) --\n";
    int a, b, c, d;
    double res;
    std::cout << " Enter a > ";
    std::cin >> a;
    std::cout << " Enter b > ";
    std::cin >> b;
    std::cout << " Enter C > ";
    std::cin >> c;
    std::cout << " Enter d > ";
    std::cin >> d;
    
    //res = ( a * ( b + static_cast<double> ( c ) / d ));
    res = ( a * ( b +  double( c ) / d ));
    std::cout << a << '*' << '(' << b << '+' << c << '/' << d << ')'<< " = ";
    std::cout << res << '\n';
    std::cout << '\n';

    /* ------------------ 2 ----------------- */

    int N,t;
    std::cout << "Enter the number to compare with 21: ";
    std::cin >> N;

    std::cout << "Var 1. distance between numbers: \n";
    std::cout << ( N > 21 ? (N-21)*2 : 21 - N ) << '\n';;
    
    std::cout << "Var 2. difference N and 21: \n";
    std::cout << (N-21 < 0 ? N-21 : (N-21)*2) << '\n' << '\n';
   
    /* ------------------ 3 ----------------- */
          /* a2, b2, c2, d2 - in file data.cpp*/
    std::cout << a2 << '*' << '(' << b2 << '+' << c2 << '/' << d2 << ')'<< '=';  

    std::cout << ( a2 * ( b2 + static_cast<double> ( c2 ) / d2 )) << '\n' << '\n';
    
    
    /* -----------------  4  ------------------- */
    int m[3][3][3] = 
    { {{ 1, 2, 3}, {4,  5, 6}, { 7, 8, 9}},
      {{10,11,12}, {13,14,15}, {16,17,18}},
      {{19,20,21}, {22,23,24}, {25,26,27}} }, *pm, *ppm ;
      
    ppm = &m[0][0][0];                           // pointer to m 
    pm = &m[2][2][2];                            // pointer to the last elements
    
    int temp = ((sizeof(m) / sizeof(int))/2);    // number of cells / 2
    int res2 = ( temp%2 == 0 ?  0 : temp);       // central cell ?

    std::cout << "Center cell is: " << res2 << '\n';
    std::cout << "Center cell value is: " << *ppm + res2 << '\n';
    
    /* std::cout << *pm-res2 << '\n';
    std::cout << *pm/2+1 << '\n'; */

    return 0;
}