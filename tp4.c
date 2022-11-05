#include <stdio.h> 
 #include "pico/stdlib.h" 
  
 int main (){ 
     stdio_init_all(); 
     gpio_init(7); 
     gpio_init(25); 
     gpio_set_dir(7, false); 
     gpio_set_dir(25, true); 
      
     while (1) { 
      
         int val=gpio_get(7); 
         int val2=gpio_get(25); 
         if(val==1 && val2==0){ 
             gpio_put(25, true); 
         } 
         if (val==1 && val2==1){ 
             gpio_put(25, false); 
         } 
         sleep_ms(500); 
          
          
     } 
 }