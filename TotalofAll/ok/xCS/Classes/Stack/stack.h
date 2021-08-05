#ifndef STACK_H
#define STACK_H
#include <iostream>

class stack
{
public:
char holder[100];
//char* holder;

stack ();

void push (char chs);
char pop( );

int size; 
int index;
};

#endif