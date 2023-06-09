/*
This code was automatically generated using the Riverside-Irvine State machine Builder tool
Version 2.9 --- 06/10/2023 00:19:41 PST
*/

#include "rims.h"

/*
   Define user variables and functions for this state machine here.
*/

unsigned char SM1_Clk;
void TimerISR() {
    SM1_Clk = 1;
}

enum SM1_States { SM1_s1, SM1_s2 } SM1_State;

TickFct_State_Machine() {
    switch (SM1_State) { // Transitions
    case -1:
        SM1_State = SM1_s1;
        break;
    case SM1_s1:
        break;
    case SM1_s2:
        break;
    default:
        SM1_State = SM1_s1;
    } // Transitions

    switch(SM1_State) { // State actions
    case SM1_s1:
        break;
    case SM1_s2:
        break;
    default: // ADD default behaviour below
        break;
    } // State actions

}

int main() {
    const unsigned int periodState_Machine = 1000; // 1000 ms default
    TimerSet(periodState_Machine);
    TimerOn();

    SM1_State = -1; // Initial state
    B = 0; // Init outputs

    while (1) {
        TickFct_State_Machine();
        while (!SM1_Clk);
        SM1_Clk = 0;

    } // while (1)
} // Main