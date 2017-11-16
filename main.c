#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "morse.h"

#define BUF_LEN 300


int main(int argc, char** argv) {
	char *mystr = argv[2];
	//char *mystr = "abcdefghijklmnopqrstuvwxyz0123456789.:,;?='/!-_\"()$&@";
	char mor[BUF_LEN];
	char str[BUF_LEN];
	char out[BUF_LEN];
	memset(out, 0, BUF_LEN);
	memset(mor, 0, BUF_LEN);
	memset(str, 0, BUF_LEN);

	//printf("base string:\n%s\n", mystr);

	//TO LOWCASE
	str2lowcase(mystr, out, BUF_LEN);
	
	if(argv[1][1]=='e' || argv[1][1]=='E')
	{
		//TO MORSE STRING
		String2MorseString(out , mor, BUF_LEN);
		printf("endcode into morse code string:\n[%s]\n" , mor);
	}
	else
	{
		//TO NORMAL STRING
		//MorseString2String(mor, str, BUF_LEN);
		MorseString2String(out, str, BUF_LEN);
		printf("decode into string:\n[%s]\n", str);
	}
	return 0;
}

