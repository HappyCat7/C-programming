#include <stdio.h>
#include <stdlib.h> //난수 생성 관련 
#include <time.h>

int main(){
	
	//랜덤함수 만들기 

	srand(32434243234);
	
	//1970년 1월 1일 0시 0분 0초부터, 현재 시간까지 경과된 초를 리턴
	printf("%d \n", time(NULL));

	//1~10까지의 난수 생성 
	for(int i=0; i<10; i++){
			
			int a = rand() % 10 + 1;
	
		printf("%d \n",a);
	}
	
}
