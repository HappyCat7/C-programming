#include <stdio.h>
#include <stdlib.h> //���� ���� ���� 
#include <time.h>

int main(){
	
	//�����Լ� ����� 

	srand(32434243234);
	
	//1970�� 1�� 1�� 0�� 0�� 0�ʺ���, ���� �ð����� ����� �ʸ� ����
	printf("%d \n", time(NULL));

	//1~10������ ���� ���� 
	for(int i=0; i<10; i++){
			
			int a = rand() % 10 + 1;
	
		printf("%d \n",a);
	}
	
}
