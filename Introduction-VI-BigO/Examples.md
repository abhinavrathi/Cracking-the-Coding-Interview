### Example 1

Let n = array.length<br>
Then run time is in O(n). (We drop the constant 2)

### Example 2

The run time is in O(n<sup>2</sup>).

### Example 3

Total Iterations are n-1 + n-2 + n-3 + ... + 2 + 1.<br>
This is equal to n(n-1)/2. The run time is in O(n<sup>2</sup>).

### Example 4

The run time is in O(ab).

### Example 5

The run time is in O(ab).

### Example 6

The run time is in O(n). (We drop the constant 1/2)

### Example 7

O(N + P), where P < N/2 is in O(N)<br>
O(2N) is in O(N)<br>
O(N + log N) is in O(N)<br>
O(N + M) is <b>not</b> in O(N).

### Example 8

Let s be the length of longest string and let there be total n strings.<br>
Time to sort 1 string = O(s log s)<br>
Time to sort n strings = O(n * s log s)<br>
Time to sort these sorted strings = O(n log n) (But since comparsion of two strings will take O(s) time). The actual time for this is O(s * n log n)<br>
Thus, The run time is O(n * s (log s + log n))

### Example 9

The run time is in O(n) since the code visits all n nodes.

### Example 10

The run time in in O(&radic;n)

### Example 11

The iterations are n downto 1 = O(n)

### Example 12

The run time is in O(n!)

### Example 13

The run time is in approximately O(2<sup>n</sup>) and more accurately less than this. (O(1.6<sup>n</sup>))

### Example 14

The iterations are 2<sup>0</sup> + 2<sup>1</sup> + 2<sup>2</sup> + ... + 2<sup>n</sup> + 2<sup>n</sup> = 2<sup>n+1</sup> - 1<br>
The run time is in O(2<sup>n</sup>)

### Example 15

The run time is in O(n)

### Example 16

The run time is in O(log n)
