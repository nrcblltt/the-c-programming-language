#include <stdio.h>

int isvalid(char);
int getsinglevalue(char);
int htoi(char[]);

int main()
{
  printf("( is %d, 4 is %d, R is %d, B is %d, r is %d, b is %d\n",
	 isvalid('('),
	 isvalid('4'),
	 isvalid('R'),
	 isvalid('B'),
	 isvalid('r'),
	 isvalid('b'));
  printf("2 is %d, B is %d, f is %d\n",
	 getsinglevalue('2'),
	 getsinglevalue('B'),
	 getsinglevalue('f'));
  printf("3F4 is %d, D5 is %d, cb3 is %d, 000 is %d\n",
	 htoi("3F4"),
	 htoi("D5"),
	 htoi("cb3"),
	 htoi("000"));
  printf("0x3F4 is %d, 0XD5 is %d, 0xcb3 is %d, 0X000 is %d\n",
	 htoi("3F4"),
	 htoi("D5"),
	 htoi("cb3"),
	 htoi("000"));
  return 1;
}

int htoi(char s[])
{
  int i, n;
  
  n = 0;
  for (i = 0; isvalid(s[i]); ++i)
    n = 16 * n + getsinglevalue(s[i]);

  return n;
}

int isvalid(char s)
{
  if (s >= '0' && s <= '9' || s >= 'A' && s <= 'F' || s >= 'a' && s <= 'f')
    return 1;

  return 0;
}

int getsinglevalue(char s)
{
  if (s >= '0' && s <= '9')
    return s - '0';
  if (s >= 'A' && s <= 'F')
    return s - 'A' + 10;
  if (s >= 'a' && s <= 'f')
    return s - 'a' + 10;
  return 0;
}

 
