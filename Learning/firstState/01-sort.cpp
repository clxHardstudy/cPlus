#include <iostream>

using namespace std;

// 冒泡排序
void bubble_sort(int arr[], int length){
    for (int i = 0; i < length - 1; i++) {
        for (int j = 0; j < length - 1 - i; j++) {
            if (arr[j] > arr[j+1]) {
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
    
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int array[] ={4,2,5,1,8,0,9,7,6,3};
    int length = sizeof(array) / sizeof(array[0]);
//    cout << length << endl;
    bubble_sort(array,length);
    
    for (int i = 0; i < length ; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
    return 0;
}
