#include <iostream>
#include <stdarg.h>

#include "test.h"

using namespace MySpace;

int main()
{
    /* ----------------- 1 ------------------ */
    printf("\n---------- exercise 1 ----------");
    int mas[10] = {0,1,1,0,0,1,1,1,0,1};
    
    int lenm=sizeof(mas)/sizeof(mas[0]);
    
    int mas_2[10]{};
    int mas_3[10]{};
    int mas_4[10]{};

    for (int i=0; i<10;i++){
        mas_2[i]=mas[i];
        mas_3[i]=mas[i];
        mas_4[i]=mas[i];
        }

    std::cout << '\n' << "initial array         :   ";
    MySpace::print_mas (&mas[0],lenm);

    revers(mas);
    std::cout << '\n' << "reverse array ternary :   ";
    print_mas (&mas[0],lenm);

    revers2(mas_2);
    std::cout << '\n' << "reverse2 array logic ^:   ";
    print_mas (&mas_2[0],lenm);

    revers3(mas_3);
    std::cout << '\n' << "reverse3 array logic !:   ";
    print_mas (&mas_3[0],lenm);

    int i=0;
    revers4 (mas_4, i);
    std::cout << '\n' << "reverse4 array recursion: ";
    print_mas (&mas_4[0],lenm);

    
    /* ----------------- 2 ------------------ */
        printf("\n\n---------- exercise 2 ----------\n");
    int mas2[8]{}, s=1;
    PlusThree (mas2);
    std::cout << "- for - if - else - : ";
    print_mas (mas2,sizeof(mas2)/sizeof(int));
    std::cout << std::endl << "- recursion         : ";;
    PlusThree2 (mas2,s);
    print_mas (mas2,sizeof(mas2)/sizeof(int));

    
    /* ----------------- 3 ------------------ */
    printf("\n\n---------- exercise 3 ----------\n");
    int mas3[5] = {10, 1, 2, 3, 4};
    print_mas (mas3,sizeof(mas3)/sizeof(int));
    std::cout << '\n' << std::boolalpha << FindSameVal (mas3);


    /* ----------------- 4 ------------------ */
    printf("\n---------- exercise 4 ----------\n");

    int mas4[10]={0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
        
    printf("initial array   : ");
    print_mas (mas4,sizeof(mas4)/sizeof(int));
    std::cout << '\n';

    printf("Shift by -2     : ");
    int shift = -2;
    ShiftBy(mas4 ,shift);
    print_mas (mas4,sizeof(mas4)/sizeof(int));
  
    printf("\nShift by -2+5=3 : ");
    shift = 5;
    ShiftBy(mas4 ,shift);
    print_mas (mas4,sizeof(mas4)/sizeof(int));


    /* ----------------- 5 ------------------ */
    printf("\n---------- exercise 5 ----------\n");
    std::cout << std::noboolalpha;
    rev (10, 0,1,0,1,0,1,0,1,1,1);
  
    return 0;
}
