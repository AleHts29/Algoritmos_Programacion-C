#include <stdio.h>
#include "setup.h"


#ifdef LANG_ESP
#include "spanish.h"
#endif
#ifdef LANG_ENG
#include "english.h"
#endif

int main(void){
    
    puts(USR_MSG);

    return 0;
}
