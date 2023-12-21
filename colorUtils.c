#include<stdio.h>
#include<math.h>
#include"colorUtils.h"
// made function to find the max 
double max(double red , double green, double blue){
    double max = (red > green)? red : green;
    return (max > blue)? max : blue;
}
