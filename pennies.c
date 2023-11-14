 #include <stdio.h>
#include <cs50.h>

int main(void) {

int x = get_int("days/month: ");

float y = get_float("pennies on first day?: ");
  
if ( x < 27 || x > 32 )

  printf("Try again!\n");
  
  for( int i = 0; i < x; i++){
    y = y * 2;
   
  }
   printf("%.2f\n", y/100.0);
}
