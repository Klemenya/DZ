#include <iostream>
#include <stdarg.h>

namespace MySpace {

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

}