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

    printf("How many spherical segments you want to evaluate [2-10]?\n");
    scanf("%d", &num_of_segments);

    while(num_of_segments < 2 || num_of_segments > 10) {
        printf("How many spherical segments you want to evaluate [2-10]?\n");
        scanf("%d", &num_of_segments);
    }

    for (current_segment_num = 1; current_segment_num <= num_of_segments; current_segment_num++) {
        printf("Obtaining data for spherical segment number %d\n", current_segment_num);

        printf("What is the radius of the sphere (R)?\n");
        scanf("%f", &sphere_radius);

        printf("What is the height of the top area of the spherical segment (ha)?\n");
        scanf("%f", &top_height);

        printf("What is the height of the bottom area of the spherical segment (hb)?\n");
        scanf("%f", &bottom_height);

        printf("Entered data: R = %.2f ha = %.2f hb = %.2f.\n", sphere_radius, top_height, bottom_height);
    }


    return 0;
}