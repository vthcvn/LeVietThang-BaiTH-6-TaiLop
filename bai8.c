#include<stdio.h>
void nhapmang(int *a, int *n){
	printf("Nhap so luong phan tu: ");
	scanf("%d", n);
	int i;
	for (i=0; i<*n; i++){
		printf("a[%d] = ",i);
		scanf("%d", &a[i]);
	}
}
void xuatmang(int *a, int n){
	printf("Cac phan tu trong mang la: ");
	int i;
	for(i=0; i<n; i++){
		printf("%2d", a[i]);
	}
}
int kiemtradang2k(int n){
	if(n<=1)
		return 1;
	while (n>1){
		if(n%2!=0)
			return 0;
		n/=2;
	}
	return 1;
}
int timgt2kdautien(int a[], int n){
	int i;
	for(i=1; i<n; i++){
		if(kiemtradang2k(a[i]==1))
			return a[i];
	}
	return 0;
}
int main(){
	int a[100], n;
	nhapmang(a,&n);
	xuatmang(a,n);
	int ketqua = timgt2kdautien(a,n);
	printf("\nGia triu 2k dau tien la %d", ketqua);
	return 0;
}

