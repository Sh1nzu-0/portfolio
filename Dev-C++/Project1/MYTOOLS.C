#include <stdio.h>
#include <string.h>
#include "MYTOOLS.H"

#define COLOR_BLACK     "\033[0;30m"
#define COLOR_RED     "\033[0;31m"
#define COLOR_GREEN   "\033[0;32m"
#define COLOR_YELLOW   "\033[0;33m"
#define COLOR_BLUE   "\033[0;34m"
#define COLOR_PINK    "\033[0;35m"
#define COLOR_CYAN    "\033[0;36m"
#define COLOR_WHITE     "\033[0;37m"
#define COLOR_RESET   "\033[0m"

void center(int row, char str[]){
    int col;
    col = (80 - strlen(str)) / 2;
    printf("\033[%d;%dH%s", row, col, str);
}

void outString(int col, int row, char str[]){
    printf("\033[%d;%dH%s", row, col, str);
}

void drawSBox(int x1,int y1,int x2,int y2){
    int i;

    for(i=x1;i<=x2;i++)
    {
        printf("\033[%d;%dH-",y1,i);
        printf("\033[%d;%dH-",y2,i);
    }

    for(i=y1;i<=y2;i++)
    {
        printf("\033[%d;%dH|",i,x1);
        printf("\033[%d;%dH|",i,x2);
    }
}

void drawDBox(int x1,int y1,int x2,int y2){
    drawSBox(x1,y1,x2,y2);
}

void menu(){
    printf("\n\n");
    printf("        PROGRAMMING 2\n");
    printf("    FUNCTION IMPLEMENTATION\n");
    printf("      W/ DATA ABSTRACTION\n");
    printf("=====================================\n");
    printf("   ~~~~~BASIC MATH OPERATIONS~~~~~\n\n");
    printf("        Modulo      [%%]\n");
    printf("        %sDivide      [/]%s\n", COLOR_BLUE, COLOR_RESET);
    printf("        %sMultiply    [*]%s\n", COLOR_RED, COLOR_RESET);
    printf("        Add         [+]\n");
    printf("        Subtract    [-]\n\n");
}
