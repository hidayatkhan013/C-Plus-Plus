## C Plus Plus Repository By Hidayat ur rehman
Problem Statement
Let's say you have an array based list. As you know we have different methods which work on the
array based list but we will be adding a new method to that class. The method’s name will be
MostFrequentElementInSubArray(int left, int right, int frequency). This method will take 3
parameters: left index, right index and frequency of element. Your main task will be to find those
elements in the subarray (left index to right index) which occur ‘frequency’ times or more than
‘frequency’ times.
Constraints: (You should have a piece of code to check these constraints before moving ahead)
1. 0 <= left <= right < arr.length representing a subarray of arr
2. 2 * threshold > right - left + 1
Example:
arr = [2,2,3,3,3,4,5,6]
We call MostFrequentElementInSubArray(0, 7, 2) and it will return the following elements (2,3).
Explanation: Because ‘2’ occurs more than or equal to frequency times i.e 2 times. Same goes for ‘3’
as it occurs more than ‘frequency’ times i.e. 3 times.
NOTE: You have to use pointers only.