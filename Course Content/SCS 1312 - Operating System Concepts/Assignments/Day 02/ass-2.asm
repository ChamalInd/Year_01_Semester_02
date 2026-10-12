0 movv sp 80
1 movv r1 100
2 movv r2 400
3 call 20
4 add r1 r2
5 out acc
6 halt


20 push r1
21 push r2
22 push acc
23 movv r1 20
24 movv r2 80
25 add r1 r2
26 out acc
27 pop acc
28 pop r2
29 pop r1
30 ret
