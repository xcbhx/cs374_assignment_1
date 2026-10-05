#include <stdio.h>
#include <math.h>


/* 
    Calculate the total surface area and volume of several spherical 
    segments given the sizes of their radius R, and the heights ha and hb. 
*/
int main() {
    // User input
    int num_of_segments;
    // Keeping track of segments
    int current_segment_num;
    // Store radius and height
    float sphere_radius;
    float top_height;
    float bottom_height;
    // Calculated dimensions of spherical segment
    float top_radius_a;
    float bottom_radius_b;
    float segment_height_h;
    // Calculated surface area and volume results
    float top_surface_area;
    float bottom_surface_area;
    float lateral_surface_area;
    float total_surface_area;
    float volume;
    // Running totals
    float sum_of_surface_area;
    float sum_of_volume;
    // Final averages
    float average_surface_area;
    float average_volume;


    return 0;
}