#include <iostream>

using namespace std;

int main() {
    int *p1, *p2, *q1, *q2, *r;
    int m1[3][4] = {{1, 1, 1, 1},
                    {2, 2, 2, 2},
                    {3, 3, 3, 3}};
    int m2[4][5] = {{1, 1, 1, 1, 1},
                    {2, 2, 2, 2, 2},
                    {3, 3, 3, 3, 3},
                    {4, 4, 4, 4, 4}};
    int m3[3][5];
    r = &m3[0][0];
    for(p1 = &m1[0][0]; p1 < &m1[0][0] + 12; r+=4)

        for(q1 = &m2[0][0]; q1 < &m2[0][0] + 5; q1++){
            *r = 0;
            for(p2 = p1, q2 = q1; p2 < p1 + 4; p2++, q2+= 5)
                *r = *r + *p2 * *q2;
            r++;
        }

    //Escrita da Matriz: 
    /*
    for(r = &m3[0][0]; r < &m3[0][0] + 15; r++)
        cout << *r << endl;*/
    




   /* for(y = a; y < a + 10; y++){
    cout << "\nDigite um número inteiro: ";
    cin >> *y;
    }
    
    for(y = a; y < a + 10; y++){
    cout << *y << endl;
    }
*/
}