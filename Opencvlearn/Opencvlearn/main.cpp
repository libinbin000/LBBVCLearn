#include <iostream>
#include <opencv2/opencv.hpp>
#include <random>

using namespace std;
using namespace cv;

int main()
{
	random_device ran;
	mt19937 gen(ran());

	Mat img(600, 600, CV_8UC3, Scalar(0, 0, 0));
	
	for (int i = 0; i < 5000; i++) 
	{
		int x = gen() % 600;
		int y = gen() % 600;

		if ((300 - x)*(300 - x) + (300 - y)*(300 - y) > 300 * 300) 
		{
			//circle(img, Point(x, y), 1, Scalar(0, 255, 0), 1, LINE_8, 0);
		}
		else {
			circle(img, Point(x, y), 1, Scalar((x + y) / 8, 255, (x+y)/5), 1, FILLED, 0);
		}
	}

	imshow("xx",img);
	waitKey();
}