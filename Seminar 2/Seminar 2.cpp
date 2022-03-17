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
    b.varf = (int**)malloc(sizeof(int*) * b.inaltime);
    int lgCreanga = 1;
    for (int i = 0; i < h; i++)
    {
        b.varf[i] = (int*)malloc(lgCreanga * sizeof(int));
        lgCreanga = lgCreanga * 2;

        if (lgCreanga > 8) 
            lgCreanga = 1;
    }

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
