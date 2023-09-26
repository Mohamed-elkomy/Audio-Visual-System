#include <stdio.h>
#include <stdlib.h>
#include "wp.h"

wp_entry (){
    static int counter;
    printf("Please enter the data of the new particle : ");
    scanf("%s",(WP[counter].name));
    printf("Please enter the Num of the new particle : ");
    scanf("%i",&(WP[counter].sizeofwp));
    if(counter==4)
        printf("THis is the last value.");
    if(counter<4 && counter >= 0 )
    counter++;
}
