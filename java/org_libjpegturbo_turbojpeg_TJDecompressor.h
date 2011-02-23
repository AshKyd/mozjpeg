/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_libjpegturbo_turbojpeg_TJDecompressor */

#ifndef _Included_org_libjpegturbo_turbojpeg_TJDecompressor
#define _Included_org_libjpegturbo_turbojpeg_TJDecompressor
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_libjpegturbo_turbojpeg_TJDecompressor
 * Method:    init
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_libjpegturbo_turbojpeg_TJDecompressor_init
  (JNIEnv *, jobject);

/*
 * Class:     org_libjpegturbo_turbojpeg_TJDecompressor
 * Method:    destroy
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_libjpegturbo_turbojpeg_TJDecompressor_destroy
  (JNIEnv *, jobject);

/*
 * Class:     org_libjpegturbo_turbojpeg_TJDecompressor
 * Method:    decompressHeader
 * Signature: ([BI)V
 */
JNIEXPORT void JNICALL Java_org_libjpegturbo_turbojpeg_TJDecompressor_decompressHeader
  (JNIEnv *, jobject, jbyteArray, jint);

/*
 * Class:     org_libjpegturbo_turbojpeg_TJDecompressor
 * Method:    decompress
 * Signature: ([BI[BIIIII)V
 */
JNIEXPORT void JNICALL Java_org_libjpegturbo_turbojpeg_TJDecompressor_decompress
  (JNIEnv *, jobject, jbyteArray, jint, jbyteArray, jint, jint, jint, jint, jint);

/*
 * Class:     org_libjpegturbo_turbojpeg_TJDecompressor
 * Method:    getScaledWidth
 * Signature: (IIII)I
 */
JNIEXPORT jint JNICALL Java_org_libjpegturbo_turbojpeg_TJDecompressor_getScaledWidth
  (JNIEnv *, jobject, jint, jint, jint, jint);

/*
 * Class:     org_libjpegturbo_turbojpeg_TJDecompressor
 * Method:    getScaledHeight
 * Signature: (IIII)I
 */
JNIEXPORT jint JNICALL Java_org_libjpegturbo_turbojpeg_TJDecompressor_getScaledHeight
  (JNIEnv *, jobject, jint, jint, jint, jint);

#ifdef __cplusplus
}
#endif
#endif
