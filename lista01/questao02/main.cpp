#include <QCoreApplication>

int main()
{
    int i=3,j=5;
    int *p, *q;
    int x, y, z;
    bool w;
    p = &i;
    q = &j;

    w = (p == &i);
    x = (*p - *q);
    y = **&p;
    z = 3 - *p/(*q) + 7;

    printf("w = %d ", w);
    printf("\nx = %d ", x);
    printf("\ny = %d ", y);
    printf("\nz = %d ", z);

    return 0;
}
