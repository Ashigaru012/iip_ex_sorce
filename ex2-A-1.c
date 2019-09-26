#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE *fp;
    int num = 0,c;
    char Filename[256];
    printf("ファイル名を入力して下さい:");
    scanf("%s",Filename);
     if((fp=fopen(Filename,"r"))!=NULL){
        int buf[3];
        while( fscanf(fp,"%d",&buf[0]) != EOF ){
            num++;
            printf("%d\n",buf[0]);
    }
 }
 printf("全部で%dバイト読み込みました.\n",num);
 fclose(fp);
 printf("ファイルをクローズしました.\n");
}