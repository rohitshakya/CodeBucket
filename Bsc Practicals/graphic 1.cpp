//#include<bitmap>
#include<rect>
simplewindow w("hello",5.0,6.0);
int apimain()
{
	w.open();
	rectangleshape r(w,3,4 red);
	r.draw();
	bitmap die(w);
	die.load("dice3.bmp");
	die.draw();
	return 0;
}
