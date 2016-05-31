#include <stdio.h>   /* 決まり文句　標準入出力　便利な機能が詰まったもの */

/*
第一回

int main(void) {
	printf("hello world\n");
	return 0;
}
*/

/*
第二回

int main(void) {
	int x = 10;
	float y = 5.2;
	char c = 'A';

	printf("x = %d, y = %f, c = %c\n", x, y, c);
	return 0;
}
*/

/*
第三回

int main(void) {
	int x;
	x = 10 % 3;   // 1
	x += 3;   // 4
	x ++;   // 5

	printf("%d\n", x);

	return 0;
}
*/

/* 
第四回

int main(void) {
	int score = 80;

	if(score >= 60) {
		printf("OK!\n");
	} else if(score >= 50) {
		printf("so so...\n");
	} else {
		printf("NG!\n");
	}

	return 0;
}
*/

/*
第五回
*/
int main(void) {
	int rank = 2;
	switch(rank) {
		case 1:
			printf("Gold!\n");
			break;
		case 2:
			printf("Silver!\n");
			break;
		case 3:
			printf("Bronze!\n");
			break;
		default:
			printf("no medal...\n");
			break;
	}
}








