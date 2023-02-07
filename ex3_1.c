#include <stdio.h>
#define SQR(x) x * x
int main()
{
 int y = 5;
 int z = SQR((y + 1));    //добавляем скобки
 printf("z = %d\n", z);
 return 0;
}