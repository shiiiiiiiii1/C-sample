#include <stdio.h>   /* 決まり文句　標準入出力　便利な機能が詰まったもの */

/*
第二回

int main(void) {
	printf("hello world\n");
	return 0;
}
*/

/*
第三回

int main(void) {
	int x = 10;
	float y = 5.2;
	char c = 'A';

	printf("x = %d, y = %f, c = %c\n", x, y, c);
	return 0;
}
*/

/*
第四回

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
第五回

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
第六回

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
*/

/*
第七回

int main(void) {
	int m = 20;

	while(m < 10) {
		printf("m : %d\n", m);
		m++;
	}
	
	int n = 20;

	do {
		printf("n : %d\n", n);
		n++;
	} while(n < 10);

	return 0;
}
*/

/*
第八回

int main(void) {
	int m;
	for(m = 0; m < 10; m++) {
		if(m == 3) {
			continue;
		}
		if(m == 8) {
			break;
		}
		printf("m : %d\n", m);
	}
	return 0;
}
*/

/*
第九回

float getMax(float a, float b) {
	if(a >= b) {
		return a;
	} else {
		return b;
	}
}
int main(void) {
	float result;
	result = getMax(2.3, 5.2);
	printf("%f\n", result);

	return 0;
}
*/

/*
第十回

float getMax(float a, float b);
void seyHi(void) {
	printf("sayHi!\n");
}
int main(void) {
	
	float result;
	result = getMax(2.3, 5.2);
	printf("%f\n", result);

	seyHi();
	return 0;
}
float getMax(float a, float b) {
	if(a >= b) {
		return a;
	} else {
		return b;
	}
}
*/

/*
第十一回
*/
float getMax(float a, float b) {
	return (a >= b) ? a : b;
}
int main(void) {
	float result;
	result = getMax(2.3, 5.2);
	printf("%f\n", result);

	return 0;
}





