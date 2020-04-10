main (argc, argv)
int argc;
char *argv[ ];
{
	//assume 2 args: source file and target file */
if (fork()==0)
execl ("copy", "copy", argv[1], argv[2], 0) ;
wait (int*) 0) ;
printf("copy done\n ") ;
}

