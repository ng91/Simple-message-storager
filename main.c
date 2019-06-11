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

#define max_messages_length  1000
#define max_messages  30

uint8_t messages_count[1];
int save_point[1];
uint8_t messages_length[max_messages];
uint16_t address_to[max_messages];
uint8_t messages[max_messages_length];



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
    	//** Letter write ** //
    	int length;
    	int address;
	    char message[100];
	    int number_of_start;
	    save_point[0] = 0;
	    printf("Enter address : \n");
	    gets(message);
	    printf("Write a message : \n");
	    while(1){
	    //scanf("%[^\n]s", message);
	    gets(message);
	    if(message[0]>31 & message[0]<126){
	    	break;
	    }

	    }
	    length = strlen(message);
	    for(int i=0;i<length+1;i++){
	    	if(message[i] == 32){
	    		message[i] = 95;
	    	}
	    }


	    printf("Your string: %s\n", message);
	    for(int i=0; i<max_messages;i++){
	   	save_point[0] = save_point[0] + messages_length[i];
	    }
	    messages_count[0]++;


	    messages_length[messages_count[0]]=length;
	    printf("Length of the message = %d\n", length);
	    printf("This is number of message = %d\n", messages_count[0]);


	    printf("This is save point = %d\n", save_point[0]);
	    for(int i=0; i<length;i++){
	    	messages[save_point[0]+i]=message[i];
	    	message[i]=0;
	    }




	    //** WRITE LETTER(END) ** //
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
