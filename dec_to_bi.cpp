#include<stdio.h>
int main(){
	int num,base = 1, binary = 0;
	scanf("%d",&num);
	int p = num;
	while(p>0){
		int rem = p%2;
		binary += rem*base;
		p/=2;
		base*=10;
	}
	printf("%d",binary);
}
