#include<stdio.h>
#include<string.h>
char kiemtra(char chuoi[100], char n){
	int i, dem=0;
	for (i=0; i<strlen(chuoi); i++){
		if(chuoi[i]==n)
			dem++;
	}
		if(dem>0)
			printf("\nKy tu %c xuat hien %d lan", n, dem);
		if(dem==0)
			return 1;
}
int main(){
	char chuoi[100], n;
	int dem=0;
	printf("Nhap mot chuoi: ");
	gets(chuoi);
	printf("Nhap ky tu can dem: ");
	scanf("%c", &n);
	if(kiemtra(chuoi,n)==1)
		printf("\nKy tu %c khong co trong chuoi", n);
	return 0;
}

