.*: Assembler messages:
.*:5: Error: .*
.*:6: Error: .*
.*:8: Error: .*
.*:9: Error: .*
.*:10: Error: .*
.*:11: Error: .*
.*:12: Error: .*
.*:13: Error: .*
.*:14: Error: .*
.*:15: Error: .*
.*:16: Error: .*
.*:17: Error: .*
.*:18: Error: .*
.*:19: Error: .*
.*:20: Error: .*
.*:21: Error: .*
.*:22: Error: .*
.*:23: Error: .*
.*:24: Error: .*
.*:25: Error: .*
.*:26: Error: .*
.*:27: Error: .*
.*:28: Error: .*
.*:29: Error: .*
.*:30: Error: .*
.*:31: Error: .*
.*:32: Error: .*
.*:33: Error: .*
.*:34: Error: .*
.*:35: Error: .*
.*:37: Error: .*
.*:38: Error: .*
.*:39: Error: .*
.*:40: Error: .*
.*:41: Error: .*
.*:42: Error: .*
.*:43: Error: .*
.*:44: Error: .*
.*:45: Error: .*
.*:46: Error: .*
.*:49: Error: .*
.*:50: Error: .*
.*:52: Error: .*
.*:53: Error: .*
.*:54: Error: .*
.*:55: Error: .*
.*:56: Error: .*
.*:57: Error: .*
.*:58: Error: .*
.*:59: Error: .*
.*:60: Error: .*
.*:61: Error: .*
.*:62: Error: .*
.*:63: Error: .*
.*:64: Error: .*
.*:65: Error: .*
.*:66: Error: .*
.*:67: Error: .*
.*:68: Error: .*
.*:69: Error: .*
.*:70: Error: .*
.*:71: Error: .*
.*:72: Error: .*
.*:73: Error: .*
.*:74: Error: .*
.*:75: Error: .*
.*:76: Error: .*
.*:77: Error: .*
.*:78: Error: .*
.*:79: Error: .*
.*:81: Error: .*
.*:82: Error: .*
.*:83: Error: .*
.*:84: Error: .*
.*:85: Error: .*
.*:86: Error: .*
.*:87: Error: .*
.*:88: Error: .*
.*:89: Error: .*
.*:90: Error: .*
GAS LISTING .*


