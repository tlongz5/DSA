#include <iostream>

int main(){
	float x,y,a;
	for(y=1.5;y>-1.5;y-=0.1){
		for(x=-1.5;x<1.5;x+=0.05){
			a=x*x+y*y-1;
			putchar(a*a*a-x*x*y*y*y<0.0?'*':' ');
		}
		system("color fc");
		putchar('\n');
	}
	
}

//0 = Ðen
//1 = Xanh lam d?m
//2 = Xanh lá cây
//3 = Xanh da tr?i
//4 = Ð?
//5 = Tím
//6 = Vàng
//7 = Tr?ng
//8 = Xám
//9 = Xanh lam nh?t
//A = Xanh lá cây nh?t
//B = Xanh da tr?i nh?t
//C = Ð? nh?t
//D = Tím nh?t
//E = Vàng nh?t
//F = Tr?ng sáng
