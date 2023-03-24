#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void) {
        FILE *fp;
        char fname[] = "English.txt";
        int i = 0;
        char moji[999999];
        fp = fopen(fname, "r");

        for(i = 0; ((moji[i] = fgetc(fp)) != EOF); i++) {

                if(isalpha(moji[i])){
                        putchar(moji[i]);
                }

                else if(moji[i] == 10){
                moji[i] = 10;
                putchar(moji[i]);
                }

                else{
                        moji[i] = 32;
                        putchar(moji[i]);
                }

        }

return 0;

}
