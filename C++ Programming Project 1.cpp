/* A government research lab has concluded that an artificial sweetner commonly used in diet soda pop will cause death in laboratory mice.
 A friend of yours is desperate to lose weiht but cannot give up soda pop. Your friend wants to how much diet soda pop it is possible to 
drink without dying as a result. Write a program to supply the answer.
 The input to the program is the amount of artificial sweetner needed 
to kill a mouse, the weight of the mouse, and the weight of the dieter. To ensure the safety of your friend, be sure the program requests the weight 
at which the dieter will stop dieting, rather than the dieters current weight. Assume that diet soda contains 1/10th of 1% artificial sweetner.
Use a variable decllaration with the modifier const to give a name to this fraction. You may want to express the percent as the double value 0.001. Your program 
should allow the calculation to be repeated as the user wish.*/

// Keeps asking the user for input
#include<iostream>
using namespace std;
int main(){
    
    
double const sweetner_amount = 0.001;
double  dieter_weight;
double mice_weight = 15.00;
double soda_amount;

cout<<"The weight of the person is : ";
cin>>dieter_weight;
cout<<endl;
cout<<" The amount of soda the person taking is :";
cin>>soda_amount;
cout<<endl;
cout<<"The weight of the mice is : "<<mice_weight<<endl;

double  total_amount = sweetner_amount * 30;
double mice_death = mice_weight + mice_weight * (sweetner_amount * 30);
cout<<" The amount of sweetner needed to kill a mice is : "<<mice_death;
cout<<endl;

cout<<"The amount of soda pop a person can dring in a month is : "<<total_amount;
cout<<endl;

cout<<" The amount of soda a person can consume is less than : "<<mice_death<<endl;
if((sweetner_amount >= mice_death)||(soda_amount >=mice_death))
{
    cout<<"Stop drinking soda pop. Unless you wanna die "<<endl;
}
else
	cout<<"You can continue drinking the soda pop"<<endl;
 while ((sweetner_amount!=mice_death)||(total_amount!=mice_death))
   {
       
  
	cout<<"The weight of the person is : ";
	cin>>dieter_weight;
	cout<<endl;
	cout<<" The amount of soda the person taking is :";
	cin>>soda_amount;
	cout<<endl;
	cout<<"The weight of the mice is : "<<mice_weight<<endl;
  }

return 0;
}


