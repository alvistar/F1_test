#include <stdint.h>
#include <stdio.h>

int pow_( uint8_t *pin, uint8_t *pout ) {
  printf("%i\n", pin[0]);
  pout[0] = 7;
  pout[1] = 8;
  return 0;
}

int main(int argc, char **argv) {
    uint8_t pin[] = {0xC8, 0xE5, 0xB8, 0x75, 0x77, 0x87, 0x02, 0x44, 0x5B, 0x25, 0x65, 0x72,
    	              0x76, 0xAB, 0xC5, 0x6A, 0xA9, 0x91, 0x0B, 0x28, 0x35, 0x37, 0xCA, 0x43,
    	              0x8B, 0x2C, 0xC5, 0x9B, 0x0C, 0xF9, 0x37, 0x12};
    uint8_t pout[20];

    pow_(pin, pout);
}