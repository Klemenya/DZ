#include <iostream>

int main() {
 /* ----------------- 1 ----------------- */
    int a = -50, b = 0, c = 50;
    int x={};
    unsigned int d = 50, e = 100;

    char symbol_1 = 'A', number_one = 49, number_1 = '1', tab = '\t';
    unsigned char last_sym = '\172';
    unsigned char last_sym2 = 122;

    std::string str = "AbCdEf";

    bool yes = true, no = false;

    float pi = 3.14159;
/* ------------------- 2 ---------------- */

    enum CellContent {Empty, Cross, Zero};
    
/* ------------------- 3 ---------------- */

    CellContent place[3] = {Empty,Cross,Zero};

/* ------------------- 4 ---------------- */

    enum F_State {fempty, fprogress, fvictory, fdefeat, fdraw };

    struct field {
        int field_size;                 // 
        int num_plrs;                   // number of players
        F_State field_state;
    };

/* ------------------- 5 ---------------- */
     union test_T{
        int i;
        char c;
        double f;
    };

    union test_T xx;

//   xx.i = 5;
     xx.c = 'Z';
//   xx.f = 3.1415;

    struct test_S{
        test_T xx;
        int is_int : 1;
        int is_char : 1;
        int is_dbl : 1;
    };

    struct test_S flag;

    flag.is_int = 0;        //  for int
    flag.is_char = 1;       // for char
    flag.is_dbl = 0;        // for double

 
    if (flag.is_int != 0 ) std::cout << xx.i << std::endl; 
    if (flag.is_char != 0 )std::cout << xx.c << std::endl;
    if (flag.is_dbl != 0 ) std::cout << xx.f << std::endl;

    return 0;
}