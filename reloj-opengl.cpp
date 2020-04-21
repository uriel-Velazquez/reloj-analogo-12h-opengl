#include<iostream>
#include<windows.h>

int main()
{
    int segundos = 0, minutos = 0, horas = 0;
    bool ciclo = true;
    while(ciclo)
    {
        system("cls");
        std::cout<<horas<<":"<<minutos<<":"<<segundos<<std::endl;
        Sleep (1000);
        segundos ++; 
        if(segundos == 60)
        {
            minutos ++;
            segundos = 0;
        }
        if(minutos == 60)
        {
            horas ++;
            minutos = 0;
        }
        if(horas == 13)
        {
            horas = 1;
        }
    }
}