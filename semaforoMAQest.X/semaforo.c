/*
 * File:   semaforo.c
 * Author: 20185561
 *
 * Created on 17 de Fevereiro de 2021, 16:39
 */


#include <xc.h>
#include "config.h"

#define VERDE       PORTDbits.RD5
#define AMARELO     PORTDbits.RD6
#define VERMELHO    PORTDbits.RD7
#define VERDEPED    PORTDbits.RD2
#define VERMELHOPED PORTDbits.RD3
#define BOTAO       PORTDbits.RD1

void semaforo_init ( void )
{
    TRISDbits.TRISD5 = 0;
    TRISDbits.TRISD6 = 0;
    TRISDbits.TRISD7 = 0;
    TRISDbits.TRISD2 = 0;
    TRISDbits.TRISD3 = 0;
    VERMELHOPED = 0;
    VERDEPED = 0;
    BOTAO = 1;
    VERDE = 0;
    AMARELO = 0;
    VERMELHO = 0;
}

void verde ( int x )
{
    PORTDbits.RD5 = x;
}

void amarelo ( int x )
{
    PORTDbits.RD6 = x;
}

void vermelho ( int x )
{
    PORTDbits.RD7 = x;
}

void verdePed ( int x )
{
    PORTDbits.RD2 = x;
}

void vermelhoPed ( int x )
{
    PORTDbits.RD3 = x;
}

int botao ( void )
{
    return ( BOTAO );
}