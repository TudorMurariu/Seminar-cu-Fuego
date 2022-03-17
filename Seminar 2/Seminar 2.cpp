#include <iostream>
#include <stdlib.h>
using namespace std;


struct Brad {
    int inaltime;
    int** varf;
};

Brad creazaBrad(int h)
{
    Brad b;
    b.inaltime = h;
    b.varf = (int**)malloc(sizeof() * b.inaltime);

    return b;
}

void impodobesteMama(Brad b)
{

}

void distrugeFuego(Brad b)
{

}

int main()
{
    Brad b = creazaBrad(10);

    impodobesteMama(b);

    distrugeFuego(b);
    return 0;
}
