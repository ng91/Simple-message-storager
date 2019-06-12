/*
 ============================================================================
 Name        : main.c
 Author      : ng91
 Version     :
 Copyright   : Do not use!
 Description : For fun and experience only!
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "messages.h"






int main(void) {
	messages_count[0] = 0;
	save_point[0] = 0;
	int number =0;
	while(1){

    printf("What you want to do:\n99. EXIT\n1. Write and save a letter \n2. Read a letter with choosen number\n3. Delete a message with choosen number\n4. Show a number of letters\n5. Show all messages in one array\n6. Show a length of choosen message\n7. Show a length of all messages in table\n");
    scanf("%d", &number);
    printf("You entered : %d\n\n", number);
    if(number == 99){
    	printf("\nEND!\n");
    	break;
    }
    if(number == 1){
    	writeMessage();
    }

    if(number==5){
    	printf("This is letters array: %s\n", messages);
    }
   // if(number==6){
   // 	printf("This is : %s\n", messages);
   // }
    if(number==7){
    	printf("|");
    	for(int i=1;i<messages_count[0]+1;i++){
    		printf(" %d |", messages_length[i]);
    	}
    	printf("\n");
    }
}
}
