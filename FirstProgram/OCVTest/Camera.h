#include <iostream>
#include <raspicam/raspicam_cv.h>

class Camera
{
public:
    Camera();
   ~Camera();
   
    cv::Mat getFrame();
    
private:
    raspicam::RaspiCam_Cv _cam;
};