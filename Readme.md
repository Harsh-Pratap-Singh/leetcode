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

### 43th Problem
**Difficulty :medium**
Problem lies how to exclude the k , simple if num - k < nums itself mean we have counted the nums-k , so we will skip that , i did do this solution on for loop but while loop will be better.
- Time complexity :O(n)
- Space complexity :O(1)

### 44th Problem
**Difficulty :medium**
Dp approach, count every occurence in both if both are equal dp of that will we dp of prev + 1 , else we will take the highest dp.
- Time complexity :O(n^2)
- Space complexity :O(n+m)

### 45th Problem
**Difficulty :medium**
Little bit tricky to figure out , but simply just add two until you get number bigger or equal to n, every time you add just move the counter.
- Time complexity :O(sqrt(n))
- Space complexity :O(1)

### 46th Problem
**Difficulty :medium**
if it is divisible by 3 then a/3 , a/3 -1 and a/3 +1 is the ans , it is even easier than some easy problems.
- Time complexity :O(1)
- Space complexity :O(n)

### 47th Problem
**Difficulty :hard**
xor question , property used (a&b)^(a&c) can be used like a^b&a^b which is more efficient.
- Time complexity :O(n)
- Space complexity :O(1)

### 48th Problem
**Difficulty :medium**
Greedy solution with couter check water left and to add count, rather eay problem.
- Time complexity :O(n)
- Space complexity :O(1)

### 49th Problem
**Difficulty :medium**
Simple problem using stack with a vector to count the day to come.
- Time complexity :O(n)
- Space complexity :O(n)

### 50th Problem
**Difficulty :medium**
sort it then check it , greedy solution solution.
- Time complexity :O(nlogn)
- Space complexity :O(n)

### 51th Problem
**Difficulty :hard**
if even their will alway be one element left before the xor , if not then check that the last element xor with all other are zero or not.
- Time complexity :O(n)
- Space complexity :O(1)

### 52th Problem
**Difficulty :medium**
using dp in this problem for solving the problem part by part.
- Time complexity :O(n*k)
- Space complexity :O(n)

### 53th Problem
**Difficulty :medium**
simple question of reversing i would be a easy problem if it were not for the edge case.
- Time complexity :O(n)
- Space complexity :O(1)

### 54th Problem
**Difficulty :medium**
using hashmap to make it a counter for it then we will compare it .
- Time complexity :O(n*m)
- Space complexity :O(n+m)

### 55th Problem
**Difficulty :medium**
it was a interesting problem with tricky solution but statisfying one.
- Time complexity :O(n)
- Space complexity :O(1)

### 56th Problem
**Difficulty :medium**
using map and vector pair to get the answer.
- Time complexity :O(n)
- Space complexity :O(n)

### 57th Problem
**Difficulty :medium**
One of the best question to understand the dp. 
- Time complexity :O(n*sqrt(n))
- Space complexity :O(n)

### 58th Problem
**Difficulty :medium**
making vector of kth exam marks then sorting it on reverse , comparing it from 1st to last if score[i][k] is same pushback to answer.
- Time complexity :O(nlogn)
- Space complexity :O(n^2)

### 59th Problem
**Difficulty :medium**
Focus on the  x difference , sort it and then compare it to get the largest .
- Time complexity :O(nlogn)
- Space complexity :O(n+m)

### 60th Problem
**Difficulty :medium**
Could have used the stack ,but used vector to keep .
- Time complexity :O(n)
- Space complexity :O(k) ```
 k = number of vowel ```
 
### 61th Problem
**Difficulty :medium**
Keep in mind that to get largest not use loop just compare it with the prev.
- Time complexity :O(n)
- Space complexity :O(n)

### 62nd Problem
**Difficulty :medium**
i made it little complicated but it is simple greedy solution .
- Time complexity :O(nlogn)
- Space complexity :O(n)

### 63nd Problem
**Difficulty :medium**
collatz conjection question , use pair to store number and collatz value of it , sort it by the collatz value and return the k-1th index.
- Time complexity :O(nlogn)
- Space complexity :O(n)

### 64nd Problem
**Difficulty :medium**
tricky question first solution ,i thought  was backtracking but i got time exceeded error , so after thinking and with hint help , i get it . Simple if ans is less than current , then add it to ans because ans can use it to make the larger number but if it is smaller than current break.
- Time complexity :O(nlogn)
- Space complexity :O(1)

### 65th Problem
**Difficulty :medium**
simple question just make two vector to store -ve and +ve int then access it alternatively .
- Time complexity :O(n)
- Space complexity :O(n)

### 66th Problem
**Difficulty :medium**
Used sliding window to get the three, Struggled to remove the duplicates in the vectors.
- Time complexity :O(nlogn)
- Time complexity :O(n)

### 67th Problem
**Difficulty :medium**
Sliding window problem , not as difficult as a make it because of bad naming .
- Time complexity :O(n)
- Space complexity :O(n)

### 68th Problem
**Difficulty :medium**
using unoordered map to get the freq of each element , then sorting it .Later remvoing the min element until k is exhausted.
- Time complexity :O(nlogn)
- Space complexity :O(n)

### 69th Problem
**Difficulty :medium**
Using sliding window to check if i is the ith term is vowel , then add ,if (i - k)th is vowel then sub.return the max.
- Time complexity :O(n)
- Space complexity :O(k)

### 70th Problem
**Difficulty :medium**
Easily the most simple looking but most tricky to cover all the test case .
- Time complexity :O(n)
- Space complexity :O(1)

### 71th Problem
**Difficulty :medium**
using shifting operator to check upto what term it is equal .
- Time complexity :O(logn)
- Space complexity :O(1)

