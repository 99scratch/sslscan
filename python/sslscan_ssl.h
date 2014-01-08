#ifndef _SSLSCAN_SSL_H
#define _SSLSCAN_SSL_H
#include <Python.h>
#include <openssl/ssl.h>

typedef struct {
	PyObject_HEAD
	X509 *x509;
} sslscan_ssl_x509_obj;

extern PyTypeObject sslscan_ssl_x509_Type;

#endif
