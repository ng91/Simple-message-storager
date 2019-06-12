/*
 * message.h
 *
 *  Created on: 12 cze 2019
 *      Author: ng
 */

#include <stdint.h>

#ifndef MESSAGE_H_
#define MESSAGE_H_



#endif /* MESSAGE_H_ */

#define max_messages_length  1000
#define max_messages  30

uint8_t messages_count[1];
int save_point[1];
uint8_t messages_length[max_messages];
uint16_t address_to[max_messages];
uint8_t messages[max_messages_length];
