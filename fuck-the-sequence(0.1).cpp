#include<iostream>
#include<string>
using namespace std;

int i,j;
#define max 100
string to_String(int n)
  {
     int m = n;
      char s[max];
     char ss[max];
     int i=0,j=0;
     if (n < 0)// ������
     {
         m = 0 - m;
         j = 1;
         ss[0] = '-';
     }    
     while (m>0)
     {
         s[i++] = m % 10 + '0';
         m /= 10;
     }
     s[i] = '\0';
     i = i - 1;
     while (i >= 0)
     {
         ss[j++] = s[i--];
     }    
     ss[j] = '\0';    
     return ss;
 }
 //f(x)=in+j
int sit1(int x[]){
  int flag=0;
  i=x[1]-x[0];
  j=x[0]-i;
  for(int m=1;m<=4;m++){
    if(m*i+j==x[m-1]){
      flag++;
    }
  }
  if(flag==4){
    return 1;
  }else{
    return 0;
  }
}

string index(int x[]){
	//cout<<"1111111";
    int f=0;
    if(sit1(x)==1){
    	//cout<<j;
    	string m1=to_String(i);
    	string m2=to_String(j);
      return "f(x)="+m1+"x+"+m2;
      f=1;
    }
    
	if(f==0){
      return "�Ҳ������ݿ����κ�һ��ͨʽ��֮ƥ��";
    }
  
}
int main(int argc, char const *argv[]) {
  printf("%s\n","������������ǰ4λ��" );
  int a[4];
  for(int i=0;i<4;i++){
    //scanf("%d", a[i]);
	cin>>a[i];
  }
  cout<<index(a);
  
  return 0;
}
