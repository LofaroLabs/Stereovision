The sending and receiving cameras code for our ARCHR stereovision system.
The streaming script opens a left and right webcam in openCV and streams them through the linux socket library.
It can be run by the startStream bash script.
The receiving end stream is accessed on a computer that can communicate with the host
by running the startReceive bash script.
For more information on how it works or to set this up for your system visit:
http://wiki.lofarolabs.com/index.php/Streaming_webcams_to_Oculus_Rift_with_openCV