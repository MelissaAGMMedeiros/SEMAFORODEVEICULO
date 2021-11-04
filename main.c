/*
 * File:   main.c
 * Author: 21193460
 *
 * Created on 4 de Novembro de 2021, 09:13
 */

#include "config.h"
#include <xc.h>

#define _XTAL_FREQ 4000000
#define LEDVERM PORTDbits.RD5
#define LEDAMAR PORTDbits.RD6
#define LEDVERD PORTDbits.RD7
#define ATRASO(n) __delay_ms(n)

void main(void) 
{
      // Configuração dos pinos
    TRISDbits.TRISD5 = 0;       // LED Vermelho
    TRISDbits.TRISD6 = 0;       // LED Amarelo
    TRISDbits.TRISD7 = 0;       // LED Verde
    LEDVERM = 0;
    LEDAMAR = 0;
    LEDVERD = 0;
    
    while( 1 )
    {
            // LED Vermelho
        LEDVERM = 1;
        ATRASO(5000);
        LEDVERM = 0;

            // LED Verde                
        LEDVERD = 1;
        ATRASO(4000);
        LEDVERD = 0;

            // LED Amarelo
        LEDAMAR = 1;
        ATRASO(1000);
        LEDAMAR = 0;
    }
}
