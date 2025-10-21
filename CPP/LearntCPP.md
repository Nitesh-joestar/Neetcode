use of math abs function saved me bud

the floyds hare and tortoise algorithm is rlly powerful and interesting
1. [ ] look at floyds hare and tortoise
2. [*] binary search in finding duplicates
3. [ ] index sort

pigeonhole principle. n+1 array size and n elements. something is repeated.
they used the pigeonhole principle to solve it 
heres how i think the pigeonhole principle is used here in binary search. middle is the element
take the middle element. if the left side of the middle has more elements than right side. left side it is repeated
from there you do binary search. 

modifying the array to store information
like minazing the value is rlly cool and powerful. reduces memory complexity

yo '0' in the ascii table is 48 or something rt
1+'0' is '1' u get it. you are doing 48+1
static_cast<int>('1') gives 49
static_cast<char>((n % 10)+'0' this is doing the heavy work 49 is conerted to 1

exception handling
 `try{
}
catch(exception std::indexoutofrange& e){`

i thing i found look 
`std::abs(x)
`x is a very large neg number when you try to,
std:;abs(x) x is a int. x cant temporarily store that large value
so casting must happen. it must store that value somewhere
`std::abs(static_cast<long long>(x));`

INT_MAX and INT_MIN are constants which dictates things like maximum value of an int
`cout<<INT_MAX<<' '<<INT_MIN<<'\n';
cout<<LONG_LONG_MAX<<' '<<LONG_LONG_MIN<<'\n';
cout<<CHAR_MAX<<' '<<CHAR_MIN<<'\n';
cout<<ULONG_LONG_MAX<<' '<<UINT_MAX<<'\n';`

Yes, that's exactly right. To check if a number n is prime, you only need to test for 
divisors up to its square root, root(n).
even for divisors too dawgg
mmh you dont say

std::pow(n,3); how to do power of n to the power of 3

`int print(int n) {
if (n>=0) {
cout<<"printing "<<n<<" times"<<'\n';
print(n-1);
}
}`
this is better than keeping print(n-1) outside eh

when returning return 0 means success
anything non zeero means failure
you can also return values like 1 which can be used for calculation

you go std::unordered_map<int,int> for hashmap
freq[number] by default if its unwritten its zero

`vector<int> shift_array(std::vector<int> num) {
const int temp{num[0]};
for (int i{0};i<num.size()-1;++i) {
num[i]=num[i+1];
}
num[num.size()-1]=temp;
return num;
}
` you are passing by value and not reference so its slow

B[i] == A[(i+x) % A.length] to chcek if an array is rotated and sorted hmm
this logic it checks the condition. every num[i] is less than num[i+1] and num[last]<num[first]
and sorted unrotated end and first meet once. only 1

in xor same numbers are equal whereas different numbers its one

0 ^ 2 ^ 1 ^ 2 ^ 3 ^ 1
= 0 ^ (2 ^ 2) ^ (1 ^ 1) ^ 3    ← Commutative & Associative
cool xor property
this is how single number problem is solved

```c++
//my first real dp problem solved so proud, the use of std::min saves space and is better readability
//dp just a lot of memoization bruh. this is a bottom up appraoch i belive
class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        const int n = cost.size();
        int buffer{};
        std::vector<int> memo(n);
        memo[n - 1] = cost[n - 1];
        memo[n - 2] = cost[n - 2];

        for (int i{n - 3}; i > -1; --i) {
            memo[i]=cost[i]+std::min(memo[i+1],memo[i+2]);
        }
        
        return std::min(memo[0],memo[1]);
    }
};
```
sometimes you can just use the given table as memoization
also u can use a 1d array if u got a 2d array

for a 2d matrix. you are calc from the bottom right in a single tape manner just store em in a array 1d dawg