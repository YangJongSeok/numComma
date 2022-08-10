#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char** argv) {
    
    int num = 14142;
    char num2[1024] = {0,};
    char num3[1024] = {0,};

    int idx = 0;
    int count = 0;
    int mod;
    int cidx = 0;

    printf("num [%d]\n", num);

    sprintf(num2, "%d", num);
    count = strlen(num2);
    mod = count % 3;
    
    for(idx = 0; idx < count; idx++) {
        if(idx != 0 && (idx) % 3 == mod) {
            num3[cidx++] = ',';
        }
        num3[cidx++] = num2[idx];
    }
    num3[cidx] = 0x00;

    printf("comma num [%s]\n", num3);

    return 0;
}
