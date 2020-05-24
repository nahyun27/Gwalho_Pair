#include <iostream>
#include <stack>
#include <string.h>
using namespace std;

#define STR_LEN 100

stack<char>s;

int main() {
  char str[STR_LEN] = "";
  scanf("%s",str);

  int len = strlen(str);

  for(int i=0;i<len;++i){
    if(str[i] == '('){
      s.push(str[i]);
    }else if(str[i] == ')'){
      if(s.empty() == true){
        printf("문자열이 올바르지 않습니다.");
        return 0;
      }else{
        s.pop();
      }
    }else{
      printf("문자열이 올바르지 않습니다.");
      return 0;
    }
  }

  if(s.empty() == true){
  printf("괄호 쌍이 맞습니다.");
  }else{
    printf("문자열이 올바르지 않습니다.");
  }
  return 0;
}
