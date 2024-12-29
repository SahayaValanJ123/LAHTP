section .text
	
0000000000001189 <main>:
   endbr64
    118d:       55                      push   rbp
    118e:       48 89 e5                mov    rbp,rsp
    1191:       48 83 ec 10             sub    rsp,0x10
    1195:       89 7d fc                mov    DWORD PTR [rbp-0x4],edi
    1198:       48 89 75 f0             mov    QWORD PTR [rbp-0x10],rsi
    119c:       83 7d fc 02             cmp    DWORD PTR [rbp-0x4],0x2
    11a0:       75 63                   jne    1205 <main+0x7c>
    11a2:       48 8b 45 f0             mov    rax,QWORD PTR [rbp-0x10]
    11a6:       48 83 c0 08             add    rax,0x8
    11aa:       48 8b 00                mov    rax,QWORD PTR [rax]
    11ad:       48 89 c6                mov    rsi,rax
    11b0:       48 8d 05 4d 0e 00 00    lea    rax,[rip+0xe4d]        # 2004 <_IO_stdin_used+0x4>
    11b7:       48 89 c7                mov    rdi,rax
    11ba:       b8 00 00 00 00          mov    eax,0x0
    11bf:       e8 bc fe ff ff          call   1080 <printf@plt>
    11c4:       48 8b 45 f0             mov    rax,QWORD PTR [rbp-0x10]
    11c8:       48 83 c0 08             add    rax,0x8
    11cc:       48 8b 00                mov    rax,QWORD PTR [rax]
    11cf:       48 8d 15 46 0e 00 00    lea    rdx,[rip+0xe46]        # 201c <_IO_stdin_used+0x1c>
    11d6:       48 89 d6                mov    rsi,rdx
    11d9:       48 89 c7                mov    rdi,rax
    11dc:       e8 af fe ff ff          call   1090 <strcmp@plt>
    11e1:       85 c0                   test   eax,eax
    11e3:       75 11                   jne    11f6 <main+0x6d>
    11e5:       48 8d 05 40 0e 00 00    lea    rax,[rip+0xe40]        # 202c <_IO_stdin_used+0x2c>
    11ec:       48 89 c7                mov    rdi,rax
    11ef:       e8 7c fe ff ff          call   1070 <puts@plt>
    11f4:       eb 0f                   jmp    1205 <main+0x7c>
    11f6:       48 8d 05 3f 0e 00 00    lea    rax,[rip+0xe3f]        # 203c <_IO_stdin_used+0x3c>
    11fd:       48 89 c7                mov    rdi,rax
    1200:       e8 6b fe ff ff          call   1070 <puts@plt>
    1205:       b8 00 00 00 00          mov    eax,0x0
    120a:       c9                      leave
    120b:       c3                      ret

	
