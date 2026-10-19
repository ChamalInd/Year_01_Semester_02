0 movv sp 80
1 movv r1 100
2 movv r2 400
3 push r1 
4 call 20
5 pop r1
6 out r4
7 push r2
8 call 20
9 pop r2
10 out r4
11 halt


20 push r1
21 push r2
22 push r3
23 push acc
24 mov r3 sp
25 movv r1 5
26 sub r3 r1
27 loadr r2 acc
28 movv r1 1000
29 add r1 r2
30 mov r4 acc
31 pop acc
32 pop r3
33 pop r2
34 pop r1
35 ret
