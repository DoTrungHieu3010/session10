#include<stdio.h>    
int main(){
	int n, temp;
	int arr[n];
	printf("Nhap vao so phan tu ban muon: ");
	scanf("%d", &n);
	for (int i=0;i<n;i++){
		printf("Cac phan tu ban muon: ");
		scanf("%d", &arr[i]);
	}
    for(int i =1; i<n; i++){
		int key = arr[i];
		int j;
		for(j=i-1; j>=0&&arr[j]>key; j--){
			arr[j+1]= arr[j];
		}
		arr[j+1]=key;
	}
    printf("Mang sau khi sap xep: \n");
    for(int i=0; i<n;i++){
    	printf("%d", arr[i]);
	}
	return 0;
}
