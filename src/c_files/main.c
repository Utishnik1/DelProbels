#include <stdlib.h>
#include <stdio.h>
#include "../header_files/header.h"
#include <string.h>

int main(void){
    char *OUT="";
    char *Input="bbbb         \0";
    printf("%d\n",strlen(Input));
    DelAllProbels(Input,OUT,strlen(Input),strlen(Input));
    
}