unsigned long  myFact(unsigned long n){
if(!(n > 1.0))
	return 1.0;
else
	return (n * myFact(n - 1.0));

}
