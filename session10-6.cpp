#include<stdio.h>
int main(){
	int n, check, value;
	int arr[n];
	check=0;
	printf("Nhap vao so phan tu ban muon: ");
	scanf("%d", &n);
	for (int i=0;i<n;i++){
		printf("Cac phan tu ban muon: ");
		scanf("%d", &arr[i]);
	}
	printf("Phan tu ban muon tim: ");
	scanf("%d", &value);
	for ( int i=0;i<n;i++){
		if (arr[i]==value){
			check++;
			printf("Phan tu %d nam ow vi tri thu %d\n", value, i+1);
		}
	}
	if(check==0){
		printf("Khong co phan tu %d trong mang", value);
	}
	return 0;
}
