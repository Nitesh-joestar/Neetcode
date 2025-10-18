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

