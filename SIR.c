#include<stdio.h>
#include<stdlib.h>

int main()
{
    float p = 1200, n = 25, s, i = 50, r = 0, d=0, auxs, auxi;
    float a = 0.001, b = 0.6; //a é a taxa de infecção do virus e b a taxa de recuperação

    printf("Dias         Sucetiveis       Infectados        Curados/Falecidos\n");
    while (n > d)
    {
        if(d == 0)
        {
            s = (p - i) - ((p - i) * i * a);
            i = i + (s * i * a) - (i* b);
            r = r + (i * b); 
            d++;
        }
        else
        {
            auxs = s;
            auxi = i;
            s = s - (a * s * i);
            i = i + (a * auxs * i) - (b * i);
            r = r + (b * auxi);
            d++;
        }
        //printf("%.0f                %.0f             %.0f               %.0f\n", d, s, i, r);
        printf("%f\n", s);
    }

    return 0;
}