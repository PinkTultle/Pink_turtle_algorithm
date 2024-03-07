#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int apart(int floor, int room){
	long ret = 0;
	
	if(floor == 0) return room;
	
	for(int k = room; room > 0; room--){
		ret += apart(floor-1, room);
	}	
	return ret;
}


int main(){
	
	int T, k, n;
	long result = 0;
	scanf("%d ", &T);
	
	for(int i = 0; i < T; i++){
		scanf("%d ", &k);
		scanf("%d ", &n);
		
		result = apart(k, n);
		
		printf("%d\n", result);
		
	}
	
	return 0;
}
