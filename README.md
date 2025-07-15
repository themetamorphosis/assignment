# assignment
1a.
int i, j, k = 0;
for (i = n / 2; i <= n; i++) {
    for (j = 2; j <= n; j = j * 2) {
        k = k + n / 2;
    }
}
here the outer loop is running form n/2 to n so n/2 times with 1 step
--> time complexity to run form n/2 times is O(n)
and the inner loop is running from 2 to n with doubling the step each time eg if element is 16 the steps would be 4
--> time complexity for the inner loop is O(log n)
total time complexity for the block of code is O(n log n)

1b.
static int floorSqrt(int x) {
    if (x == 0 || x == 1)
        return x;
    int i = 1, result = 1;
    while (result <= x) {
        i++;
        result = i * i;
    }
    return i - 1;
}


for this block of code the loop is running until 
i*2 <= x
or i = √x
so the time complexity is O( √x )

2.
used two pointer method for the coding problem
moving the pointer of the shorter line to find the maximum area.
