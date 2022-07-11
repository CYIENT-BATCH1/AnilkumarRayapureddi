(C)LOGICAL OPERATOR

FINDOUT THE VALUE FOR i,j,k


int i=10,j=20,k

1)k=i&&j;  

  answer:1

2)k=i||j;

 answer:1

3)k=!i;
 
  answer:0

--------------------------------------------

int i=10,j=0,k

4)k=i&&(j=20);//i=?,j=?,k=?

 answer:10,20,1

5)k=i||(j=20);//i=?,j=?,k=?

answer:10,20,1


int i=0,j=0,k=30,l;

6)l=i||(j=20)&&k; //i=?,j=?,k=?,l=?

  answer:0,20,30,1

int i=10,j=20,k=0,l

7)l=i&&j||j&&k;

  answer:1

8)l=i||j&&i||k;

  answer:1

