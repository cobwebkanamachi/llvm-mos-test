# llvm-mos-test
deploy easely https://github.com/llvm-mos/llvm-mos-sdk/releases/download/v21.0.1/llvm-mos-linux.tar.xz and test driver for clang and clang++ targetted c64.
<PRE>
on bash:
  export PATH=$PATH:/mnt/c/Users/user/Documents/PlatformIO/Projects/llvm-mos/bin
  if you tar Jxvf llvm-mos-linux.tar.xz on /mnt/c/Users/user/Documents/PlatformIO/Projects/. 
mos-c64-clang -Os -o hello.prg hello.c
mos-c64-clang++ -Os -o helloc++.prg hello.c++  
Then Invoke VICE(C64SC) and drop hello.prg or helloc++.prg on it.
</PRE>
hello.prg
<img src="https://github.com/cobwebkanamachi/llvm-mos-test/blob/main/c64clang.png">
helloc++.prg
<img src="https://github.com/cobwebkanamachi/llvm-mos-test/blob/main/c64clang%2B%2B.png">
