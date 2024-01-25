# Leet code questions 

## [-_-]

### 1st Problem
**Difficulty: Easy**
This problem bears a resemblance to the merge step in the merge-sort algorithm. It is relatively straightforward, with:
- Time Complexity: O(n)
- Space Complexity: O(n + m)

### 2nd Problem
**Difficulty: Easy**
This problem involves checking whether consecutive numbers in a list are identical and excluding duplicates. The solution entails:
- Time Complexity: O(n)
- Space Complexity: O(1)

### 3rd Problem
**Difficulty: Easy (Moderate)**
This problem revolves around finding the index of a substring within a larger string. It is slightly more challenging but still falls within the easy category:

I did pseudocode with python 
- Time Complexity: O(n)
- Space Complexity: O(1)

### 4th Problem
**Difficulty: Easy**
This problem addresses the task of finding the insertion point of a target element in a sorted array while adhering to the following constraints:

Since O(logn) was given in the problem ,my first approach was to do binary search :

- Time Complexity: O(log n)
- Space Complexity: O(1)

### 5th Problem
**Difficulty: Easy**
This problem is easy to solve if you thing form backword of the array not from forward because i first approach it with the forward approach i can not pass the one test case :

- Time Complexity: O(n)
- Space Complexity: O(1)

### 6th Problem
**Difficulty: Easy**
My first approach was to add all the numbers and then divide the sum by 2. If the remainder was not 0, I considered that as the answer.If 0 then using while loop . However, this method only satisfied 6 out of 61 test cases (excluding negative numbers).

After reviewing discussions, I decided to explore a different approach using XOR.

- Time Complexity: O(n)
- Space Complexity: O(1)

### 7th Problem
**Difficulty: Medium**
Find First and Last Position of Element in Sorted Array.

The task is to find the first and last positions of an element in a sorted array with a desired time complexity of O(logn). I recognized that binary search would be a suitable approach, and then I employed two distinct loops to find the first and last positions.

- Time Complexity: O(logn)
- Space Complexity: O(1)

### 8th Problem
**Difficulty: Easy**
Easily one of the easiest question in the leet code just had to add term that that are not equal to be erase term in the array.

- Time Complexity: O(n)
- Space Complexity: O(1)

### 9th Problem
**Difficulty:Easy**
My first approach was simply checking whether closing bracket exist in the array is equal to opening bracket, but cannot passed the all test case because didn't count for ([)] , So latter use stack .

- Time Complexity: O(n)
- Space Complexity: O(n)

### 10th Problem
**Difficulty:Easy**
sqrt(x) i first think it as simply doing loop then comparing upper and lower limit then print the lower value .
but the top answer was simply return sqrt(x) !_!

- Time Complexity:O(1)
- Space Complexity:O(1)

### 11th Problem
**Difficulty:Easy**
simple use of shift operator >>= to compare whether it is 1 or not .

- Time Complexity:O(n)
- Space Complexity:O(1)
### 12th Problem
**Difficulty:Easy**
I used approach like if operator bits some equal to k then it will used as indices .
- Time Complexity:O(nlogn)
- space Complexity:O(1)

### 13th Problem
**Difficulty:Easy**
My approach was to make [0][0] as 1 then made all first and last element in the first list as 1,1 and remaining will the addition of the row above it.
- Time complexity:O(n^2)
- space complexity:O(n^2)

### 14th Problem
**Difficulty:Easy**
Take my fair share of time understand but when clicked it was very simple , we just had to work with multiple loops :

- Time complexity:O(n)
- space complexity:O(n)
### 15th Problem
**Difficulty:Medium**
i used python in this as the pseudo code , but with python it was too easy now i am struggling lil bit with c but did it , i wasn't thinking straigth with str once i did i got this easily 

- Time complexity:O(n)
- space complexity:O(1)

### 16th Problem
**Difficulty:Easy**
Happy to find the solution in the first try with recursion , i love how easy it was with recursion . I can do this with the loop only but feeling when you get using recursion is something else.

- Time complexity :0(nlogn) 
- space compelxity :O(nlogn)

### 17th Problem
**Difficulty:Easy**
simple problem with the for loop just has to track the distance between the same char if there exist a greater distance change it to that . 
IMP :- should have used 2 pointer one from start and other from the back and then compare it to find the distance it will biggest by difault and also be taking less time.

- Time complexity :0(n^2)
- space compelxity :O(1)

### 18th Problem
**Difficulty:Medium**
i tried solving this with c but find it little bit complicated so instead i shifted to cpp .

- Time complexity :0(n^2)
- space compelxity :O(1)

### 19th Problem
**Difficulty:Easy**
simple just missed the case if one str has much more chraracter test case , but after some test got this too.

- Time complexity :0(n^2)
- space compelxity :O(n)

### 20th Problem 
**Difficulty: medium**
use counter to calculate if counter is two append the row2 , if row2 not exist make it first.

- Time complexity : O(n^2 * log(n))
- space compelxity :O(n^2)

### 21th Problem
**Difficulty:medium**
I didn't think for making a counter for the previous value that is why i am continuing getting wrong value it was a dumb mistake, but when i do take this prev value counter in the accounnt it became a cake walk.

