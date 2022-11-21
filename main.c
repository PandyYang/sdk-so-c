#include "cgo_cmd.h"
#include <stdio.h>

int main() {
//    printf("%lld\n", Sum(1,2));
//    GetName("12");
    char message[] = "E:\\GolandProject\\CGO\\pkg06\\123.txt";
    GoString go_str = {p: message, n: sizeof(message)};
    ReadFromCMD(go_str);
    return 0;
}
