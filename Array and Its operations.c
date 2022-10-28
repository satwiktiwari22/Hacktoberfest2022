#include<stdio.h>

int main(){
	int n,c,e,i,j,s,v,t,l,arr1[n],arr2[t],arr3[l],temp;
	char w='y';
	printf("Creating an array -");
	printf("\nEnter the size of array : ");
	scanf("%d",&n);
	printf("How many elements do you want to enter : ");
	scanf("%d",&e);
	for(i=0;i<e;i++){
		printf("Enter elememt at %d index : ",i);
		scanf("%d",&arr1[i]);			
	}
	while(w=='y'){
	
	printf("\nOperations - ");
	
	printf("\n1. Search");
	printf("\n2. Insert");
	printf("\n3. Update");
	printf("\n4. Delete");
	printf("\n5. Display");
	printf("\n6. Merge");
	printf("\n7. Append");
	printf("\n8. Sort\n");
	
	
	printf("\nChoose an option from above : ");
	scanf("%d",&c);
	switch(c){
		case 1:
			printf("Enter the element you want to search : ");
			scanf("%d",&s);
			for(i=0;i<e;i++){
				if(s==arr1[i]){
					printf("Element found at %d index",i);
					break;
				}
				else{
					printf("Element not found");
				}	
			}
			break;
		
		case 2:
			if(n!=e){
			printf("Enter the index at which you want to insert the value : ");
			scanf("%d",&s);
			for(i=e;i>=s;i--){
				arr1[i+1]=arr1[i];
			}
			printf("Enter the value : ");
			scanf("%d",&v);
			arr1[s]=v;
			e=e+1;
			printf("\tArray arr1 : { ");
			for(i=0;i<e;i++){
				printf("%d ",arr1[i]);	
			}
			printf("}");
		}
		else{
			printf("Array is full");
		}
			break;
			
		case 3:
			printf("Enter the index you want to update : ");
			scanf("%d",&s);
			printf("Enter the updated value : ");
			scanf("%d",&v);	
			arr1[s]=v;
			printf("\tUpdated Array arr1 : { ");
			for(i=0;i<e;i++){
				printf("%d ",arr1[i]);	
			}
			printf("}");
			break;
			
		case 4:
			if(e!=0){
			
			printf("Enter the index at which you want to delete the value : ");
			scanf("%d",&s);
			for(i=s;i<=e;i++){
				arr1[i]=arr1[i+1];
			}
			e=e-1;
			printf("\tArray arr1 : { ");
			for(i=0;i<e;i++){
				printf("%d ",arr1[i]);	
			}
			printf("}");
		}
		else{
			printf("Array is empty");
		}
			break;
			
		case 5:
			printf("\n\tArray arr1 : { ");
			for(i=0;i<e;i++){
				printf("%d ",arr1[i]);	
			}
			printf("}");
			break;
		
		case 6:
			printf("Create another array to merge :- \n");
			printf("\nEnter the size of array : ");
		scanf("%d",&t);
		printf("How many elements do you want to enter : ");
		scanf("%d",&v);
		for(i=0;i<v;i++){
			printf("Enter elememt at %d index : ",i);
			scanf("%d",&arr2[i]);			
		}
		l=v+e;
		for(i=0;i<e;i++){
			arr3[i]=arr1[i];
		}
		for(i=0;i<v;i++){
			arr3[i+e]=arr2[i];
		}
		
		printf("\tMerged Array : { ");
			for(i=0;i<l;i++){
				printf("%d ",arr3[i]);	
			}
			printf("}");
		break;
		
		case 7:
			printf("Enter the value you want to append : ");
			scanf("%d",&v);
			arr1[e]=v;
			e=e+1;
			printf("\tUpdated Array : { ");
			for(i=0;i<e;i++){
				printf("%d ",arr1[i]);	
			}
			printf("}");
			break;	
		
		case 8:
			for(i=0;i<e;i++){
				for(j=i+1;j<e;j++){
					if(arr1[i]>arr1[j]){
						temp=arr1[i];
						arr1[i]=arr1[j];
						arr1[j]=temp;
					}
				}
			}
			printf("\Sorted Array : { ");
			for(i=0;i<e;i++){
				printf("%d ",arr1[i]);	
			}
			printf("}");
			break;
			
	}
	printf("\nDo you want to continue : ");
	scanf("%s",&w);	
}	
	return 0;
}
