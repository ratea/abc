#include<iostream>
using namespace std;

int main()
{
	double a;
	//cin >> a;
	string s;
	
	double b;
	cin >> a >> b;
	b/=60;
	b*=10;
	b+=0.5;
	b=(int)b;
	b=(double)b;
	b/=10;
	
	
	int c;
	
	if(b>=0&&b<=0.2){
		s = "C";
	}else if(a<112.5){
		s = "N";
	}else if(a<337.5){
		s = "NNE";
	}else if(a<562.5){
		s = "NE";
	}else if(a<787.5){
		s = "ENE";
	}else if(a<1012.5){
		s = "E";
	}else if(a<1237.5){
		s = "ESE";
	}else if(a<1462.5){
		s = "SE";
	}else if(a<1687.5){
		s = "SSE";
	}else if(a<1912.5){
		s = "S";
	}else if(a<2137.5){
		s = "SSW";
	}else if(a<2362.5){
		s = "SW";
	}else if(a<2587.5){
		s = "WSW";
	}else if(a<2812.5){
		s = "W";
	}else if(a<3037.5){
		s = "WNW";
	}else if(a<3262.5){
		s = "NW";
	}else if(a<3487.5){
		s = "NNW";
	}else{
		s = "N";
	}
	
	if(b<=0.2){
		c=0;
	}else if(b<=1.5){
		c=1;
	}else if(b<=3.3){
		c=2;
	}else if(b<=5.4){
		c=3;
	}else if(b<=7.9){
		c=4;
	}else if(b<=10.7){
		c=5;
	}else if(b<=13.8){
		c=6;
	}else if(b<=17.1){
		c=7;
	}else if(b<=20.7){
		c=8;
	}else if(b<=24.4){
		c=9;
	}else if(b<=28.4){
		c=10;
	}else if(b<=32.6){
		c=11;
	}else{
		c=12;
	}
	
	cout << s << " " << c << endl;
	
	
	return 0;
}