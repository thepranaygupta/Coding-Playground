#include<stdio.h>
#include<string.h>

void subseq(char input, char output)
{
	if (input.empty()) {
		cout << output << endl;
		return;
	}
	subseq(input.substr(1), output + input[0]);
	subseq(input.substr(1), output);
}
int main()
{
	char input[100];
	char output[100];
    gets(input);
	printSubsequence(input, output);
	return 0;
}
// void funct(char t[],int i,int n,char s[]){
// 	if(i==n){
// 		printf("%s",t);
// 	}
// 	else{
// 		funct(t,i+1,n,s);
// 		t=t+s[i];
// 		funct(t,i+1,n,s);
// 	}
// }
// void main(){
// 	char s[101];
// 	gets(s);
// 	funct("",0,strlen(s),s);
// }

