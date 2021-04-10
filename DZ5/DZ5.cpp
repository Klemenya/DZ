#include <iostream>


void revers (int m[10]) //void display(int num[10]);
{
    for (int i=0;i < 10;i++)
        m[i] = ((m[i] == 0) ? 1 : 0);
       
       /*  if (m[i]==0)
            m[i]=1;
        else
            m[i]=0; */
}

void revers2 (int m[10]) //void display(int num[10]);
{
    for (int i=0;i < 10;i++)
        m[i] = (m[i]^1);
}

void revers3 (int m[10]) //void display(int num[10]);
{
    for (int i=0;i < 10;i++)
        m[i] = !m[i];
}

void PlusThree (int m2[8])
{
    int temp =0;
    for (int i=0;i < 8;i++)
        if (temp == 0){
            m2[i]= 1;
            temp = 1;
        }
        else {
            temp = (temp+3);
            m2[i] = temp;}
}

bool FindSameVal (int m3[5])
{
    int sumall = 0;
    for(int i = 0; i <5 ; i++)
        sumall += m3[i];
    int temp = 0;
    for(int i = 0; i <5 ; i++){
        temp = temp + m3[i];
        if (temp == (sumall-temp)){
            return true;
        }
    }

    return false;
}

int ShiftBy (int m[10], int s){

    if (s>0){
        for (int j = 0; j < s; j++){
           int old = m[9];
            for (int i = 9; i>0; i--){
                m[i]=m[i-1];
            }
            m[0]=old;
       }
              
    }
    else if (s<0){
        for (int j = 0; j>s;j--){
            
            int first=m[0];
            for (int i = 0; i<9; i++){
                m[i]=m[i+1];
            }
            m[9]=first;
        }
    }
    return 0;
}

int main()
{
    /* ----------------- 1 ------------------ */
    printf("\n---------- exercise 1 ----------");
    int mas[10] = {0,1,1,0,0,1,1,1,0,1};
    int mas_2[10];
    int mas_3[10];
    for (int i=0;i<10;i++)
        mas_2[i] = mas[i];

    memcpy(mas_3, mas, sizeof(mas_3));

    std::cout << '\n' << "initial array         : ";
    for (int i=0;i < 10;i++)
        std::cout <<mas[i];

    revers(mas);
    std::cout << '\n' << "reverse array ternary : ";
    for (int i=0;i < 10;i++)
        std::cout <<mas[i];

    revers2(mas_2);
    std::cout << '\n' << "reverse2 array logic ^: ";
    for (int i=0;i < 10;i++)
        std::cout << mas_2[i];

    revers3(mas_3);
    std::cout << '\n' << "reverse2 array logic !: ";
    for (int i=0;i < 10;i++)
        std::cout <<mas_3[i];

    /* ----------------- 2 ------------------ */
    /*2.	Задать пустой целочисленный массив размером 8. Написать функцию,
      которая с помощью цикла заполнит его значениями 1 4 7 10 13 16 19 22;*/
    printf("\n\n---------- exercise 2 ----------\n");
    int mas2[8];
    PlusThree (mas2);
    std::cout << "init array : ";
    for (int i=0;i < 8; i++)
        std::cout << " " <<mas2[i];

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

    int mas3[5]={10, 1, 2, 3, 4};
    std::cout << FindSameVal (mas3);

    /* ----------------- 4 ------------------ */
    /*Написать функцию, которой на вход подаётся одномерный массив и число n (может
    быть положительным, или отрицательным), при этом функция должна циклически сместить
    все элементы массива на n позиций. */
    printf("\n---------- exercise 4 ----------\n");
    int mas4[10]={0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
        
    printf("initial array   : ");
    for (int i=0;i < 10;i++)
        std::cout << " " <<mas4[i];
    std::cout << '\n';

    printf("Shift by -2     : ");
    int s = -2;
    ShiftBy(mas4 ,s);
    for (int i=0;i < 10;i++)
        std::cout << " " <<mas4[i];

    printf("\nShift by -2+5=3 : ");
    s = 5;
    ShiftBy(mas4 ,s);
    for (int i=0;i < 10;i++)
        std::cout << " " <<mas4[i];


    return 0;
}
