#include "Ejercicio03.h"
#include <iostream>
#include <math.h>
bool Ejercicio03::isPowerOfTwo(int n)
{
    if (n == 1 || n== -1) {
        return true;
    }

    if (n == 0 || n % 2 != 0) {
        return false;
    }

    return isPowerOfTwo(n/2);
  
    // un comentario asi nomass
    


}
