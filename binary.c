#include <stdio.h>

int binary(int a[], int l, int r, int key) {
    if(l > r) return -1;
    int mid = (l + r) / 2;

    if(a[mid] == key) return mid;
    if(key < a[mid])
        return binary(a, l, mid-1, key);
    return binary(a, mid+1, r, key);
}

int main() {
    int a[] = {10,20,30,40,50};
    int pos = binary(a, 0, 4, 30);

    if(pos != -1)
        printf("Found at %d", pos);
    else
        printf("Not Found");

    return 0;
}
