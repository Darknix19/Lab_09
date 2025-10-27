float calculateInterest(float principle,float rate,float time){
	float interest;
	
	
	interest = principle*rate*time/100;
	return interest;
}

float updateBalance(float current, float interest){
	float newBalance; 
	
	newBalance = current + interest;
}

int main(){
    float principle,rate,time,current,Balance;
    
  printf("Enter principle:");
	scanf("%f", &principle);
	
	printf("Enter rate:");
	scanf("%f", &rate);
	
	printf("Enter time:");
	scanf("%f", &time);
	
	printf("%.2f\n",calculateInterest(principle,rate,time));
	
	printf("Enter current balance:\n");
	scanf("%f", &current);

  printf("Your Updated Balance is: %.2f\n",updateBalance(current,calculateInterest(principle,rate,time)));
    
    
    return 0;
}