[ 	]*1[ 	]+\# 64bit unlockable Instructions
[ 	]*2[ 	]+
[ 	]*3[ 	]+\.text
[ 	]*4[ 	]+foo:
[ 	]*5[ 	]+lock mov %ecx, %eax
[ 	]*6[ 	]+lock mov \(%rbx\), %eax
[ 	]*7[ 	]+
[ 	]*8[ 	]+lock add %ebx, %eax
[ 	]*9[ 	]+lock add \$0x64, %ebx
[ 	]*10[ 	]+lock adc %ebx, %eax
[ 	]*11[ 	]+lock adc \$0x64, %ebx
[ 	]*12[ 	]+lock and %ebx, %eax
[ 	]*13[ 	]+lock and \$0x64, %ebx
[ 	]*14[ 	]+lock btc %eax, %ebx
[ 	]*15[ 	]+lock btc \$0x64, %ebx
[ 	]*16[ 	]+lock btr %eax, %ebx
[ 	]*17[ 	]+lock btr \$0x64, %ebx
[ 	]*18[ 	]+lock bts %eax, %ebx
[ 	]*19[ 	]+lock bts \$0x64, %ebx
[ 	]*20[ 	]+lock cmpxchg %eax,%ebx
[ 	]*21[ 	]+lock decl %ebx
[ 	]*22[ 	]+lock incl %ebx
[ 	]*23[ 	]+lock negl %ebx
[ 	]*24[ 	]+lock notl %ebx
[ 	]*25[ 	]+lock or %ebx, %eax
[ 	]*26[ 	]+lock or \$0x64, %ebx
[ 	]*27[ 	]+lock sbb %ebx, %eax
[ 	]*28[ 	]+lock sbb \$0x64, %ebx
[ 	]*29[ 	]+lock sub %ebx, %eax
[ 	]*30[ 	]+lock sub \$0x64, %ebx
[ 	]*31[ 	]+lock xadd %eax, %ebx
[ 	]*32[ 	]+lock xchg %ebx, %eax
[ 	]*33[ 	]+lock xchg %eax, %ebx
[ 	]*34[ 	]+lock xor %ebx, %eax
[ 	]*35[ 	]+lock xor \$0x64, %ebx
[ 	]*36[ 	]+
[ 	]*37[ 	]+lock add \(%rbx\), %eax
[ 	]*38[ 	]+lock adc \(%rbx\), %eax
[ 	]*39[ 	]+lock and \(%rbx\), %eax
[ 	]*40[ 	]+lock or \(%rbx\), %eax
[ 	]*41[ 	]+lock sbb \(%rbx\), %eax
[ 	]*42[ 	]+lock sub \(%rbx\), %eax
[ 	]*43[ 	]+lock xor \(%rbx\), %eax
[ 	]*44[ 	]+lock wrmsrns
[ 	]*45[ 	]+lock rdmsrlist
[ 	]*46[ 	]+lock wrmsrlist
[ 	]*47[ 	]+
[ 	]*48[ 	]+\.intel_syntax noprefix
[ 	]*49[ 	]+lock mov eax,ebx
[ 	]*50[ 	]+lock mov eax,DWORD PTR \[rbx\]
[ 	]*51[ 	]+
[ 	]*52[ 	]+lock add eax,ebx
[ 	]*53[ 	]+lock add ebx,0x64
[ 	]*54[ 	]+lock adc eax,ebx
[ 	]*55[ 	]+lock adc ebx,0x64
[ 	]*56[ 	]+lock and eax,ebx
[ 	]*57[ 	]+lock and ebx,0x64
GAS LISTING .*


[ 	]*58[ 	]+lock btc ebx,eax
[ 	]*59[ 	]+lock btc ebx,0x64
[ 	]*60[ 	]+lock btr ebx,eax
[ 	]*61[ 	]+lock btr ebx,0x64
[ 	]*62[ 	]+lock bts ebx,eax
[ 	]*63[ 	]+lock bts ebx,0x64
[ 	]*64[ 	]+lock cmpxchg ebx,eax
[ 	]*65[ 	]+lock dec ebx
[ 	]*66[ 	]+lock inc ebx
[ 	]*67[ 	]+lock neg ebx
[ 	]*68[ 	]+lock not ebx
[ 	]*69[ 	]+lock or eax,ebx
[ 	]*70[ 	]+lock or ebx,0x64
[ 	]*71[ 	]+lock sbb eax,ebx
[ 	]*72[ 	]+lock sbb ebx,0x64
[ 	]*73[ 	]+lock sub eax,ebx
[ 	]*74[ 	]+lock sub ebx,0x64
[ 	]*75[ 	]+lock xadd ebx,eax
[ 	]*76[ 	]+lock xchg ebx,eax
[ 	]*77[ 	]+lock xchg ebx,eax
[ 	]*78[ 	]+lock xor eax,ebx
[ 	]*79[ 	]+lock xor ebx,0x64
[ 	]*80[ 	]+
[ 	]*81[ 	]+lock add eax,DWORD PTR \[rbx\]
[ 	]*82[ 	]+lock adc eax,DWORD PTR \[rbx\]
[ 	]*83[ 	]+lock and eax,DWORD PTR \[rbx\]
[ 	]*84[ 	]+lock or eax,DWORD PTR \[rbx\]
[ 	]*85[ 	]+lock sbb eax,DWORD PTR \[rbx\]
[ 	]*86[ 	]+lock sub eax,DWORD PTR \[rbx\]
[ 	]*87[ 	]+lock xor eax,DWORD PTR \[rbx\]
[ 	]*88[ 	]+lock wrmsrns
[ 	]*89[ 	]+lock rdmsrlist
[ 	]*90[ 	]+lock wrmsrlist
