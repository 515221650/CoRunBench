#ifdef __cplusplus
extern "C" {
#endif

//========================================================================================================================================================================================================200
//	DEFINE / INCLUDE
//========================================================================================================================================================================================================200

#define fp float

#include "avilib.h"

//========================================================================================================================================================================================================200
//	DEFINE / INCLUDE
//========================================================================================================================================================================================================200

fp* chop_flip_image(	char *image, 
								int height, 
								int width, 
								int cropped,
								int scaled,
								int converted) ;

fp* get_frame(	avi_t* cell_file, 
						int frame_num, 
						int cropped, 
						int scaled,
						int converted) ;

//========================================================================================================================================================================================================200
//	End
//========================================================================================================================================================================================================200

#ifdef __cplusplus
}
#endif