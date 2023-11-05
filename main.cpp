/* Praktikum iz mikrokontrolera Vezbe 1 Zadatak 1
 * Copyright (c) 2023 ETF
 * SPDX-License-Identifier: Apache-2.0
 */

// Obavezna biblioteka
#include "mbed.h"


// Interval treptanja
// Odgovara vremenu poluperiode
#define BLINKING_RATE     250ms


int main()
{
    // Postavi LED1 kao izlaz
    DigitalOut led(LED1);

    while (true) {
	// Promeni stanje diode
        led = !led;
	// Sacekaj vreme definistano u BLINKING_RATE
        ThisThread::sleep_for(BLINKING_RATE);
    }
}