- Time complexity :O(n^2)
- space complexity:O(n)

### 22th Problem
**Difficulty:medium**
After doing the rought work i got that if the count of each divided by the 3 if it is 10.1 taking the ceiling of it because we have to take 2 two step one in it , then adding  all to the result . Have little bit of problem in the memory management .

- Time complexity :O(n)
- space complexity :O(max(n)) 

### 23th Problem
**Difficulty: Hard**
Trick is make two counter one for result and other for checking if the result will increament or not , if pre<0 than break and return result , also first we have to sort it that is why i used cpp instead of c because using qsort is rather tedious .

- Time complexity :O(nlogn)
- space complexity :O(1)

### 24th Problem
**Difficulty: medium**
I don't understand this problem at so has to look up for video in the youtube ,@neetcode explaination help me alot.

- Time complexity :O(n^2)
- space complexity :O(n)

### 25th Problem
**Difficulty: medium**
i did it with most brute force approach possible , instead of making the another array i just erase that are useless and change their values.
- time complexity :O(n^2) 
- space complexity :O(1)

### 26th Problem
**Difficulty: hard**
most basic instinct was to plant the plant that take longest to bloom as it will help , so first i have to sort it . I already figured out that using c will make it complicated and i don't know cpp to much so i first search how to sort pair of vector , which was easier than i thought , later making counter was the nail in the coffin , first didn't thought of if having second last blooming extending the last but after taking the max of it i got the answer.

- Time complexity :O(nlogn)
- Space complexity :O(n)

### 27th Problem
**Difficulty:medium**
is was the one of the trickiest question , but answer always be false, as n-2 always give result 12 which is not palindrome.
    - n = 5 
    - n-2  = 3
    - n%3= 2
    - n = n/3 = 1
    - n%3 = 1
    - 12 is not a palindrome
- Time complexity :O(1)
- Space complexity :O(1)

### 28th Problem
**Difficulty : easy**
bst question with recursion . 
- Time complexity :O(logn)
- Space complexity :O(1)

### 29th Problem
**Difficulty : easy**
simple 1 counter for each half .
- Time complexity :O(n)
- Space complexity :O(1)

### 30th Problem
**Difficulty : medium**
problem three important step:
1. counter for each letter
2. checking if no letter match then false , if length differ return false
3. sort them and compare them if they are equal return true else false

- Time complexity :O(nlogn)
- Space complexity :O(n)

### 31th Problem
**Difficulty : easy**
it is a variation of boyer moore voting problem where we take first element as conditate and vote = 1 if second element is same vote++ else vote-- once vote = 0 we will make the arr[i] as the candidate , loop until the end , then return the candidate as winning one 
- Time complexity :O(n)
- Space complexity :O(1)

### 32th Problem
**Difficulty : medium**
Brute force using hashmap but alot of memory allocation using calloc was better than malloc as it initializes the value to zero
- Time complexity :O(n)
- Space complexity :O(n)

### 33th Problem
**Difficulty : medium**
Brute force approach using the nested loop resulted in the time exceed , so used two pointer instead (shifting pointer) make it a lot easier .
- Time complexity :O(n)
- Space complexity :O(1)

### 34th Problem
**Difficulty : hard**
classic problem has little bit of 2 pointer with checking if less than move smaller with the special thing 
Key => from i lhs and rhs find the larger value and add the min(rhs,lhs)-value[i]  at each index.
- Time complexity :O(n)
- Space complexity :O(1)

### 35th Problem
**Difficulty :medium**
simple stack problem when accounter * then pop else push.
- Time complexity :O(n)
- Space complexity :O(n)

### 36th Problem
**Difficulty :medium**
double pointer problem , sliding both pointer when value is little less or more.
- Time complexity :O(n)
- Space complexity :O(1)

### 37th Problem
**Difficulty :medium**
House robber, best example for dp after the min step , dp solution are beautiful and simple once you understand it.
use only 2 pointer last and second and find the max of it.
- Time complexity :O(n)
- Space complexity :O(1)

### 38th Problem
**Difficulty :medium**
it was rather a math puzzle , one could've used dp here.
- Time complexity :O(n)
- Space complexity :O(1)

### 39th Problem
**Difficulty :medium**
simple stack problem , did this one on the exam .
- Time complexity :O(n)
- Space complexity :O(n)

### 40th Problem
**Difficulty :medium**
i did think of one solution but that didn't work , so tried solving with discussion's hint,stil unsure how this work.
review it later.
- Time complexity :O(n)
- Space complexity :O(1)

### 41th Problem
**Difficulty :hard**
beautiful question ,i really love math problems , once you got it , it became obvious to you.
- Time complexity :O(logn)
- Space complexity :O(1)

### 42nd Problem
**Difficulty :medium**
Math problem, use example to formalute a eq than apply it .
- Time complexity :O(n)
- Space complexity :O(1)

### 43nd Problem
**Difficulty :medium**
Problem lies how to exclude the k , simple if num - k < nums itself mean we have counted the nums-k , so we will skip that , i did do this solution on for loop but while loop will be better.
- Time complexity :O(n)
- Space complexity :O(1)
