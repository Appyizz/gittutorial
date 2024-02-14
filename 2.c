#include <stdio.h>
int main(){
int a,b,c;
printf("Enter the 3 numbers\n");
scanf("%d%d%d",&a,&b,&c);
if(a>b  && a>c){
printf("%d is the largest number",a);
}
else if(b>c && b>a){
printf("%d is the largest number",b);
}
else if(c>a && c>b) {
printf("%d is the largest number",c);
}
else if(a==b && b>c){
printf("%d is the largest number",a);
}
else if(a==c && c>b){
printf("%d is the greatest number",a);
}
else if(b==c && c>a){
printf("%d is the greatest number",b);
}
return 0;
}
