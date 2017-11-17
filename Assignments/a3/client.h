/**
  *
  * client.h
  *
  * Lorenzo Zafra 1395521
  * CMPUT 379 Assignment 3
  */

#ifndef client_h
#define client_h

#include <stdio.h>
#include <stdlib.h>

#define MAX_BUF 512
#define MAX_OUT_LINE 240

void start_client(int portNum, char* serverAddress);
void parse_input(char* input);
void open_chat(char* username);
void list_logged();
void add_receipient(char* receipients);
void send_chat(char* message);
void close_client();
void exit_client();
void close_sockfd();
void parse_server_msg(char* buf);

#endif
