#include "opencv2/opencv.hpp"
#include <iostream>


int main()
{
	std::cout << "Hello OpenCV" << CV_VERSION << std::endl;

	cv::Mat img;
	img = cv::imread("IU.bmp");
	
	if (img.empty()) {
		std::cerr << "Image load failed!" << std::endl;
		return -1;
	}

	// Mat 객체에 저장되어 있는 영상 데이터를 저장하기 위해 사용하는
	// imwrite() 함수 사용
	std::vector<int> params;
	params.push_back(cv::ImwriteFlags::IMWRITE_JPEG_QUALITY);
	params.push_back(95);
	imwrite("IUm.jpg", img, params);
	//저장할 파일이름, 저장할 영상 데이터(Mat 객체), 저장할 영상 파일 형식에 의존적인 파라미터(플래그 & 값) 쌍 


	cv::namedWindow("image");
	cv::imshow("image", img);


	cv::waitKey();

	return 0;
}