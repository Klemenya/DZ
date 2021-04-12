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
    //int mas_4[10]{};

    for (int i=0; i<10;i++){
        mas_2[i]=mas[i];
        mas_3[i]=mas[i];
        //mas_4[i]=mas[i];
        }

    std::cout << '\n' << "initial array         : ";
    MySpace::print_mas (&mas[0],lenm);

    revers(mas);
    std::cout << '\n' << "reverse array ternary : ";
    print_mas (&mas[0],lenm);

    revers2(mas_2);
    std::cout << '\n' << "reverse2 array logic ^: ";
    print_mas (&mas_2[0],lenm);

    revers3(mas_3);
    std::cout << '\n' << "reverse3 array logic !: ";
    print_mas (&mas_3[0],lenm);

    /* revers4(&mas_4);
    std::cout << '\n' << "reverse4 m[10]=!m[10] : ";
    //mas_4[10] = ! mas_4[10];
    print_mas (&mas_4[0],lenm);
 */

    /* ----------------- 2 ------------------ */
    /*2.	Задать пустой целочисленный массив размером 8. Написать функцию,
      которая с помощью цикла заполнит его значениями 1 4 7 10 13 16 19 22;*/
    printf("\n\n---------- exercise 2 ----------\n");
    int mas2[8]{}, s=1;
    PlusThree (mas2);
    std::cout << "init array : ";
    print_mas (mas2,sizeof(mas2)/sizeof(int));
    std::cout << std::endl << "recursion  : ";;
    PlusThree2 (mas2,s);
    print_mas (mas2,sizeof(mas2)/sizeof(int));

    
    /* ----------------- 3 ------------------ */
    /* Написать функцию, в которую передается не пустой одномерный целочисленный
       массив, функция должна вернуть истину если в массиве есть место, в котором
       сумма левой и правой части массива равны. Примеры:
       checkBalance([1, 1, 1, || 2, 1]) → true, checkBalance ([2, 1, 1, 2, 1]) → false,
       checkBalance ([10, || 1, 2, 3, 4]) → true. Абстрактная граница показана
       символами ||, эти символы в массив не входят.
    */
    printf("\n\n---------- exercise 3 ----------\n");
    //int mas3[5]={1, 1, 1, 2, 1};
    //int mas3[5]={2, 1, 1, 2, 1};

    int mas3[5] = {10, 1, 2, 3, 4};
    std::cout << FindSameVal (mas3);

    /* ----------------- 4 ------------------ */
    /*Написать функцию, которой на вход подаётся одномерный массив и число n (может
    быть положительным, или отрицательным), при этом функция должна циклически сместить
    все элементы массива на n позиций. */
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
    rev (10, 0,1,0,1,0,1,0,1,1,1);
  
    return 0;
}
