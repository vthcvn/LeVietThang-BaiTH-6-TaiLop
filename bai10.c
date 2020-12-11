#include<stdio.h>
#include<string.h>
int main(){
	char chuoi[100];
	printf("Hay nhap vao mot chuoi: ");
	gets(chuoi);
	int i,j;
	for(i=strlen(chuoi)-1; i>=0; i--){
		printf("%c", chuoi[i]);
	}
	return 0;
}

