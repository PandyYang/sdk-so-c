# sdk-so-c
用于测试golang程序打包成为so文件之后，使用c语言调用的情况。

## 查看文档
https://chai2010.cn/advanced-go-programming-book/ch2-cgo/ch2-09-static-shared-lib.html


gcc -o a.out _test_main.c number.a  
./a.out