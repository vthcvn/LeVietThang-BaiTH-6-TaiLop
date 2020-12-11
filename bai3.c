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
	printf("Cac phan tu trong mang la: ");
	int i;
	for (i=0; i<n; i++){
		printf("%2d", a[i]);
	}	
}
void demso(int *a, int n){
	int i, dem=0;
	for(i=0; i<n; i++){
		if(a[i]%7==0)
			dem++;
	}
	printf("\nCo %d phan tu trong mang chia het cho 7", dem);
}
void tinhtong(int a[], int n){
	int i, tong=0;
	for(i=0; i<n; i++){
		if(a[i]%7==0)
			tong+=a[i];
	}
	printf("\nTong cac phan tu chia het cho 7 la %d", tong);
}
int main(){
	int a[100], n;
	nhapmang(a,&n);
	xuatmang(a,n);
	demso(a,n);
	tinhtong(a,n);
	return 0;
}

