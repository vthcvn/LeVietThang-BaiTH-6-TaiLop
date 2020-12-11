#include<stdio.h>
void nhapmang(int *a, int *n){
	printf("Nhap so luong phan tu: ");
	scanf("%d", n);
	int i;
	for(i=0; i<*n; i++){
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
}
void xuatmang(int *a, int n){
	printf("Cac phan tu trong mang la:  ");
	int i;
	for(i=0; i<n; i++){
		printf("%2d", a[i]);
	}
}
void tinhtong(int a[], int n){
	int tong=0, i;
	for (i=0; i<n; i++){
		tong+=a[i];
	}
	printf("\nTong cua mang la: %d", tong);	
}
int main(){
	int a[100], n;
	nhapmang(a,&n);
	xuatmang(a,n);
	tinhtong(a,n);
	return 0;
}

