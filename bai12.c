#include<stdio.h>
int dem(char *s, char c){
	int i, count=0;
	for(i=0; i<strlen(s);i++){
		if(s[i]==c)
			count++;
	}
	return count;
}
int main(){
	char s[100], c;
	printf("Hay nhap mot chuoi: ");
	gets(s);
	printf("Hay nhap mot ki tu: ");
	scanf("%c", &c);
	printf("So lan xuat hien ki tu %c trong chuoi %s la: %d", c, s, dem(s,c));
	return 0;
}

