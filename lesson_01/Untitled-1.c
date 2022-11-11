#include<stdio.h>
void In3bang(int a, int b)
{
    int i,j;
    for (i=1; i<=9; i++)
    {
        for ( j=a; j<=b; j++)
        {
            printf("%c  %d x %d = %-3d", 186, j, i, j*i);
        }
        printf("%c\n", 186);
    }
}
void Inngang(int a)
{
    int i;
    for (i=1; i<=a; i++)
        printf("%c",205);
}
void main()
{
    int i;
    for (i=1; i<=14; i++)
        printf("-");
    printf("BANG CUU CHUONG");
    for (i=1; i<=14; i++)
        printf("-");
    printf("\n");
    printf("%c", 201); Inngang(13); printf("%c", 203); Inngang(13); printf("%c", 203); Inngang(13); printf("%c\n", 187);
    In3bang(1, 3);
    printf("%c", 204); Inngang(13); printf("%c", 206); Inngang(13); printf("%c", 206); Inngang(13); printf("%c\n", 185);
    In3bang(4,6);
    printf("%c", 204); Inngang(13); printf("%c", 206); Inngang(13); printf("%c", 206); Inngang(13); printf("%c\n", 185);
    In3bang(7,9);
    printf("%c",200); Inngang(13); printf("%c",202); Inngang(13); printf("%c",202); Inngang(13);printf("%c\n",188);
}