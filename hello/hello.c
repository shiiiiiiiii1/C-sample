#include <stdio.h>   /* 決まり文句　標準入出力　便利な機能が詰まったもの */

/*
第一回
 コメントアウト

int main(void) {
	printf("hello world\n");
	return 0;
}
*/

/*
第二回
 データ型の主な種類
	int：整数 %d
	float：実数 %f
	char：1文字 %c

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
 演算子
	+ - * /
	%：余り
 代入を伴う演算子
	x = x + 5; -> x += 5;
 単項演算子
 	++ --
*/
int main(void) {
	int x;
	x = 10 % 3;   /* 1 */
	x += 3;   /* 4 */
	x ++;   /* 5 */

	printf("%d\n", x);

	return 0;
}
