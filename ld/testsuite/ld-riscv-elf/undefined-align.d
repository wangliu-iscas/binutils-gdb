#name: undefined with alignment
#source: undefined-align.s
#as:
#ld: --relax
#error: \A[^\n]*\.o: in function `_start':\n\(\.text\+0x0\): undefined reference to `foo'\Z
