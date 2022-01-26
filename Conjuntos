#include <iostream>

using namespace std;

void uniao (int cona[], int conb [], int y);
void diferenca(int cona[], int conb [], int y);

int main ()
{
    int y=4;
    int x, cona[y], conb [y], i;

    for (i = 0; i < y; i++)
    {
        cout<<"Insira valores para o conjunto A: ";
        cin>>cona[i];
    }
    
    for (i = 0; i < y; i++)
    {
        cout<<"Insira valores para o conjunto B: ";
        cin>>conb[i];
    }
    
    do
    {
        cout<<"\n\n1: Caso deseje fazer a uniao \n2: Caso deseje fazer a diferenca \n0: Se deseja sair do programa\n";
        cin>>x;

        system ("cls");

        switch (x)
        {
        case 1: uniao(cona, conb, y); break;
        case 2: diferenca(cona, conb, y); break;
        }

    } while (x!=0);
    

    return 0;

}

void uniao (int cona[], int conb [], int y)
{
    int u[y*2];

    for (int i = 0; i < y*2; i++)
    {
        if (i < y)
        {
            u[i]=cona[i];
        }
        else
        {
            u[i]=conb[i-(y)];
        }
    }

    for (int i = 0; i < y; i++)
    {
        for (int j = y; j < y*2; j++)
        {
            if (u[i]==u[j])
            {
                u[j]= 0;
            }
        }
    }
    
    cout<<"Conjunto uniao e ";

    for (int i = 0; i < y*2; i++)
    {   
        if (u[i]==0)
        {

        }
        else{
        cout<<u[i]<<" ";
        }
    }
    
}

void diferenca(int cona[], int conb[], int y)
{
    int dif[y*2];
    
    for (int i = 0; i < y*2; i++)
    {
        if (i < y)
        {
            dif[i]=cona[i];
        }
        else
        {
            dif[i]=conb[i-(y)];
        }
    }
    
    for (int i = 0; i < y; i++)
    {
        for (int j = (y); j < y*2; j++)
        {
            if (dif[i]==dif[j])
            {
                dif[i]= 0;
                dif[j]= 0;
            }
        }
    }
    
    cout<<"Conjunto diferenca e ";
    for (int i = 0; i < y*2; i++)
    {
        if (dif[i]==0)
        {

        }
        
        else
        {
            cout<<dif[i]<<" ";
        }    
    }

}
