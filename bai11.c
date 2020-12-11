#include<stdio.h>
#include<string.h>
int main(){
	char chuoi[100];
	printf("Hay nhap chuoi: ");
	gets(chuoi);
	int i;
	for(i=0; i<strlen(chuoi); i++){
		if(chuoi[i]>=65 && chuoi[i]<=90)
			chuoi[i]+=32;
		else if(chuoi[i]>=97 && chuoi[i]<=122)
			chuoi[i]-=32;
	}
	printf("%s", chuoi);
	return 0;
}

