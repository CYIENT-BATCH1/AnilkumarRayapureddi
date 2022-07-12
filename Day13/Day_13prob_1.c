/*requirement 1 output1:
 1.assign sensor data in 2D array
2.Read the sensor  data[using for loop]
3.If check the condition(the range  in between <0x05 and >0xf0)
4.print noise values
output2:
1.check the non noise values (the range of between>0x05 and <0xf0)
2.print the non noise values.

requirement 2 output1:
1.assign sensor data in 2D array
2.read the malfunction data(using for loop)
3.If check the condition where data is coming as malfunction/corrupted(the range 0x00 and 0xff)
4.print malfunction values

output2:
1.check the deleted malfunction/corrupted data samples (the range of between>0x00 and <0xff)
2.print the samples
*/






#include<stdio.h>
int main(){
int a[20][2]={{0,0x00},{10,0x00},{20,0x0f},{30,0xff},{40,0xff},{50,0x05},{60,0xaa},{70,0x55},{80,0xfe},
                {90,0x00},{100,0x00},{110,0x00},{120,0xff},{130,0xff},{140,0xff},{150,0xff},{160,0x11},{170,0x33},
                    {180,0x99},{190,0xe9}};
int i;
for(i=0;i<20;i++){

    printf("%d %x\n", a[i][0],a[i][1]);//print all values in 2D array
}
puts("\n this are noise values");
for(i=0;i<20;i++){
    if(a[i][1]<0x05 || a[i][1]>0xf0){  //check the noise values(the range  in between <0x05 and >0xf0;
    	printf("%d\t ",a[i][0]);//print noise values only

    }
}
puts("\n this are non noise values");
for(i=0;i<20;i++){
    if(a[i][1]>0x05 && a[i][1]<0xf0){// check the non noise values(the range of between>0x05 and <0xf0;
        	printf("%d %x\n ",a[i][0],a[i][1]);//print non noise values with time stamp
}
}
//requirement 2:
int b[20][2]={{0,0x01},{10,0x06},{20,0x04},{30,0x00},{40,0x00},{50,0x00},{60,0xaa},{70,0x55},{80,0xfe},
         {90,0xef},{100,0xee},{110,0x02},{120,0x05},
     {130,0xff},{140,0xff},{150,0xff},{160,0x11},{170,0x33},{180,0x99},{190,0xe9}};
puts("\nrequirement2");
 for(i=0;i<20;i++){
 printf("%d %x\n",b[i][0],b[i][1]); //print all req2 values in 2D array
  }
 puts("\n malfunction/corrupted data samples");
  for(i=0;i<20;i++){
  if(b[i][1]==0x00 || b[i][1]==0xff){//Print the time stamps where data is coming as malfunction/corrupted(the range 0x00 and 0xff)
      printf("%d ",b[i][0]);//print the continuous 3 malfunctions
  }
}
  puts("\n deleted malfunction/corrupted data samples");
for(i=0;i<20;i++){
    if(b[i][1]!=0x00 && b[i][1]!=0xff){ //check the deleted malfunction/corrupted data samples
        printf("%d %x\n",b[i][0],b[i][1]);//print the samples
    }
}
}


