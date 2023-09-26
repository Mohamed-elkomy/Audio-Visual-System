#include <stdio.h>
#include <stdlib.h>
#include "s.h"


sound_entry(){
    static int c;
    if(c>4) return;
    printf("Please enter the data of the new sound : ");
    scanf("%s",(S[c].name));
    printf("Please enter the intensity of the new sound : ");
    scanf("%i",&(S[c].intensity));

    if(c==4)
        printf("THis is the last value.\n");
    if((c<5) && (c >= 0) )
    c++;
}
