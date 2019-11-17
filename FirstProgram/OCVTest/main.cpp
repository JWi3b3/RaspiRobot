
#include "Camera.h"

#include <raspicam/raspicam_cv.h>

#include <iostream>

 
int main ( int argc,char **argv )
{
	Camera cam;

    // run camera
    while( true )
    {
        cv::Mat frame = cam.getFrame();

        cv::imshow("webcam input", frame);
        if (cv::waitKey(1) == 27)
            break;
    }
    
	
}