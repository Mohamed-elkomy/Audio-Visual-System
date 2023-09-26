#include <stdio.h>
#include <stdlib.h>
#include "memory.h"
#include "s.h"
#include "wp.h"

Memory_Init(){
    M1=(struct memory_cell*)malloc(sizeof(struct memory_cell));
    M1->left=NULL;
    M1->right=NULL;
    M1->mcd.data=1;
    scanf("%s",(M1->mcd.type));
}
Smart_AVS (){
    char data_processed[10];
    char *search;
    struct sound *copy;
    int i;
    search=&data_processed;


    printf("Please enter the data You have Seen or heard : ");
    scanf("%s",data_processed);
    for(i=0;i<5;i++){
            if((*search)==S[i].name[0])
            {
                copy = &S[i];
                Audio_Insert(copy);

            }
    }
}

Audio_Insert(struct sound *copy){
    struct Audio *image_ptr;
    image_ptr = (M1->right);
    for(;;){
        if((( image_ptr->next_audio) == NULL)   ) break;
        image_ptr = image_ptr->next_audio;
        else if (image_ptr == NULL) {
            image_ptr = (struct Audio *)malloc(sizeof(struct Audio));

            break;
        }
    }
    image_ptr->next_audio = (struct Audio *)malloc(sizeof(struct Audio));
}
Particle(){
}
