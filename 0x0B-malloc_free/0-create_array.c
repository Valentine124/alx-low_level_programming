#include <stdlib.h>
#include "main.h"

/**
 * create_array - create array of characters
 *
 * @size: size of the array
 *
 * @c: char to be to initialize the array
 *
 * Return: a pointer or null
*/
char *create_array(unsigned int size, char c)
{
  char *arr;
  
  if (size == 0)
    return (NULL);

  arr = (char *) malloc(sizeof(size));

  if (arr == NULL)
    {
      return (NULL);
    }
  else
    {
      arr[0] = c;

      return (arr);
    }
}
