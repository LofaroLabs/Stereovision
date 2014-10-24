/*
* File:   main.cpp
* Author: sagar
*
* Created on 10 September, 2012, 7:48 PM
*/
 
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <iostream>
using namespace cv;
using namespace std;
 
int main() {
VideoCapture streamR("http://127.0.0.1:9091/camera.mjpg");   //0 is the id of video device.0 if you have only one camera.
 
if (!streamR.isOpened()) { //check if video device has been initialised
cout << "cannot open camera";
}

//unconditional loop
while (true) {
Mat cameraFrameR;
streamR.read(cameraFrameR);
imshow("camR", cameraFrameR);
if (waitKey(30) >= 0)
break;
}
return 0;
}
