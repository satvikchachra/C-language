#include<stdio.h>
bool fun(int n);
int main(){
	int num;
	scanf("%d",&num);
	printf("%d",fun(num));
}
bool fun(int n){
	//storing last bit
	int prev = n%2;
	n/=2;
	while(n>0){
		int curr = n%2;
		//alternative bit logic
		if(curr==prev){
			return false;
		}
		prev = curr;
		n/=2;
	}
	return true;
}
