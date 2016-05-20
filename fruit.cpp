#include <iostream>

#include "methods.h"

#include "citrusfruits.h"
#include "lemon.h"
#include "orange.h"

int main(){
Lemon lemon(2.0);
CitrusFruit &rlemon = lemon;
PrintTheFruits(rlemon);
Orange chungwa (1.0);
CitrusFruit &rchungwa = chungwa;
PrintTheFruits(rchungwa);
PrintArray();
return 0;
}
