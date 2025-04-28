//COMPARE TWO STRUCTURES OF (x,y) COORDINATES AND RETURN THE ONE WITH HIGHER AREA
#include <stdio.h>
#include <stdlib.h>
typedef struct coordinate{
    int x;
    int y;
}point;

point area(point a1, point a2){
    if (((a1.x*a1.y)>(a2.x*a2.y)))
    {
        return a1;
    }
    else{
        return a2;
    }
}
int main(){
    point a1={10,20};
    point a2={30,20};
    
   printf("%d %d", area(a1,a2).x,area(a1,a2).y);
    
    return 0;
}