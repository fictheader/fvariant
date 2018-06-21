#include <QDebug>
#include <fvariant.h>

int main()
{
    FVariant<int> test(100);
    qDebug() << test;
    return 0;
}
