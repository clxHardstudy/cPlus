#include <iostream>

using namespace std;

void reverseElement(int arr[], int length){
    int start = 0;
    int end = length -1;
    while (start < end) {
        int tmp = arr[start];
        arr[start] = arr[end];
        arr[end] = tmp;
        start++;
        end--;
    }
}

int main(int argc, const char * argv[]) {
    //  insert code here...
    
    //  一维数组
    cout << "-----------------一维数组-----------------"<< endl;
    
    int arr1[4] = {1, 2, 3, 4};
    int length = sizeof(arr1) / sizeof(arr1[0]);
    reverseElement(arr1, length);
    int arr2[4] = {1, 2};
    int arr3[4] = {1};
    int arr4[4];
    
    for (int i=0; i<4; i++) {
        cout<< "arr1[" << i << "] = " << arr1[i] << " ";
    }
    cout << endl;
    
    for (int i=0; i<4; i++) {
        cout<< "arr2[" << i << "] = " << arr2[i] << " ";
    }
    cout << endl;
    
    for (int i=0; i<4; i++) {
        cout<< "arr3[" << i << "] = " << arr3[i] << " ";
    }
    cout << endl;
    
    for (int i=0; i<4; i++) {
        cout<< "arr4[" << i << "] = " << arr4[i] << " ";
    }
    cout << endl;
    
    
    cout << "-----------------二维数组-----------------"<< endl;
    
    int array1[3][4];
    int array2[3][4] = {0};
    int array3[3][4] = {{0, 1, 2, 3},{4, 5, 6, 7},{8, 9, 10, 11}};
    int array4[3][4] = {1, 2, 3, 4, 5, 6, 7, 8};
    int array5[3][4] = {{1, 2, 3},{4, 5},{6, }};
    int array6[][4] = {1, 2, 3, 4, 5, 6, };
    
    cout << "array1 : "<< endl;;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << array1[i][j] << "\t";
        }
        cout << endl;
    }
   
    cout << "array2 : "<< endl;;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << array2[i][j] << "\t";
        }
        cout << endl;
    }
    
    cout << "array3 : "<< endl;;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << array3[i][j] << "\t";
        }
        cout << endl;
    }
    
    cout << "array4 : "<< endl;;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << array4[i][j] << "\t";
        }
        cout << endl;
    }
    
    cout << "array5 : "<< endl;;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << array5[i][j] << "\t";
        }
        cout << endl;
    }
    
    cout << "array6 : "<< endl;;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << array6[i][j] << "\t";
        }
        cout << endl;
    }
    
    
    char ary1[10] = "abcdefg";
    char ary2[] = "abcdefg";
    
    int k = 0;
    cout << "------------ary1------------" << endl;
    do {
        cout << "k = " << k << "\t";
        cout << ary1[k] << endl;
        k++;
    } while (ary1[k]);
    
    k = 0;
    cout << "------------ary2------------" << endl;
    do {
        cout << "k = " << k << "\t";
        cout << ary2[k] << endl;
        k++;
    } while (ary2[k]);
    
    cout << "一维数组ary1的大小是（字节）："<<sizeof(ary1) / sizeof(ary1[0]) << endl;
    cout << "一维数组ary2的大小是（字节）："<<sizeof(ary2) / sizeof(ary2[0]) << endl;
    
    return 0;
    
}
