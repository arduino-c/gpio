GPIO
====

GPIO driver for ATmega328p (Arduino Uno rev3)

###Usage

* Write your code, e.g. in *main.c*

```c
...
#include <gpio.h>

int main() {

  char c;
  c = ANY_GPIO_DATA_BYTE;
  
  /* set up pins direction */
  gpio_dir(&DDRB, 0/*pin*/, GPIO_DIR_OUT);
  gpio_dir(&DDRB, 1/*pin*/, GPIO_DIR_IN);
  
  /* out 1 to PORTB.0 */
  gpio_out(&PORTB, 0, 1);
  
  /* in from PORTB.1 */
  c = gpio_in(&PINB, 1);
  
  return 0;
}
```

