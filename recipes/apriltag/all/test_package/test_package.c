#include <apriltag.h>
#include <tagStandard41h12.h>
#include <common/image_u8.h>

#include <stdio.h>

int main(int argc, char *argv[])
{
    apriltag_detector_t *td = apriltag_detector_create();
    apriltag_family_t *tf = tagStandard41h12_create();
    apriltag_detector_add_family(td, tf);

    apriltag_detector_destroy(td);
    tagStandard41h12_destroy(tf);

    printf("Apriltag test_package ran successfully\n");

    return 0;
}
