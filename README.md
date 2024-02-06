# Radix Sort

The *Radix Sort* is one that was not presented in class. This sort
algorithm is a bit different from others that we have seen in that
it only works on certain kinds of data. It can work easily with integers,
and with a bit of work with strings as well. The idea of a custom
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
- Clear the buckets for the next pass.

## Part 1 - Implement a Radix Sort

For this assignment, implement a radix sort in header file *radix.h*. A
test program is included, *sorttest4.cpp*, that creates an array of integers
each no more than 5 digits (much like 5-digit Zip Codes). Your implementation
need not be a template function, since it will specifically work with
integers. Further, you do not need to accommodate a custom comparison
function as that is not applicable. An empty function implementation is
provided in the starter code.

Although not required for this assignment, you might consider using *vector*s
for you buckets, as vectors are abstractions of dynamic arrays. You can
declare an array of 10 vectors, with indexes 0 through 9, as follows:

```C++
std::vector<int> buckets(10);
```

Here each of *buckets[0]*, *buckets[1]*, etc. is a vector.
Use *vector* member function
*push_back* to add an integer to a vector. You can clear a bucket with the
*clear* member function.

Of course, other implementations are possible.

Be sure to change the include file at line 20 of *sorttest4.cpp* to use you
*radix.h* header file. The code given uses *quick.h*.

You are free to use outside resources to research this sort algorithm, but
document any resources you used as part of your submission for part 2 of this
assignment.

## Part 2 - Analysis and Comparison with Quicksort

Include your responses for this part in file *RESPONSES.md* in markdown
format. Include your name at the top of both *RESPONSES.md" and *radix.h*.

Run some timing tests for both *Quicksort* and *Radix Sort*. (Of course
you need to change the include file at line 20 in *sorttest4.cpp* to change
algorithms.) Include the results of your tests when you submit this assignment.
Be sure to use a progression of array sizes to get a good feel for how they
compare. How do the two sorting algorithms compare?

What is the run-time complexity of this algorithm? Alghough you might find
online resources that will address this topic, what is the run-time
complexity when you consider that the values to be sorted are specifically
5 digits or fewer? Do you consider it to be linear, logarithmic, N log N,
quadratic, or something else?
