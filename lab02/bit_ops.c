#include <stdio.h>
#include "bit_ops.h"

/* Returns the Nth bit of X. Assumes 0 <= N <= 31. */
unsigned get_bit(unsigned x, unsigned n) {
    x = (x >> n);  // shifting x by n so that the bit we want is on the least significant side.
    x = x & 1;     // and the result of x with 1 so all other bits become zero.
    return x; 
}

/* Set the nth bit of the value of x to v. Assumes 0 <= N <= 31, and V is 0 or 1 */
void set_bit(unsigned *x, unsigned n, unsigned v) {
   // take a number 1 and shift it n number of times and then take complement of it and  it to value of x.
   *x = (*x & ~(1 << n)); 
   *x= *x | (v << n); 		 // then shift the value of v by n.
    
}

/* Flips the Nth bit in X. Assumes 0 <= N <= 31.*/
void flip_bit(unsigned *x, unsigned n) {
    *x= *x ^ (1<<n); // take a number 1 and left shift n times and then xor it with the value.
  
}
 
