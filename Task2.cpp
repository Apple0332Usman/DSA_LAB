#include<iostream>
#include<cmath>
using namespace std;
///
class point
{
	int x;
	int y;
public:

	point(int x1, int y1)
	{
		x = x1;
		y = y1;
	}
	void set_x(int x)
	{
		this->x = x;
	}
	void set_y(int y)
	{
		this->y = y;
	}
	int get_x()const
	{
		return x;
	}
	int get_y()const
	{
		return y;
	}
	double distance_cal(int x,int y)
	{
		int xo = (x - this->x);
		int yo = (y - this->y);
		double dis = sqrt((xo * xo) + (yo * yo));
		return dis;
	}


};


int main()
{

	point ob1(3, 4), ob2(4, 5);


	int x, y;
	cout << "Enter the x and y co -ordinate from to calcalualte the distance \n";
	cin >> x >> y;

	cout << "The distacne from ob1 to ob 2 : " << ob1.distance_cal(x, y)<<endl;
	x = ob2.get_x();
	y = ob2.get_y();
	cout << "The distance from point 1 (3,4) to point 2(4,5) : " << ob1.distance_cal(x, y) << endl;
	



}
