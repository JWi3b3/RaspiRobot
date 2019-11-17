#include "Camera.h"

Camera::Camera()
{
    //set camera params
	_cam.set( cv::CAP_PROP_FORMAT, CV_8UC3 );
    
    //Open camera
	std::cout << "Opening Camera..." << std::endl;
	if (!_cam.open())
    {
        std::cerr << "Error opening the camera" << std::endl;
        return;
    }
}

Camera::~Camera()
{
    std::cout << "Stop camera..." << std::endl;
	_cam.release();
}

cv::Mat Camera::getFrame()
{
    cv::Mat frame;
    _cam.grab();
    _cam.retrieve ( frame ); 
    return frame;
}
