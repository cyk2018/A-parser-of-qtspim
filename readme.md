# A parser of qtspim

## What is this?

This is a system to transfer the content which you saved from qtspim to  heximal digits. It will be useful for who want to use qtspim to create test case for Instructions.

## How can I use it?

1. You should save a file from qtspim by save log file button.[image-20210327224227206.png (1170×824) (raw.githubusercontent.com)](https://raw.githubusercontent.com/cyk2018/pictures/main/image-20210327224227206.png)

2. You should save the file at the same path with this system. And I suggest that you name it as code. Attention that you should only check the text segment checkbox.

   ![image-20210327224529713](C:\Users\chen\AppData\Roaming\Typora\typora-user-images\image-20210327224529713.png)

3. Edit the playme.bat file with any editor you like, and change where you want to save the instruction file. Also, you should check the source code filename(It must be what you set at step 2).

   ![image-20210327224818271](C:\Users\chen\AppData\Roaming\Typora\typora-user-images\image-20210327224818271.png)

4. Run the playme.bat and you will find a new file at your target address.  

   ## Some tips:

   This system omit what before the first syscall and what after the first call, because they can not run in my cpu.

   You can edit its code to meet your needs.