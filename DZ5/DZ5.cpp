#include <iostream>
#include <stdarg.h>


void revers (int m[10])  
{
     for (int i=0;i < 10;i++)
        m[i] = ((m[i] == 0) ? 1 : 0);
       
       /*  if (m[i]==0) m[i]=1;
        else m[i]=0; */ 
};

void revers2 (int m[10]) {
    for (int i=0;i < 10;i++)
        m[i] = (m[i]^1);
};

void revers3 (int m[10]) {
    for (int i=0; i < 10;i++)
        m[i] = !m[i];
};

int revers4 (int m[10],int i){
    m[i]=!m[i];
    i++;
    if(i==10){
        return 0;
    }
    revers4 (m,i);
    return 0;
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
            m2[i] = temp;
        }
};

void PlusThree2 (int m2[8],int s)
{   
    if (s==1){
        m2[s-1]=1;
    }
    else {
        m2[s]=m2[s-1]+3;
        s++;
        PlusThree2 (&m2[8], s);
    }
};




bool FindSameVal (int m3[5])
{
    int sumall = 0;
    for(int i = 0; i <5 ; i++)
        sumall += m3[i];
    int temp = 0;
    for(int i = 0; i <5 ; i++){
        temp = temp + m3[i];
        if (temp == (sumall-temp))
            return true;
    }

    return false;
};

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
};

int rev (int num, ...){
        va_list pointer;
        va_start(pointer,num);
        for (int j=0;j < num;j++)
            std::cout << !va_arg(pointer, int)<< ' ';
        va_end(pointer);
    return 0;
};

void print_mas (int* m, int len){
    for (int i=0; i < len; i++)
        std::cout <<m[i] <<' ';
};




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
    print_mas (&mas[0],lenm);

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