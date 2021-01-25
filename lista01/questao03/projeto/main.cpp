#include <QCoreApplication>

int main()
{
    int i=1, j=2;
    int *p, *q;

    p = i;
    q = &j;
    p = &*&i;
    i = (*&)j;
    i = *&j;
    i = *&*&j;
    q = *p;
    i = (*p)++ + *q;

    return 0;
}
