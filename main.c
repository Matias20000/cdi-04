#include <stdio.h>
#include "pico/stdlib.h"

int main() {
  stdio_init_all();
  gpio_init(26);
  gpio_set_dir(26,false);
  gpio_init(25);
  gpio_set_dir(25,true);
  while (true) {

    char button = gpio_get(26);
    if(button == 1) {

      char led = gpio_get(25);
      if(led == 1) {
        gpio_put(25, false);
      }
      else {
        gpio_put(25, true);
      }

    }
    sleep_ms(500);
   }
}
