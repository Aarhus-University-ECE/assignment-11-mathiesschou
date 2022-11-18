#include "sum.h"

#include <stdio.h>
#include <assert.h>

/* Sum integers 1 to n */
int sum (int n)
{
/* pre-condition */
  assert (n >= 1);
/* post-condition */
  if (n > 1)
    return n + sum (n - 1);
  else
    return 1;
}

/* Sum integers 1 to n */
int sumtail (int n, int total)
{
  /*
   * Pre: Assert hvis n er mindre end 1.
   */
  
  //assert (n >= 1);

  /*
   * Post: If-statement: Hvis n er 1
   * return 1 + total.
   * Hvis n > 1: Returner
   * sumtail funktion, så vi får et ulige tal
   */
  
  if(n == 1)
  {
    return 1 + total;
  }
  else if(n > 1)
  {
    return sumtail(n - 1, n + total);
  }
  else
    return 0;
}

/* Sum integers 1 to n */
int sumwhile (int n)
{
  /*
   * Pre: Assert hvis n er mindre end 1.
   */
  
  assert (n >= 1);

  int sum = 0;

  while(n >= 1)
  {
    sum += n;
    n--;
  }

  return sum;
}

