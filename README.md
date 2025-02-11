# Radix Sort

The radix sort algorithm is a bit different from others that we have seen in that
it only works on certain kinds of data. It can work easily with integers,
and with a bit of work it can operate on strings as well. The idea of a custom
comparison function, as was the case with algorithms presented in class,
is really not applicable.

This is an algorithm that has been around since the late 1800's, pre-dating
the electronic computer. It has been used by the Post Office to sort mail
pieces since the introduction of Zip Codes in the 1960's.

Sometimes known as a "bucket sort", the radix sort makes several passes through
the data. In the case of 5-digit Zip Codes, the algorithm makes 5 passes, one
for each digit in the data being sorted. The algorithm requires 10 "buckets",
one each for the digits 0 through 9. Each pass of the algorithm operates on
a single digit position and proceeds
as follows, beginning with the right-most (least significant) digit:

- For each value in the array being sorted, copy that value to the end of the
bucket corresponding to the digit in the current digit position.
- For each bucket, copy all values back to the original array, start with all
values in bucket 0, then all values in bucket 1, and so on up to bucket 9.
- Empty the buckets for the next pass.
