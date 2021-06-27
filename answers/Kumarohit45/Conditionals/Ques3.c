#include<stdio.h>
int main()
{
  int id, water;
  char name[22];
  float bill, amount;
  printf("Enter Customer Id : ");
  scanf("%d", &id);
  printf("Enter Name : ");
  scanf("%s", &name);
  printf("Enter the amount of water consumed : ");
  scanf("%d", &water);
  if (water<=199 && water>0){
    bill = 3*water;
  }
  else if (water>=200 && water<400){
    bill = 3.35*water;
  }
  else if (water>=400 && water<600){
    bill = 4.80*water;
  }
  else{
    bill = 5.10*water;
  }
  if (bill>=1250){
    amount=bill+(0.15*bill);
  }
  else{
    amount=bill;
  }
  printf("Customer Id : %d\nName : %s\nAmount of water consumed : %d litres\nNet Amount to be paid for water : %d\n", id, name, water, (int)amount);
  return 0;
}