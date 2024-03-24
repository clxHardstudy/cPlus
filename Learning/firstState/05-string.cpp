#include <iostream>
using namespace std;

// strcat(char s1[],const char s2[]);//将s2接到s1上
// strcpy(char s1[],const char s2[]);//将s2复制到s1上
// strcmp(const char s1[],const char s2[]);//比较s1,s2 s1>s2返回1 s1=s2返回0，s1<s2返回-1【大小】
// strlen(char s[]);//计算字符串s的长度 字符串s的实际长度，不包括\0在内


int main(int argc, const char * argv[]) {
    // insert code here...
    
    // C风格的字符串实际上是使用 null 字符 ‘\0’ 终止的一维字符数组。
    char str[] = "1234";
    const char str1[] = "abcd";
    const char str2[] = "efgh";
    cout << str1 << endl;
    
    cout << "str1长度为：" << strlen(str1) << "\t" << "str2长度为：" << strlen(str2) << endl;
    
    int equal;
    equal = strcmp(str1, str2);
    cout << "equal = " << equal << endl;
    
    strcpy(str, str1);
    cout << "str = " << str << endl;
    
    strcat(str, str2);
    cout << "str = " << str << endl;
    
    return 0;
}
