#include <stdio.h>
#include <stdlib.h>
int * init(int* arr, int n)             //Теперь init() возвращает (int *)
{
    arr = malloc(n * sizeof(int));      
    int i;
    for (i = 0; i < n; ++i)
    {
    arr[i] = i;
    }
    return arr;                         //Возвращаем arr в main()
}
int main()
{
    int* arr = NULL;
    int n = 10;
    arr = init(arr, n);                 //Присваеваем значение
    int i;
    for (i = 0; i < n; ++i)
    {
    printf("%d\n", arr[i]);
    }
    free(arr);
    return 0;
}