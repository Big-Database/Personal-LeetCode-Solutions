#include <iostream> 
#include <vector> 
#include <algorithm>

using namespace std; 

class Solution{
    public: 

        int max(int left, int right){
            return left > right? left:right; 
        }

        int min(int left, int right){
            return left>right? right: left;
        }

        int maxArea(vector<int>& heights){
            int area = 0; 
            int left = 0; 
            int right = heights.size()-1; 

            while(left < right){
                area = max(area, (right-left)*min(heights[left],heights[right])); 
                if(heights[left] > heights[right]){
                    right--; 
                }else{
                    left++;
                }
            }

            return area; 
        }
}; 

/*
[2,6,4,6,8,9,6,4,3]
[0,1,2,3,4,5,6,7,8]

if we take 6,6 --> 5*6 = 30 
if we take any other number the x-axis is not really maximised 


So the algorithm should try to maximise two things the length of the x-axis 
and the height on opposite ends of the water container 


Ok so why would mathematically moving to the left or right prove the fact that this would return
me the right number logically 

Say we have an array of fixed size 5 
then for all x where x is any positive integer we can compare the two numbers. 
We know for a fact that if one side the number is bigger than the other side could benefit from an increase 
so we increase the x-axis to check for a potential bigger number, and if we find this bigger number
now the right side could potentially benefit from finding a bigger number. 

Essentially what we need to prove is the fact that when we shift a number on the left and right there are 
no more numbers that coud potentially yield a larger result. Why? 
Because we are always looking for the bigger height value 

we aren't directely comparing each height to each individual element but simply to each other 
and since the x-axis value is already maximised, we are essentially 
finding a value a < x such that a*y2 > x*y1. So this is true for a lot of numbers we are simply checking
whether the array contains any of these numbers, so we simply need to go through the list 
but then why two pointers 

How can I prove that an algorithm does the right thing? 








*/