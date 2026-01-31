// #include <stdio.h>

// int main() {
//     int n;
//     int first = 0;
//     int second = 1;
//     int next;

//     printf("How many numbers do you want? ");
//     scanf("%d", &n);

//     printf("The series is: ");

//     for (int i = 0; i < n; i++) {
//         // 1. Print the current number
        

//         // 2. Calculate the next number in line
//         next = first + second;

//         // 3. Update 'first' and 'second' for the next loop
//         first = second;
//         second = next;
//     }
//     printf("%d ", first);
//     return 0;
// }

#include <stdio.h>

int main(){
    int n;
    int first=0;
    int second=1;
    int end;
    printf("How many numbers? ");
    scanf("%d",&n);

    printf("The final digit is:");
    for(int i=0;i<n;i++){
        end=first+second;
        first=second;
        second=next;
    }
}