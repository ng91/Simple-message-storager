/*
 * messages.c
 *
 *  Created on: 12 cze 2019
 *      Author: ng
 */

#include "messages.h"

void writeMessage(){

	//** Letter write ** //
	int length;
	int address;
    char message[100];
    int number_of_start;
    save_point[0] = 0;
    //printf("Enter address : \n");
    //gets(message);
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

void readMessage(){
	//** READ LETTER **//
	int length_below;
	int num2;
	char message[100];
	printf("Wpisz numer");
	scanf("%d", &num2);
	for(int i=0; i<num2;i++){
		length_below = length_below + messages_length[i];
	}
	 printf("length below %d\n", length_below);
	for(int i=0;i<messages_length[num2];i++){
		message[i] = messages[length_below+i];
	}
	printf("Your message: %s\n", message);

	//** READ LETTER(END) **//
}
