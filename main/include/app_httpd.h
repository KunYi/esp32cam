#ifndef _CAMERA_HTTPD_H_
#define _CAMERA_HTTPD_H_

#ifdef __cplusplus
extern "C" {
#endif
typedef signed char int8_t;
void app_httpd_main();
#if 0
int8_t e_save_face_id_to_flash(void);
int8_t e_delete_face_id_in_flash(void);
int8_t e_read_face_id_from_flash(uint8_t sv_id_num,uint8_t cf_times);
#endif
#ifdef __cplusplus
}
#endif

#endif /* _CAMERA_HTTPD_H_ */
