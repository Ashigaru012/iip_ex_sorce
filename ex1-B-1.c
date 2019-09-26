#include <stdio.h>
#include <stdlib.h>

int main(void){
    int num,n;
    int array[256];
    FILE *fp;
    fp = fopen("test.bmp","wb");
    if(fp==NULL){
        printf("ファイルオープン失敗\n");
        exit(1);
    }

    printf("ファイルをオープンしました\n");
    printf("何バイト書き出しますか:");
    scanf("%d",&num);
    printf("\n");
    printf("0以上255以下の値を%d個入力して下さい.\n",num);
    for (int i = 0; i < num; i++){
        printf("No.%d:",i+1);
        scanf("%d",&n);
        fprintf(fp,"%d\n",n);
    }

    fclose(fp);
    printf("ファイルをクローズしました\n");
    return 0;
}