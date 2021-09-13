#include <stdio.h>

int main()
{	
	int a = 0xf;
	printf("%d", printf("%c", '\0')); // \0 \0\0
	return (0);
}
// 検証
// printfの出力結果をバイナリファイルで見る
// test → "" ファイルサイズ0 バイナリで見ても値は入っていない
// test_1 → "%c", '\0' ファイルサイズ1 00という値が入っている
// test_2 → "\0" ファイルサイズ0 おそらく正しく認識されていない
// 以下のようなwarningが出る
// main.c:5:10: warning: format string contains '\0' within the string body [-Wformat]
//         printf("\0");
