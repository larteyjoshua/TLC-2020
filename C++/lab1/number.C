#include <iostream>
#include <algorithm> 

//function to find the mean
 double findMean (int marks[], int length)
 {
     double mean;
     double sum;
    for(int i = 0; i<length ; i++){
     sum += marks[i];
    }
     mean =sum/length;
     return mean;
 }
// function to find the median
 double findMedian(int marks[], int length){
 double median;
 std::sort(marks, marks + length);
 median=marks[length/2];
 if (length%2==0)
 {
     median =((median + marks[length/2-1]/2));
 }
     return median;
 }

 double findMode(int marks[], int length)
 {
     int mode =number;
     int count=1;
     int countMode=1;
     

 }


 int main()
 {
     int length;
     std::cout <<"Please number of marks"<<std::endl;
     std::cin>>length;
     int classOne[length];
     std::cout <<"Please enter marks"<<std::endl;
     for(int i = 0; i<length; i++){
    std::cin >>classOne[i];
     }

     std:: cout<<"mean= "<<findMean(classOne, length)<<std::endl;
     std:: cout<<"Median= "<<findMedian(classOne, length)<<std::endl;
 }



