#include "mbed.h"

// main() runs in its own thread in the OS

DigitalIn ir(D4);

int main()
{
    while (true) {
        printf("%d\n", ir.read());
    }
}

