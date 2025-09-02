

[C compiler used is codeblock appplication software with command prompt] 


BINARY SEARCH

   1. Binary Iterative

   -> It is meant to search the given element in an array using binary search using iteration.
   -> Array is created by taking random numbers.
   -> Since for binary search sorted array is required so array of random numbers is sorted
      using insertion sort.
   -> Here we have input the element to be searched using command line argument.
   -> Then function binary_search is called and the element is searched by dividing the search
      interval in half.It begins with interval covering the whole array.If the searched value
      is less than middle of the interval, the interval is shifted to lower half else to upper 
      half.It checks until the element is found or the interval is empty.
   -> But, Here binary search is happening using iterative while loop
   
   2. Binary Recursive

   -> It is meant to search the given element in an array using binary search with recursion.
   -> Array is created by taking random numbers.
   -> Since for binary search sorted array is required so array of random numbers is sorted
      using insertion sort.
   -> Here we have input the element to be searched using command line argument.
   -> Then function binary_search_recursive is called and the element is searched by dividing the 
      search interval in half.It begins with interval covering the whole array.If the searched value
      is less than middle of the interval, the interval is shifted to lower half else to upper 
      half.It checks until the element is found or the interval is empty.
   -> But, Here binary search is happening using recursion where the function binary_search_recursive
      is called again and again.

   Comparison: There is not much difference between the run time of binary search using iteration by 
               while loop and binary search using recursion even if the algorithm of both the concept 
               are different.



FIBONACCI SERIES

   1. Fibonacci iterative
   
   -> It is meant to find fibonacci series using iterative concept.
   -> Here we have input the nth value using command line argument.
   -> Function fibonacci_dp is called.
   -> Fibonacci series is find by illteration using for loop.
   -> Nth fibonacci series is print using the corresponding function fibonacci_dp.
   
   2. Fibonacci recursive

   -> It is meant to find fibonacci series using recursive function.
   -> Here we have input the nth value using command line argument.
   -> The function fibonacci_recursive is call again and again using recursive concept.
   -> Nth fibonacci series is print using the function fibonacci_recursive.

   Comparison: Since Fibonacci iterative is using iterative using for loop so it takes 
               less time to execute but in the case of fibonacci recursive the function
	       is called again and again so it takes more time to execute
