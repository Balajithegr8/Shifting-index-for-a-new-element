#include <iostream>
#include <stdio.h>
int arr[6]={1,2,3,4,5,6};
void insert(int index, int arr[6], int num)
{
	for(int len=6; len>index;len=len-1)
	{
	 arr[len]=arr[len-1];
	 }
	arr[index]=num;
	for(int i=0; i<=6; i++){
	    printf("%d\n" ,arr[i]);
	 }
	return;}
	
int main(){
	int num;int index;
	printf("Enter a number:");
	scanf("%d",&num);
	printf("Enter index:");
	scanf("%d",&index);
    insert(index,arr,num);
	return 0;
}
