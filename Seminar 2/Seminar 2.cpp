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
    int glob = 1;
    int lgCreanga = 1;
    for (int i = 0; i < b.inaltime; i++)
    {
        for (int j = 0; j < lgCreanga; j++)
            b.varf[i][j] = glob++;
        lgCreanga *= 2;

        if (lgCreanga > 8)
            lgCreanga = 1;
    }
}

void print_Brad(Brad b)
{
    int lgCreanga = 1;
    for (int i = 0; i < b.inaltime; i++)
    {
        for (int j = 0; j < 9 - lgCreanga; j++)
            cout << " ";
        for (int j = 0; j < lgCreanga; j++)
            cout << b.varf[i][j] << " ";
        cout << endl;
        lgCreanga *= 2;

        if (lgCreanga > 8)
            lgCreanga = 1;
    }
}

void distrugeFuego(Brad b)
{
    for (int i = 0; i < b.inaltime; i++)
        free(b.varf[i]);
    free(b.varf);
}

int main()
{
    Brad b = creazaBrad(20);

    impodobesteMama(b);
    print_Brad(b);

    distrugeFuego(b);
    return 0;
}
