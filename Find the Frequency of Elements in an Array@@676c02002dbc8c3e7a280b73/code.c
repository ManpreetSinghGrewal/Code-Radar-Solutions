#include <stdio.h>

// void findFrequency(int arr[], int n) {
//     int freq[n]; 
//     for (int i = 0; i < n; i++) {
//         freq[i] = -1;
//     }
//     for (int i = 0; i < n; i++) {
//         int count = 1;
//         for (int j = i + 1; j < n; j++) {
//             if (arr[i] == arr[j]) {
//                 count++;
//                 freq[j] = 0;  
//             }
//         }
//         if (freq[i] != 0) {
//             freq[i] = count;
//         }
//     }
    
//     for (int i = 0; i < n; i++) {
//         if (freq[i] != 0) {
//             printf("%d %d\n", arr[i], freq[i]);
//         }
//     }
// }

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d ", &arr[i]);
    }
    for(int i =0;i<n;i++){
        int c = 1;
        for(int j=i+1;j<n;j++){
            if(arr[i] == arr [j]){
                c++;
                arr[j] = -1;
            }
        }
        if(arr[i] != -1){
            printf("%d %d ",arr[i],c);
            printf("/n");
        }
    }

    return 0;
}

