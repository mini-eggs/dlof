#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void step(char last, char curr);

int main(void) 
{
  char last, curr;

  last = '\0';
  curr = getchar();

  while(curr != EOF)
  {
    step(last, curr);

    last = curr;
    curr = getchar();
  }

  return 0;
}

void step(char last, char curr)
{
  char tmp;

  if(curr == '\n')
  {
    /* the interesting bits */

    tmp = getchar();

    if(tmp == EOF)
    {
      /* hmm, well that's it folks! */
      putchar(curr);
      exit(0);
    }
    else if (tmp == '\n')
    {
      /* Two newlines in a row. This is very much intentional. Print out both
         and continue. */
      putchar(curr);
      putchar(tmp);
      return;
    }
    else 
    {
      /* we have some special cases to check:
         1. Two spaces in a row.
         2. If we have tons of newlines in a row.
         3. Two non-spaces in a row. */

      /* It would have been really nice if lseek worded on STDIN_FILENO */

      if(last == ' ' && tmp == ' ')
      {
        /* no op, since we already printed "last" */
      }
      else if(last == '\n' && curr == '\n' && (tmp != ' ' && tmp != '\n'))
      {
        /* tons of new characters ni a row. */
        putchar(tmp);
      }
      else if(last != ' ' && tmp != ' ')
      {
        /* make sure we put spaces where we need them */
        putchar(' ');
        putchar(tmp);
      }
      else
      {
        /* business as usual */
        putchar(tmp);
      }
    }
  }
  else
  {
    /* business as usual */
    putchar(curr);
  }
}

