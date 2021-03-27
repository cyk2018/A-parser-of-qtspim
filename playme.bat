del input.txt
cat code >> input.txt
del output.txt
gcc read.c -o read.exe
read input.txt
del input.txt
del output.txt
cp output.txt D:\new_cpu\Cpu\Instruction_memory.txt
rem pause

