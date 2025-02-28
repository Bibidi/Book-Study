rproduct.o:     file format mach-o 64-bit x86-64


Disassembly of section __TEXT,__text:

0000000000000000 <_rproduct>:
       0: b8 01 00 00 00                movl    $1, %eax
       5: 48 83 fe 02                   cmpq    $2, %rsi
       9: 7c 20                         jl      0x2b <_rproduct+0x2b>
       b: 55                            pushq   %rbp
       c: 48 89 e5                      movq    %rsp, %rbp
       f: 53                            pushq   %rbx
      10: 50                            pushq   %rax
      11: 48 8b 1f                      movq    (%rdi), %rbx
      14: 48 83 c7 08                   addq    $8, %rdi
      18: 48 83 c6 ff                   addq    $-1, %rsi
      1c: e8 df ff ff ff                callq   0x0 <_rproduct>
      21: 48 0f af c3                   imulq   %rbx, %rax
      25: 48 83 c4 08                   addq    $8, %rsp
      29: 5b                            popq    %rbx
      2a: 5d                            popq    %rbp
      2b: c3                            retq