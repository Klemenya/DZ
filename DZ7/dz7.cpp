#include <iostream>

using namespace std;

#define PRIMER(x,y) (((x)>=0) && ((x)<(y))) 

#define ELEMENT(mas,x,y) (*(*((mas)+(x))+(y)))

#define MASSIZE(array) (sizeof(array)/sizeof((array)[0]))

int main () {
    int n=10,m=10,s=0;

    cout << PRIMER(1,2) << endl;            // True 1>=0 and 1  < 2
    cout << PRIMER(3,2) << endl;            // Fals 3>=0 and 3 !< 2
 

    int **mass;                             // create array 10x10
    mass = new int *[n]{};                  // from array pointer
    for (int i = 0; i < n; i++)
        mass[i] = new int [m];

    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            mass[i][j]=++s;

    cout << ELEMENT(mass,0,0) << endl;
    cout << ELEMENT(mass,9,9) << endl;

    int array[10]{};
    cout << MASSIZE(array) << endl;



   
}