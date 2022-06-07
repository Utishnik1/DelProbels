#include <stdio.h>
#include <stdlib.h>
#include "../header_files/header.h"
#include <string.h>

//#define DebugMode
#define DebugMode2
#define VOID -1

void DelAllProbels(char *InputStr,char *OutPutStr,int LenInputStr,int SizeBuffer){//a function that removes all spaces

    char CloneInputStr[LenInputStr+1];//the variable is used in order not to change the value of the input string but only to read data from it
    int LenNoProbels=VOID;
    //{
    for(int i=0;i<LenInputStr+1;i++){
        CloneInputStr[i]=InputStr[i];
    }
    int BufferPosition[SizeBuffer]; // buffer position probels
    
    int k=0;
    int CountsProbels=0;

    for(int i=0;i<LenInputStr;i++){
        if(CloneInputStr[i]==' '){
            BufferPosition[k]=i;
        k++;}
    }
    CountsProbels=k;
    k=0;

    #ifdef DebugMode2
        for(int i=0;i<CountsProbels;i++) printf("%d ",BufferPosition[i]);printf("\n");
    #endif
    //} working without changing and returning strings
    int IEStr=0;
        LenNoProbels=LenInputStr-CountsProbels+1;
        char EndStr[LenNoProbels];
        for(int i=0;i<LenInputStr;i++){
                if((i!=BufferPosition[k])){EndStr[IEStr]=CloneInputStr[i];IEStr++;}
                else if(i==BufferPosition[k])k++;
            EndStr[LenNoProbels-1]='\0';//////
        }

        /*
        короче щас покажу для начала
        */

    #ifdef DebugMode2
        printf("%sI\n",EndStr);        
    #endif

    //}working with cheating and returning strings




    #ifdef DebugMode
        printf("%s\n",CloneInputStr);
    #endif
        
}