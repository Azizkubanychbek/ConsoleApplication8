#include <iostream>
class Triangle {
public:
	Triangle() {}
	Triangle(int a,int b, int c, int A, int B,int C) {
		
	
		std::cout << "Sides : a = " << a << " b = " << b << " c = " << c << std::endl;
		std::cout << "Corners : A = " << A << " B = " << b << " C = " << C << std::endl;
		std::cout << "\n";
	}
protected:

		int a, b, c;
		int A, B, C;

};
class Quadrate {
public:
	Quadrate() {}
	Quadrate(int a, int b, int c,int d, int A, int B, int C,int D) {
		std::cout << "Sides : a = " << a << " b = " << b << " c = " << c <<" d = "<<d<< std::endl;
		std::cout << "Corners : A = " << A << " A = " << b << " C = " << C <<" D = "<<D<< std::endl;
		std::cout << "\n\n";
	}
protected:
	int a, b, c, d;
	int A, B, C, D;

};
class Prtr :public Triangle {
public:
	//int get_c() { return C; }
	Prtr(int a, int b, int c, int A, int B):Triangle(a, b, c, A, B, C = 90)
	{
	}
//private:
	//int C = 90;
};
class Rbtr :public Triangle {
public:
	

	Rbtr(int a, int b, int A, int B) :Triangle(a, b, c = a, A, B, C = A)
	{
	}

};
class Rtr :public Triangle {
public:


	Rtr(int a) :Triangle(a, a, a,60,60,60)
	{
	}

};
class Prmu :public Quadrate {
public:
	Prmu(int a, int b) :Quadrate(a, b, a,b, 90, 90, 90, 90) {

	}
};
class Kv :public Quadrate {
public:
	Kv(int a):Quadrate(a,a,a,a,90,90,90,90){}
};
class Par :public Quadrate {
public:
	Par(int a, int b, int A, int B):Quadrate(a,b,a,b,A,B,A,B){}
};
class Rm :public Quadrate {
public:
	Rm(int a, int A,int B):Quadrate(a,a,a,a,A,B,A,B){}
};

int main()
{
	std::cout << "triangle:\n";
	Triangle triangle(10,20,30,40,50,60);
	std::cout << "Prtr: \n";
	Prtr prtr(29, 39, 59, 21, 33);
	std::cout << "Rbtr: \n";
	Rbtr rbtr(10, 20, 20, 10);
	std::cout << "Rtr: \n";
	Rtr rtr(15);
	std::cout << "Quadrat: \n";
	Quadrate quadrate(10, 20, 30, 40, 50, 60, 70, 80);
	std::cout << "Prmu: \n";
	Prmu prmu(10, 20);
	std::cout << "Kv: \n";
	Kv kv(20);
	std::cout << "Par: \n";
	Par par(10, 12, 60, 30);
	std::cout << "Rm: \n";
	Rm rm(10, 30, 60);


	
}
