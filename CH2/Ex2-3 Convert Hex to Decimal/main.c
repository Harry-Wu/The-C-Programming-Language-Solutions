#include<stdio.h>
#include<math.h>

int main(void)
{
  char *endp = NULL;
  char *test[] =
  {
    "F00",
    "bar",
    "0100",
    "0x1",
    "0XA",
    "0X0C0BE",
    "abcdef",
    "123456",
    "0x123456",
    "deadbeef",
    "zog_c"
  };

  unsigned int result;
  unsigned int check;

  size_t numtests = sizeof test / sizeof test[0];

  size_t thistest;

  for(thistest = 0; thistest < numtests; thistest++)
  {
    //result = htoi(test[thistest]);
    result = (unsigned int)strtoul(test[thistest], &endp, 16);
    if (*endp == '\0')
    {
        printf("Testing %s. Correct! %u\n", test[thistest], result);
        printf("endp is '\\0'\n");
    }
    else
    {
        printf("Testing %s. Incorrect! %u\n", test[thistest], result);
        printf("endp is %c\n", *endp);
    }

  }

  return 0;
}
