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

	// Mat ��ü�� ����Ǿ� �ִ� ���� �����͸� �����ϱ� ���� ����ϴ�
	// imwrite() �Լ� ���
	std::vector<int> params;
	params.push_back(cv::ImwriteFlags::IMWRITE_JPEG_QUALITY);
	params.push_back(95);
	imwrite("IUm.jpg", img, params);
	//������ �����̸�, ������ ���� ������(Mat ��ü), ������ ���� ���� ���Ŀ� �������� �Ķ����(�÷��� & ��) �� 


	cv::namedWindow("image");
	cv::imshow("image", img);


	cv::waitKey();

	return 0;
}