int main(void)
{
  char s[] = "0123456789";
  int x;
  for (x=0;x<10;x++)
    if (x!=2 && x!=4)
      {
	putchar (s[x]);
      }
  putchar ('\n');
}