### 72th Problem
**Difficulty :easy**
first time trying graph problem ,used vector to graph out incoming edge and outgoing edge .
- Time complexity :O(n)
- Space complexity :O(n)
### 73th Problem
**Difficulty :medium**
simple while loop and conditional statement question , just remember to subtract from large to small.
- Time complexity :O(n)
- Space complexity :O(1)

### 74th Problem 
**Difficulty :medium**
improving dp lil bit by bit, when asked about the prefix sum try to use dp .
- Time complexity :O(n)
- Space comlexity :O(n)

### 75th Problem
**Difficulty :medium**
atfirst i used pow(num,n) , but think this as a cheating . Then i tried it and got a answer.
- Time complexity :O(n)
- Space complexity :O(1)

### 76th Problem
**Difficulty :medium**
using unordered_map to cnt the freq.
- Time complexity :O(n)
- Space complexity :O(n)

### 77th Problem
**Difficulty :easy**
checking if both tree are equal.
    - base case if(both are null) => true.
    - recursive case if(both->val are equal and both are not empty) then return itself with ->left and ->rigth.
    - else return false.
- Time complexity :O(n)
- Space complexity :O(1)


### 78th Problem
**Difficulty : medium**
after many failed attempt finally got the answer,just by using stack and counter .
- Time complexity :O(n)
- Space complexity :O(n)

### 79th Problem
**Difficulty : medium**
it would be tough in the c , but in cpp with unordered map it become easy problem.But answer required to have O(1) space complexity. so we will try the index changing .if -ve we will return it as double.
- Time complexity :O(n)
- Space complexity :O(1)

### 80th Problem
**Difficulty : medium**
simple question just use hashmap for cow , simply compare both arr for the bull then cow -= bull.
- Time complexity :O(n)
- Space complexity :O(1) //256

### 81th Problem
**Difficulty : medium**
if prev <= cur , cur++ until cur > prev , do it for the whole array.
OR just calculate the difference and add difference + 1 to cur and ans.
- Time complexity :O(nlogn) 
- Space complexity :O(1)

### 82th Problem
**Difficulty : medium**
using unordered map to map it , then if mapping is more than n/3 then push into the ans.
- Time complexity :O(n)
- Space complexity :O(n)

### 83th Problem
**Difficulty : medium**
using sieve to map if the number is prime or not upto target , then simply check if x,n-x is prime .
- Time complexity :O(nlogn)
- Space complexity :O(n)

### 84th Problem
**Difficulty : medium**
using unordered map then simply sort it in descending order then return first k elements.
- Time complexity :O(nlogn)
- Space complexity :O(n) // considering k is small 

### 85th Problem
**Difficulty : medium**
using hashmap (vector) to map it ,if value repeat change that to all zero and ans++.
- Time complexity :O(n)
- Space complexity :O(n)

### 86th Problem
**Difficulty : medium**
two pointer with sorting to make sure where the min and max are , using greedy method.
- Time complexity :O(n)
- Space complexity :O(1)

### 87th Problem
**Difficulty : medium**
I never new there was stl of next_permutation which made it easy,well it was like lil bit cheating .
- Time complexity : O(nlogn)
- Space complexity :O(n^2)

### 88th Problem
**Difficulty : medium**
Using 2 pointers , if sum is less than target plus ,if greater than -ve , if equal check the min.
- Time complexity :O(nlogn)
- Space complexity :O(1)
### 89th Problem
**Difficulty : medium**
it was same as permutation one.
- Time complexity : O(nlogn)
- Space complexity :O(n^2)

### 90th Problem
**Difficulty : medium**
Today's leetcode question ,simply just sort it using .find function of order  as reference.
- Time complexity : O(nlogn)
- Space complexity :O(1)

### 91th Problem
**Difficulty : medium**
Best time to buy and sell stock II if next to cur position is less than target sell else hold.
- Time complexity : O(n)
- Space complexity :O(1)

### 92th Problem
**Difficulty : medium**
greedy method used in it .
- Time complexity : O(n)
- Space complexity :O(n)

### 93th Problem
**Difficulty : medium**
using sorting to sort for the upper bound first , if it in the upper bound then nothing if outside the upper bound then ans++ and change upper bound .
- Time complexity : O(nlogn)
- Space complexity :O(1)

### 94th Problem
**Difficulty : medium**
using seive to calculate the sum or divisor and number of divisor until the max term.
- Time complexity : O(nlogn)
- Space complexity :O(n)

### 95th Problem
**Difficulty : medium**
using seive .
- Time complexity :O(nloglogn)
- Space complexity :O(1)

### 96th Problem
**Difficulty : medium**
simple sorting and return kth from last
- Time complexity : O(nlogn)
- Space complexity :O(1)

### 97th Problme 
**Difficulty : hard**
focus on the brute force ,could have solved using hashmap for O(n).
for constant space we can change in array making index to -ve but i am too lazy right now for that.
- Time complexity :O(nlogn)
- Space complexity :O(1)

### 98th Problem
**Difficulty : hard**
make n digit number form 1-n and permutation to it until the kth time.
- Time complexity :O(n)
- Space complexity :O(n)

### 99th Problem
**Difficulty : easy**
didn't think of creating even odd index and tracking them and returning the min. Easy question but got better of me .
- Time complexity :O(n)
- Space complexity :O(1)

### 100th Problem
**Difficulty : medium**
using sliding window ,j upto cur is more than or equal to k , if so i++. then add i to answer .
- Time complexity :O(n)
- Space complexity :O(1)

### 101th Problem
**Difficulty : medium**
using hashmap to map every element occurrence from 0-25 ('b' - 'a' == 1), then sorting it and comparing it .
- Time complexity :O(n)
- Space complexity :O(26)