 #include<stdio.h>
 #include<stdlib.h> 
 int main(int argc, char*argv[])
  {
       int a=0,b=0,c=0;
       a  = atoi(argv[1]);
      b = atoi(argv[2]);
      c = atoi(argv[3]);
      int max =a;
    if(max<b)
    {
    max= b;
    }
    if(max<c)
    {
    max = c;
    }
    printf("%d max valves\n",max);
      return 0;
      }
