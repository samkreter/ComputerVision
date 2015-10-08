#include <iostream>
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"

using namespace std;
using namespace cv;

int main(int argc, char** argv){


    Mat image;

    image = imread(argv[1], CV_LOAD_IMAGE_GRAYSCALE);

    if(!image.data){
        cout<<"could not open the image"<<endl;
        return -1;
    }

    namedWindow("testing",WINDOW_AUTOSIZE);
    imshow("testing",image);
    waitKey(0);


    return 0;

}