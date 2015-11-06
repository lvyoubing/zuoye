#include<iostream>
#include<opencv2\opencv.hpp>
#include<highgui.h>
#include<stdafx.h>
int main()
{
	IplImage*src=cvLoadImage("1.jpg");
	cvNamedWindow("example");
	cvShowImage("example",src);
	cvWaitKey(6000);
	cvReleaseImage(&src);
}

 