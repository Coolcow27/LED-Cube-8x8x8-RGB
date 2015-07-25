/******************************************************************************
*
*
*	SPI Funktionen
*	
*
******************************************************************************/

#ifndef _SPI_
  #define _SPI_

/******************************************************************************
* SPI Variablen 3850
******************************************************************************/

#include "pic18f4420.h"

/******************************************************************************
* SPI Funktionen
******************************************************************************/

extern void init_SPI();
extern unsigned char SPI_send(unsigned char);

#endif