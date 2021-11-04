#ifdef TRIANGLES_EXPORTS
#define TRIANGLES_API __declspec(dllexport)
#else
#define TRIANGLES_API __declspec(dllimport)
#endif

namespace TrianglesFuncs
{
	class MyTrianglesFuncs
	{
	public:
		static TRIANGLES_API double Perimeter(double A, double B, double C);
		static TRIANGLES_API double Area(double A, double B, double C);
	};
}