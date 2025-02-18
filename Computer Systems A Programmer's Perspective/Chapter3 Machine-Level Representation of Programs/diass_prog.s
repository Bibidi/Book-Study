prog:   file format mach-o 64-bit x86-64


Disassembly of section __TEXT,__text:

0000000100003f10 <_main>:
100003f10: 55                           pushq   %rbp
100003f11: 48 89 e5                     movq    %rsp, %rbp
100003f14: 48 83 ec 10                  subq    $16, %rsp
100003f18: 48 8d 55 f8                  leaq    -8(%rbp), %rdx
100003f1c: bf 02 00 00 00               movl    $2, %edi
100003f21: be 03 00 00 00               movl    $3, %esi
100003f26: e8 35 00 00 00               callq   0x100003f60 <_multstore>
100003f2b: 48 8b 75 f8                  movq    -8(%rbp), %rsi
100003f2f: 48 8d 3d 64 00 00 00         leaq    100(%rip), %rdi  # 100003f9a <dyld_stub_binder+0x100003f9a>
100003f36: 31 c0                        xorl    %eax, %eax
100003f38: e8 3b 00 00 00               callq   0x100003f78 <dyld_stub_binder+0x100003f78>
100003f3d: 31 c0                        xorl    %eax, %eax
100003f3f: 48 83 c4 10                  addq    $16, %rsp
100003f43: 5d                           popq    %rbp
100003f44: c3                           retq
100003f45: 66 2e 0f 1f 84 00 00 00 00 00        nopw    %cs:(%rax,%rax)
100003f4f: 90                           nop

0000000100003f50 <_mult2>:
100003f50: 55                           pushq   %rbp
100003f51: 48 89 e5                     movq    %rsp, %rbp
100003f54: 48 89 f8                     movq    %rdi, %rax
100003f57: 48 0f af c6                  imulq   %rsi, %rax
100003f5b: 5d                           popq    %rbp
100003f5c: c3                           retq
100003f5d: 90                           nop
100003f5e: 90                           nop
100003f5f: 90                           nop

0000000100003f60 <_multstore>:
100003f60: 55                           pushq   %rbp
100003f61: 48 89 e5                     movq    %rsp, %rbp
100003f64: 53                           pushq   %rbx
100003f65: 50                           pushq   %rax
100003f66: 48 89 d3                     movq    %rdx, %rbx
100003f69: e8 e2 ff ff ff               callq   0x100003f50 <_mult2>
100003f6e: 48 89 03                     movq    %rax, (%rbx)
100003f71: 48 83 c4 08                  addq    $8, %rsp
100003f75: 5b                           popq    %rbx
100003f76: 5d                           popq    %rbp
100003f77: c3                           retq

Disassembly of section __TEXT,__stubs:

0000000100003f78 <__stubs>:
100003f78: ff 25 82 40 00 00            jmpq    *16514(%rip)  # 100008000 <dyld_stub_binder+0x100008000>

Disassembly of section __TEXT,__stub_helper:

0000000100003f80 <__stub_helper>:
100003f80: 4c 8d 1d 81 40 00 00         leaq    16513(%rip), %r11  # 100008008 <__dyld_private>
100003f87: 41 53                        pushq   %r11
100003f89: ff 25 71 00 00 00            jmpq    *113(%rip)  # 100004000 <dyld_stub_binder+0x100004000>
100003f8f: 90                           nop
100003f90: 68 00 00 00 00               pushq   $0
100003f95: e9 e6 ff ff ff               jmp     0x100003f80 <__stub_helper>