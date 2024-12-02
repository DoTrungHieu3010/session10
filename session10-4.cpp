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
    for (int i=0; i<n-1;i++){
		for(int j=i+1; j<=n;j++){
			if(arr[i]>arr[j]){
				temp =arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
    printf("Mang sau khi sap xep: \n");
    for(int i=0; i<n;i++){
    	printf("%d", arr[i]);
	}
	return 0;
}
