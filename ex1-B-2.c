#include <stdio.h>
#include <stdlib.h>

#define LineMax 100

int main() {
FILE * fp;
unsigned char Lines[LineMax][256];
unsigned int i;
int cnt = 0;

fp = fopen("test.bmp","r");
if( fp == NULL ){
printf( "ファイルオープンエラー\n" );
exit(1);
}
printf("読み込み用ファイルをオープンしました.\n");

for(i=0; i<LineMax && fgets( Lines[i] , sizeof(Lines[i]) , fp ) != NULL;i++){
    cnt += 1;
}
printf("%d個のデータを読み込み、配列に格納しました.\n",cnt);
fclose( fp );
printf("読み込み用ファイルをクローズしました.\n\n");

printf("配列の内容を表示します\n");
for (i = 0; i < cnt; i++){
    printf("ary[%d]=%s",i,Lines[i]);
}
printf("\n");

fp = fopen("testcp.bmp","w");
if( fp == NULL ){
printf( "ファイルオープンエラー\n" );
exit(1);
}
printf("書き込み用ファイルをオープンしました.\n");
for(i = 0; i < cnt; i++){
    fprintf( fp,"%s" , Lines[i] );
}

printf("配列に格納されてた%d個のデータを書き出しました.\n",cnt);
fclose(fp);
printf("書き出し用ファイルをクローズしました.\n");


return 0;
}