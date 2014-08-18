#include <iostream>
#include "opencv2/opencv.hpp"

using namespace std;
using namespace cv;

int main(int argc, char* argv[])
{
    Mat img = imread(argv[1]);

    if (imwrite("/dev/scull0", img))
        cout << "successfully written." << endl;

    return 0;
}
