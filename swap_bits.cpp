#include<stdio.h>
int fun(int n,int p,int q);
int main(){
	int num,p,q;
	scanf("%d%d%d",&num,&p,&q);
	printf("%d",fun(num,p,q));
}
int fun(int n,int p ,int q){
	int bit1 = (n>>p)&1;
	int bit2 = (n>>q)&1;
	int x = bit1^bit2;
	x = (x<<p)|(x<<q);
	int ans = n^x;
	return ans;
}
