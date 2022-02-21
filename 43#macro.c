#include<stdio.h>
#define money 100

// When we want to give same value to every variable we make use of macro
// here money will be replaced by 100

int main(){
    char name1[20] = "Shubham";
    char name2[20] = "Anish";
    char name3[20] = "Harsh";
    char name4[20] = "Ashish";
    char name5[20] = "Lucky";

    printf("\n%s, got %d rupees",name1,money);
    printf("\n%s, got %d rupees",name2,money);
    printf("\n%s, got %d rupees",name3,money);
    printf("\n%s, got %d rupees",name4,money);
    printf("\n%s, got %d rupees",name5,money);
}