#include "main.h"
#include <unistd.h>
#include <stddef.h>

int _putchar(char c) 
{
  return write(1, &c, 1);
}

int _islower(int c) 
{
  return (c >= 'a' && c <= 'z'); 
}

int _isalpha(int c)
{
  return ((_islower(c)) || (_isupper(c)));
}

int _abs(int n) 
{
  return (n >= 0) ? n : -n;
}

int _isupper(int c) 
{
  return (c >= 'A' && c <= 'Z');  
}

int _isdigit(int c)
{
  return (c >= '0' && c <= '9');
}

int _strlen(char *s)
{
  int len = 0;
  while (*s++)
    len++;
  return len;
}

void _puts(char *s)
{
  while (*s) {
    _putchar(*s++);
  }
  _putchar('\n');
}

char *_strcpy(char *dest, char *src)
{
  char *temp = dest;
  while ((*dest++ = *src++) != '\0');
  return temp;
}

int _atoi(char *s)
{
  int sign = 1;
  int num = 0;
  int i = 0;

  if (s[0] == '-')
  {
    sign = -1;
    i++; 
  }
  
  for (; s[i] != '\0'; i++)
    num = num * 10 + s[i] - '0';
  
  return sign * num;
}

char *_strcat(char *dest, char *src)
{
  char *temp = dest;

  while (*dest)
    dest++;
  
  while ((*dest++ = *src++) != '\0');
  
  return temp;
}

char *_strncat(char *dest, char *src, int n)
{
  char *temp = dest;
  
  while (*dest)
    dest++;

  while (n-- && (*dest++ = *src++) != '\0');

  *dest = '\0';

  return temp;
}

char *_strncpy(char *dest, char *src, int n) 
{
  char *temp = dest;

  while (n-- && (*dest++ = *src++) != '\0');
  
  while (n--)
    *dest++ = '\0';

  return temp;
}

int _strcmp(char *s1, char *s2)
{
  while(*s1 && (*s1 == *s2))
  {
    s1++;
    s2++;
  }

  return *s1 - *s2;
}

char *_memset(char *s, char b, unsigned int n)
{
  char *temp = s;

  while (n--)
    *s++ = b;
  
  return temp;
}

char *_memcpy(char *dest, char *src, unsigned int n)
{
  char *temp = dest;

  while (n--)
    *dest++ = *src++;

  return temp;
}

char *_strchr(char *s, char c)
{
  while (*s && *s != c)
    s++;

  if (*s == c)
    return s;

  return NULL;
}

unsigned int _strspn(char *s, char *accept)
{
  unsigned int count = 0;

  while (*s && _strchr(accept, *s++))
    count++;
  
  return count;
}

char *_strpbrk(char *s, char *accept) 
{
  while (*s)
    if (_strchr(accept, *s))
      return s;
    else
      s++;

  return NULL; 
}

char *_strstr(char *haystack, char *needle)
{
  char *h, *n;

  for (h = haystack; *h != '\0'; h++) {
    n = needle;

    while (*n && *h == *n) {
      h++;
      n++;
    }
    
    if (*n == '\0') {
      return h - (n - needle);
    }

    h = h - (n - needle) + 1; 
  }

  return NULL;
}
