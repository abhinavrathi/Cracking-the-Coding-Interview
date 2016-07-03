# VI - Big O

Time & Space Complexity are a metric to judge the efficiency of an Algorithm.<br>

## Difference between Big O, Big &theta; and Big &Omega;

<b>Big O :</b> Analogy is with a "less than equal to relationship".<br>
Eg. Displaying all items in an array takes O(n) time. But we can also say it takes O(n<sup>2</sup>) or O(n<sup>3</sup>) time as well, though they are not tight bounds.

<b>Big &Omega; :</b> Analogy is with a "greater than equal to relationship".<br>
Eg. Displaying all items in an array takes &Omega;(n) time. But we can also say it takes &Omega;(log n) or &Omega;(1) time as well, though they are not tight bounds.

<b>Big &theta; :</b> A runtime that is both in O and &Omega; is said to be in &theta;.<br>
Eg. That is, as above, an algorithm is in &theta;(n), if it is both in O(n) and &Omega;(n). &theta; gives a tighter bound.

## Best Case, Worst Case and Expected Case

We rarely use Best Case Complexity to show the efficiency of an algorithm since it is a rare occurence. We usually use worst case or expected case complexity analysis.

Note: Drop the Constants and the Non-Dominant terms.

## Amortized Analysis

This is the case when a sequence of similar operations take different times. Rather than taking the largest time complexity among the operations, we try to average out the complexity per operation to give a tighter bound.<br>
Eg. A dynamic array whose size is doubled everytime it reaches its capacity. Worst Case of an Insertion is O(n) while amortized case run time is O(1) per insertion.

## log N runtime

This happens in case of a Binary Search.

## Recursive runtimes

We usually define these as O(branches<sup>depth</sup>).
