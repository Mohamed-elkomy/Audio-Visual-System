#include <stdio.h>
#include <stdlib.h>
#include "wp.h"
#include "s.h"
int main()
{
    Memory_Init();
    int user_choice;
    for(;;){
    printf("For Entering Sound Press 1 , To enter Particle Press 2 : \n");
    scanf("%i",&user_choice);
    if (user_choice==1){
        sound_entry();
    }
    else if(user_choice==2){
        wp_entry();
    }




    }

    return 0;
}
