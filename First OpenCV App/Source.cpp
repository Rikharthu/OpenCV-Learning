#include <iostream>
#include "opencv2\highgui\highgui.hpp"
#include "opencv2\core\core.hpp"
#include "opencv2\opencv.hpp"

using namespace cv;
using namespace std;

const string WINDOW_NAME = "WINDOW_PICTURE";

int main() {

	Mat image;
	image = imread("1.png", 1);
	// first parameter - is the name of the picture
	// 2nd parameter when it's 1 --> Read it in BGR format
	// when it's 0 --> Read it in GrayScale format

	// create the window
	namedWindow(WINDOW_NAME, CV_WINDOW_FREERATIO);
	// show the image inside the window
	imshow(WINDOW_NAME, image);
	// stop the window until any key pressed

	// notice that imshow and namedWindow must have the same name
}
