// point.h
//

#ifndef LZZ_point_h
#define LZZ_point_h
#define LZZ_INLINE inline
class Point
{
private:
  int X;
  int Y;
  string name;
public:
  void setX (int x);
  int getX ();
  int getY ();
  void setY (int y);
};
#undef LZZ_INLINE
#endif
