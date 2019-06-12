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
