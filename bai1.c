#include<stdio.h>

int main(){
	int i,n,a[100];
	printf("Chuong trinh nhap n phan tu cua mang va xuat ra man hinh dao nguoc lai");
	printf("\nNhap so phan tu cua mang: ");
	scanf("%d", &n);
	printf("Nhap vao gia tri cua moi phan tu: \n");
	for (i=0; i<n; i++){
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
	printf("Day phan tu da nguoc: ");
	for (i=n-1; i>=0; i--){
		printf("%2d", a[i]);
	}
	return 0;
}

