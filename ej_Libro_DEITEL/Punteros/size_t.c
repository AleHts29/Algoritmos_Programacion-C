#include<stdio.h>
int main()
{
const size_t N = 10;
int a[N];

// This is fine
for (size_t n = 0; n < N; ++n)
a[n] = n;

// But reverse cycles are tricky for unsigned 
// types as can lead to infinite loop
for (size_t n = N-1; n >= 0; --n)
printf("%d ", a[n]);
}