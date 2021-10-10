#include<stdio.h>
#include<math.h>
struct point{
    float x,y,n,z,m;
}p1,p2,p3,p4,p5,p6,p7;
void main(){
  printf("Enter the coordinates for s1:");
  scanf("%f\t%f",&p1.x,&p1.y);
  printf("Enter the coordinates for s2:");
  scanf("%f\t%f",&p2.x,&p2.y);
  printf("Enter the coordinates for s3:");
  scanf("%f\t%f",&p6.x,&p6.y);
p3.x=pow((p2.x-p1.x),2);
p3.y=pow((p2.y-p1.y),2);
p4.n=pow((p3.x+p3.y),0.5);
printf("The distance between points s1(%f,%f) and s2(%f,%f) is: %f\n",p1.x,p1.y,p2.x,p2.y,p4.n);
p5.x=(p1.x+p2.x)/2;
p5.y=(p1.y+p2.y)/2;
printf("The midpoints of points s1 and s2 are: %f,%f\n",p5.x,p5.y);
p7.m=(0.5*((p1.x*(p2.y-p6.y))+(p2.x*(p6.y-p1.y))+(p6.x*(p1.y-p2.y))));
printf("The area of the traingle with vertices s1,s2 and s3 is: %f",p7.m);
}
