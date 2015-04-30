
#include <avr/io.h>

void gpio_init() {
}

void gpio_dir(char *ddr, int n, int dir) {
  if(dir) *ddr |= (1 << n);
  else *ddr &= ~(1 << n);
}

void gpio_out(char *port, int n, int val) {
  if(val) *port |= (1 << n);
  else *port &= ~(1 << n);
}

int gpio_in(char *pin, int n) {
  return (*pin & (1 << n)) != 0;
}
