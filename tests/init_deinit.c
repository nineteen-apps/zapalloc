/* -*-c-*-
   The MIT License (MIT)

   Copyright (c) 2016 - Ronaldo Faria Lima

   Permission is hereby granted, free of charge, to any person obtaining a copy
   of this software and associated documentation files (the "Software"), to deal
   in the Software without restriction, including without limitation the rights
   to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
   copies of the Software, and to permit persons to whom the Software is
   furnished to do so, subject to the following conditions:

   The above copyright notice and this permission notice shall be included in all
   copies or substantial portions of the Software.

   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
   IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
   FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
   AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
   LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
   OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
   SOFTWARE.

   Created: 2016-12-10 by Ronaldo Faria Lima

   This file purpose: ZapAlloc test suite
*/


#include <stdio.h>
#include "zapalloc.h"

int
main(void)
{
  zapalloc_context_t context;
  if (zapalloc_init(&context, 1024, 10) != E_ZPC_OK)
    {
      fprintf(stderr, "Failed to initialize ZapAlloc Library\n");
      return -0x1;
    }
  if (zapalloc_deinit(context) != E_ZPC_OK)
    {
      fprintf(stderr, "Failed do de-initializer ZapAlloc Library\n");
      return -0x1;
    }
  printf("Ok\n");
  return 0x0;
}
