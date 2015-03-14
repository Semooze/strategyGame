#include <stdio.h>
#include <math.h>
int attack(int mySoldiers, int hpB, int attackB, int numB)
{
  int round = 0;
  float hp = hpB;
  int numRest=numB;
  int hpRest=numB*hp;
  while(1)
    {
      hpRest= hpRest-mySoldiers;
      numRest = ceil(hpRest/hp);
      mySoldiers = mySoldiers-(numRest*attackB);
      round = round +1;
      if(hpRest <= 0)
	break;
      else if(mySoldiers <=0 )
	return -1;
    }
  return round;
}

int main(){
  int mySoldiers;
  int hpB;
  int attackB;
  int numB;
 
  printf("Enter number of soldier 1-1000000\n");
  scanf("%d",&mySoldiers);
  if(mySoldiers > 1000000 || mySoldiers < 1)
    {
      printf("mySoldiers out of range \n");
      return 0;
    }
  
  printf("Enter hpB 1-10000\n");
  scanf(" %d",&hpB);
  if(hpB > 10000 || hpB < 1)
    {
      printf("hpB is out of range \n");
      return 0;
    }

 printf("Enter attackB 1-10000\n");
 scanf(" %d",&attackB);
 if(attackB > 10000 || attackB < 1)
   {
     printf("attackB out of range \n");
     return 0;
   }
 
 printf("Enter numB 1-10000\n");
 scanf(" %d",&numB);
 if(numB > 10000 || numB < 1)
    {
      printf("numB is out of range \n");
      return 0;
    }

  printf("return = %d\n",attack(mySoldiers,hpB,attackB,numB));

  return 0;
}
