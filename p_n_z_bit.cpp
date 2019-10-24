#include<stdio.h>
int check(int n){
	return 1 + (n>>31) - (-n>>31);
}
int main(){
	int n;
	scanf("%d",&n);
	if(check(n)==0){
		printf("negative");
	}
	else if(check(n) == 2){
		printf("positive");
	}
	else if(check(n)==1){
		printf("zero");
	}
}

