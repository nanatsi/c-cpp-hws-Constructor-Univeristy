//CH - 230 - A
//a3.p7.c
// Nana Tsignadze
//ntsignadze@jacobs-university.de



  #include<stdio.h>

 float the_sum(float array[]) { //creating a function
	int n;
	float sum;
	sum = 0;
	for (n = 1; n <= 10; n++) { //cycle for up to 10 floats

		if (array[n]==-99.0) { //breaks it for -99.0 value
			break;
		}
		sum=sum+array[n]; //computing the sum
		
			
	}
	return sum;
}

 float the_average(float array []) { //creating a function
	int n;
	float sum;
	sum = 0;    
	float a;
	 for (n = 1; n <= 10; n++) { //cycle for up to 10 floats
		
		 if(array[n]==-99.0) { //breaks it for -99.0 value
		   break;
		}
		sum = sum +array[n]; //computing the sum
		
	}
	n--;
	a=sum / n; //returns the average
	return a;

}
int main() {
	int n;
	float array [10];
	for(n=1; n<=10; n++) //reads from the keyboard till 
	                      //the right amount of values are inputted
	{
	scanf("%f", &array[n]);
	if(array[n]==-99.0){ //checks for -99.0
		break;
	}
}
	printf("SUM=%f\n", the_sum(array)); //uses functions
	printf("AVERAGE=%f\n", the_average(array));
	return 0;

	
	

}
