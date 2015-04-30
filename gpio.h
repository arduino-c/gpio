
#ifndef GPIO_H
#define GPIO_H

#define GPIO_DIR_IN   0
#define GPIO_DIR_OUT  1

#define GPIO_PULL_UP_OFF 0
#define GPIO_PULL_UP_ON 1

void gpio_init();

void gpio_dir(char *ddr, int n, int dir);
void gpio_out(char *port, int n, int val);
int gpio_in(char *pin, int n);

#endif /* GPIO_H */
