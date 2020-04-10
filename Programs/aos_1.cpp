#include<fcntl.h>
using namespace std;
char buffer[2048];
int version=1;
int main(argc,argv)

	int argv;
	char *argv[];
	{
		int fdold,fdnew;
		if(arc!=3)
		{
			cout<<"need";
			exit(1);
		}
		fdold=open(argv[1],O_RDONLY);
		if(fdold==-1)
		{
			cout<<" 2 cout";
			exit(1);
		}
		fdnew - creat(argv[2]. 0666); 
		if (fdnew -- -1)
		{
			printf("cannot create file %s\n", argv[2J);
			exit (I);
		}
		copy(fdold, fdnew);
		exit (O);
	}
		copy(old, new)
		int old, new;
		{
		int count;
		while ( (count- read (old, buffer, sizeof(buffer))) > 0)
		write(new, buffer, count);

		}
		
	
	

