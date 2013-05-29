int fibonacci(int n){
	if(n<1) return 0;
	else if(n==1 || n==2) return 1;
	else return fibonacci(n-1)+fibonacci(n-2);
}
int main(int argc, char *argv[]){
	if(argc<2) return 1;
	int n = atoi(argv[1]);
	printf("%d ",fibonacci(n));
	return 0;
}
