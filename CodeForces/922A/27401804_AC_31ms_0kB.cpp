#include <stdio.h>
 
int main(){
	int o, c;
 
	scanf("%d%d", &c, &o);
 
	int p = c - (o - 1); 
 
	if(o == 0 || (o == 1 && c != 0) || p < 0 || p % 2){
		printf("No\n");
	}
	else{
		printf("Yes\n");
	}
}