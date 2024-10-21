#include <stdio.h>
void przenies(int n, char A, char B, char C) //znaki
{
    if (n == 1)
    {
        printf("\n Przenies dysk 1 z %c na %c", A, B);
        return;
    }
    else
    {
        przenies(n-1, A, C, B);
        printf("\n Przenies dysk %d z %c na %c", n, A, B);
        przenies(n-1, C, B, A);
    }
}

int main()
{
    int n;
    printf("Wprowadz liczbe dyskow:");
    scanf("%d",&n);
    printf("Stos poczatkowy: A, stos pomocniczy: B, stos docelowy: C");
    printf("\n Dysk 1 - najmniejszy, dysk %d- najwiekszy",n);
    przenies(n, 'A', 'C', 'B'); //znaki
    return 0;
}
