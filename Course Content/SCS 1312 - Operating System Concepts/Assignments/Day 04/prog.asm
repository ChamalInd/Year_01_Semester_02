# Kernel initializes the process and the interrupts
# process 0 is at 80 and its stack starts at 50
0 movv r1 80
1 store 50 r1
# stack after pushing in dummy values for r1, r2, r3, r4, acc is 55
2 movv r1 55
# store it at 70
3 store 70 r1
# process 1 is at 90 and its stack at 60
4 movv r1 90
5 store 60 r1
# stack after pushing in dummy values for r1, r2, r3, r4, acc is 65
6 movv r1 65
# store it at 71
7 store 71 r1
# current process 0
8 movv r1 0
9 store 72 r1

# Start the first process
10 movv sp 55
11 jmp 37
12 halt


#scheduler
20 push r1
21 push r2
22 push r3
23 push r4
24 push acc
# current process
25 load r1 72
26 movv r2 70
27 add r1 r2
28 storer acc sp
# find the next process
29 movv r2 1
30 add r1 r2
31 movv r2 2
32 mod acc r2
# next process
33 store 72 acc
34 movv r1 70
35 add r1 acc
36 
37 pop acc
38 pop r4
39 pop r3
40 pop r2
41 pop r1
42 movv ivec
43 movv timer 5
44 movv int 1
45 ret 
46 halt


#process 0
80 movv r1 20
81 movv r2 1
82 sub r1 r2
83 mov r1 acc
84 out acc
85 jnz 82 r1
86 halt

#process 1
90 movv r1 10000
91 movv r2 1
92 sub r1 r2
93 mov r1 acc
94 out acc
95 jnz 92 r1
96 halt
