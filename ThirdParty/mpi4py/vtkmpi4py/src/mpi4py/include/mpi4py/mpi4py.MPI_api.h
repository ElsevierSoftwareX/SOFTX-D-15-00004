/* Generated by Cython 0.29.2 */

#ifndef __PYX_HAVE_API__mpi4py__MPI
#define __PYX_HAVE_API__mpi4py__MPI
#ifdef __MINGW64__
#define MS_WIN64
#endif
#include "Python.h"
#include "mpi4py.MPI.h"

static PyTypeObject *__pyx_ptype_6mpi4py_3MPI_Status = 0;
#define PyMPIStatus_Type (*__pyx_ptype_6mpi4py_3MPI_Status)
static PyTypeObject *__pyx_ptype_6mpi4py_3MPI_Datatype = 0;
#define PyMPIDatatype_Type (*__pyx_ptype_6mpi4py_3MPI_Datatype)
static PyTypeObject *__pyx_ptype_6mpi4py_3MPI_Request = 0;
#define PyMPIRequest_Type (*__pyx_ptype_6mpi4py_3MPI_Request)
static PyTypeObject *__pyx_ptype_6mpi4py_3MPI_Prequest = 0;
#define PyMPIPrequest_Type (*__pyx_ptype_6mpi4py_3MPI_Prequest)
static PyTypeObject *__pyx_ptype_6mpi4py_3MPI_Grequest = 0;
#define PyMPIGrequest_Type (*__pyx_ptype_6mpi4py_3MPI_Grequest)
static PyTypeObject *__pyx_ptype_6mpi4py_3MPI_Message = 0;
#define PyMPIMessage_Type (*__pyx_ptype_6mpi4py_3MPI_Message)
static PyTypeObject *__pyx_ptype_6mpi4py_3MPI_Op = 0;
#define PyMPIOp_Type (*__pyx_ptype_6mpi4py_3MPI_Op)
static PyTypeObject *__pyx_ptype_6mpi4py_3MPI_Group = 0;
#define PyMPIGroup_Type (*__pyx_ptype_6mpi4py_3MPI_Group)
static PyTypeObject *__pyx_ptype_6mpi4py_3MPI_Info = 0;
#define PyMPIInfo_Type (*__pyx_ptype_6mpi4py_3MPI_Info)
static PyTypeObject *__pyx_ptype_6mpi4py_3MPI_Errhandler = 0;
#define PyMPIErrhandler_Type (*__pyx_ptype_6mpi4py_3MPI_Errhandler)
static PyTypeObject *__pyx_ptype_6mpi4py_3MPI_Comm = 0;
#define PyMPIComm_Type (*__pyx_ptype_6mpi4py_3MPI_Comm)
static PyTypeObject *__pyx_ptype_6mpi4py_3MPI_Intracomm = 0;
#define PyMPIIntracomm_Type (*__pyx_ptype_6mpi4py_3MPI_Intracomm)
static PyTypeObject *__pyx_ptype_6mpi4py_3MPI_Topocomm = 0;
#define PyMPITopocomm_Type (*__pyx_ptype_6mpi4py_3MPI_Topocomm)
static PyTypeObject *__pyx_ptype_6mpi4py_3MPI_Cartcomm = 0;
#define PyMPICartcomm_Type (*__pyx_ptype_6mpi4py_3MPI_Cartcomm)
static PyTypeObject *__pyx_ptype_6mpi4py_3MPI_Graphcomm = 0;
#define PyMPIGraphcomm_Type (*__pyx_ptype_6mpi4py_3MPI_Graphcomm)
static PyTypeObject *__pyx_ptype_6mpi4py_3MPI_Distgraphcomm = 0;
#define PyMPIDistgraphcomm_Type (*__pyx_ptype_6mpi4py_3MPI_Distgraphcomm)
static PyTypeObject *__pyx_ptype_6mpi4py_3MPI_Intercomm = 0;
#define PyMPIIntercomm_Type (*__pyx_ptype_6mpi4py_3MPI_Intercomm)
static PyTypeObject *__pyx_ptype_6mpi4py_3MPI_Win = 0;
#define PyMPIWin_Type (*__pyx_ptype_6mpi4py_3MPI_Win)
static PyTypeObject *__pyx_ptype_6mpi4py_3MPI_File = 0;
#define PyMPIFile_Type (*__pyx_ptype_6mpi4py_3MPI_File)

static PyObject *(*__pyx_api_f_6mpi4py_3MPI_PyMPIDatatype_New)(MPI_Datatype) = 0;
#define PyMPIDatatype_New __pyx_api_f_6mpi4py_3MPI_PyMPIDatatype_New
static MPI_Datatype *(*__pyx_api_f_6mpi4py_3MPI_PyMPIDatatype_Get)(PyObject *) = 0;
#define PyMPIDatatype_Get __pyx_api_f_6mpi4py_3MPI_PyMPIDatatype_Get
static PyObject *(*__pyx_api_f_6mpi4py_3MPI_PyMPIStatus_New)(MPI_Status *) = 0;
#define PyMPIStatus_New __pyx_api_f_6mpi4py_3MPI_PyMPIStatus_New
static MPI_Status *(*__pyx_api_f_6mpi4py_3MPI_PyMPIStatus_Get)(PyObject *) = 0;
#define PyMPIStatus_Get __pyx_api_f_6mpi4py_3MPI_PyMPIStatus_Get
static PyObject *(*__pyx_api_f_6mpi4py_3MPI_PyMPIRequest_New)(MPI_Request) = 0;
#define PyMPIRequest_New __pyx_api_f_6mpi4py_3MPI_PyMPIRequest_New
static MPI_Request *(*__pyx_api_f_6mpi4py_3MPI_PyMPIRequest_Get)(PyObject *) = 0;
#define PyMPIRequest_Get __pyx_api_f_6mpi4py_3MPI_PyMPIRequest_Get
static PyObject *(*__pyx_api_f_6mpi4py_3MPI_PyMPIMessage_New)(MPI_Message) = 0;
#define PyMPIMessage_New __pyx_api_f_6mpi4py_3MPI_PyMPIMessage_New
static MPI_Message *(*__pyx_api_f_6mpi4py_3MPI_PyMPIMessage_Get)(PyObject *) = 0;
#define PyMPIMessage_Get __pyx_api_f_6mpi4py_3MPI_PyMPIMessage_Get
static PyObject *(*__pyx_api_f_6mpi4py_3MPI_PyMPIOp_New)(MPI_Op) = 0;
#define PyMPIOp_New __pyx_api_f_6mpi4py_3MPI_PyMPIOp_New
static MPI_Op *(*__pyx_api_f_6mpi4py_3MPI_PyMPIOp_Get)(PyObject *) = 0;
#define PyMPIOp_Get __pyx_api_f_6mpi4py_3MPI_PyMPIOp_Get
static PyObject *(*__pyx_api_f_6mpi4py_3MPI_PyMPIInfo_New)(MPI_Info) = 0;
#define PyMPIInfo_New __pyx_api_f_6mpi4py_3MPI_PyMPIInfo_New
static MPI_Info *(*__pyx_api_f_6mpi4py_3MPI_PyMPIInfo_Get)(PyObject *) = 0;
#define PyMPIInfo_Get __pyx_api_f_6mpi4py_3MPI_PyMPIInfo_Get
static PyObject *(*__pyx_api_f_6mpi4py_3MPI_PyMPIGroup_New)(MPI_Group) = 0;
#define PyMPIGroup_New __pyx_api_f_6mpi4py_3MPI_PyMPIGroup_New
static MPI_Group *(*__pyx_api_f_6mpi4py_3MPI_PyMPIGroup_Get)(PyObject *) = 0;
#define PyMPIGroup_Get __pyx_api_f_6mpi4py_3MPI_PyMPIGroup_Get
static PyObject *(*__pyx_api_f_6mpi4py_3MPI_PyMPIComm_New)(MPI_Comm) = 0;
#define PyMPIComm_New __pyx_api_f_6mpi4py_3MPI_PyMPIComm_New
static MPI_Comm *(*__pyx_api_f_6mpi4py_3MPI_PyMPIComm_Get)(PyObject *) = 0;
#define PyMPIComm_Get __pyx_api_f_6mpi4py_3MPI_PyMPIComm_Get
static PyObject *(*__pyx_api_f_6mpi4py_3MPI_PyMPIWin_New)(MPI_Win) = 0;
#define PyMPIWin_New __pyx_api_f_6mpi4py_3MPI_PyMPIWin_New
static MPI_Win *(*__pyx_api_f_6mpi4py_3MPI_PyMPIWin_Get)(PyObject *) = 0;
#define PyMPIWin_Get __pyx_api_f_6mpi4py_3MPI_PyMPIWin_Get
static PyObject *(*__pyx_api_f_6mpi4py_3MPI_PyMPIFile_New)(MPI_File) = 0;
#define PyMPIFile_New __pyx_api_f_6mpi4py_3MPI_PyMPIFile_New
static MPI_File *(*__pyx_api_f_6mpi4py_3MPI_PyMPIFile_Get)(PyObject *) = 0;
#define PyMPIFile_Get __pyx_api_f_6mpi4py_3MPI_PyMPIFile_Get
static PyObject *(*__pyx_api_f_6mpi4py_3MPI_PyMPIErrhandler_New)(MPI_Errhandler) = 0;
#define PyMPIErrhandler_New __pyx_api_f_6mpi4py_3MPI_PyMPIErrhandler_New
static MPI_Errhandler *(*__pyx_api_f_6mpi4py_3MPI_PyMPIErrhandler_Get)(PyObject *) = 0;
#define PyMPIErrhandler_Get __pyx_api_f_6mpi4py_3MPI_PyMPIErrhandler_Get
#if !defined(__Pyx_PyIdentifier_FromString)
#if PY_MAJOR_VERSION < 3
  #define __Pyx_PyIdentifier_FromString(s) PyString_FromString(s)
#else
  #define __Pyx_PyIdentifier_FromString(s) PyUnicode_FromString(s)
#endif
#endif

#ifndef __PYX_HAVE_RT_ImportFunction
#define __PYX_HAVE_RT_ImportFunction
static int __Pyx_ImportFunction(PyObject *module, const char *funcname, void (**f)(void), const char *sig) {
    PyObject *d = 0;
    PyObject *cobj = 0;
    union {
        void (*fp)(void);
        void *p;
    } tmp;
    d = PyObject_GetAttrString(module, (char *)"__pyx_capi__");
    if (!d)
        goto bad;
    cobj = PyDict_GetItemString(d, funcname);
    if (!cobj) {
        PyErr_Format(PyExc_ImportError,
            "%.200s does not export expected C function %.200s",
                PyModule_GetName(module), funcname);
        goto bad;
    }
#if PY_VERSION_HEX >= 0x02070000
    if (!PyCapsule_IsValid(cobj, sig)) {
        PyErr_Format(PyExc_TypeError,
            "C function %.200s.%.200s has wrong signature (expected %.500s, got %.500s)",
             PyModule_GetName(module), funcname, sig, PyCapsule_GetName(cobj));
        goto bad;
    }
    tmp.p = PyCapsule_GetPointer(cobj, sig);
#else
    {const char *desc, *s1, *s2;
    desc = (const char *)PyCObject_GetDesc(cobj);
    if (!desc)
        goto bad;
    s1 = desc; s2 = sig;
    while (*s1 != '\0' && *s1 == *s2) { s1++; s2++; }
    if (*s1 != *s2) {
        PyErr_Format(PyExc_TypeError,
            "C function %.200s.%.200s has wrong signature (expected %.500s, got %.500s)",
             PyModule_GetName(module), funcname, sig, desc);
        goto bad;
    }
    tmp.p = PyCObject_AsVoidPtr(cobj);}
#endif
    *f = tmp.fp;
    if (!(*f))
        goto bad;
    Py_DECREF(d);
    return 0;
bad:
    Py_XDECREF(d);
    return -1;
}
#endif

#ifndef __PYX_HAVE_RT_ImportType_proto
#define __PYX_HAVE_RT_ImportType_proto
enum __Pyx_ImportType_CheckSize {
   __Pyx_ImportType_CheckSize_Error = 0,
   __Pyx_ImportType_CheckSize_Warn = 1,
   __Pyx_ImportType_CheckSize_Ignore = 2
};
static PyTypeObject *__Pyx_ImportType(PyObject* module, const char *module_name, const char *class_name, size_t size, enum __Pyx_ImportType_CheckSize check_size);
#endif

#ifndef __PYX_HAVE_RT_ImportType
#define __PYX_HAVE_RT_ImportType
static PyTypeObject *__Pyx_ImportType(PyObject *module, const char *module_name, const char *class_name,
    size_t size, enum __Pyx_ImportType_CheckSize check_size)
{
    PyObject *result = 0;
    char warning[200];
    Py_ssize_t basicsize;
#ifdef Py_LIMITED_API
    PyObject *py_basicsize;
#endif
    result = PyObject_GetAttrString(module, class_name);
    if (!result)
        goto bad;
    if (!PyType_Check(result)) {
        PyErr_Format(PyExc_TypeError,
            "%.200s.%.200s is not a type object",
            module_name, class_name);
        goto bad;
    }
#ifndef Py_LIMITED_API
    basicsize = ((PyTypeObject *)result)->tp_basicsize;
#else
    py_basicsize = PyObject_GetAttrString(result, "__basicsize__");
    if (!py_basicsize)
        goto bad;
    basicsize = PyLong_AsSsize_t(py_basicsize);
    Py_DECREF(py_basicsize);
    py_basicsize = 0;
    if (basicsize == (Py_ssize_t)-1 && PyErr_Occurred())
        goto bad;
#endif
    if ((size_t)basicsize < size) {
        PyErr_Format(PyExc_ValueError,
            "%.200s.%.200s size changed, may indicate binary incompatibility. "
            "Expected %zd from C header, got %zd from PyObject",
            module_name, class_name, size, basicsize);
        goto bad;
    }
    if (check_size == __Pyx_ImportType_CheckSize_Error && (size_t)basicsize != size) {
        PyErr_Format(PyExc_ValueError,
            "%.200s.%.200s size changed, may indicate binary incompatibility. "
            "Expected %zd from C header, got %zd from PyObject",
            module_name, class_name, size, basicsize);
        goto bad;
    }
    else if (check_size == __Pyx_ImportType_CheckSize_Warn && (size_t)basicsize > size) {
        PyOS_snprintf(warning, sizeof(warning),
            "%s.%s size changed, may indicate binary incompatibility. "
            "Expected %zd from C header, got %zd from PyObject",
            module_name, class_name, size, basicsize);
        if (PyErr_WarnEx(NULL, warning, 0) < 0) goto bad;
    }
    return (PyTypeObject *)result;
bad:
    Py_XDECREF(result);
    return NULL;
}
#endif


static int import_mpi4py__MPI(void) {
  PyObject *module = 0;
  module = PyImport_ImportModule("mpi4py.MPI");
  if (!module) goto bad;
  if (__Pyx_ImportFunction(module, "PyMPIDatatype_New", (void (**)(void))&__pyx_api_f_6mpi4py_3MPI_PyMPIDatatype_New, "PyObject *(MPI_Datatype)") < 0) goto bad;
  if (__Pyx_ImportFunction(module, "PyMPIDatatype_Get", (void (**)(void))&__pyx_api_f_6mpi4py_3MPI_PyMPIDatatype_Get, "MPI_Datatype *(PyObject *)") < 0) goto bad;
  if (__Pyx_ImportFunction(module, "PyMPIStatus_New", (void (**)(void))&__pyx_api_f_6mpi4py_3MPI_PyMPIStatus_New, "PyObject *(MPI_Status *)") < 0) goto bad;
  if (__Pyx_ImportFunction(module, "PyMPIStatus_Get", (void (**)(void))&__pyx_api_f_6mpi4py_3MPI_PyMPIStatus_Get, "MPI_Status *(PyObject *)") < 0) goto bad;
  if (__Pyx_ImportFunction(module, "PyMPIRequest_New", (void (**)(void))&__pyx_api_f_6mpi4py_3MPI_PyMPIRequest_New, "PyObject *(MPI_Request)") < 0) goto bad;
  if (__Pyx_ImportFunction(module, "PyMPIRequest_Get", (void (**)(void))&__pyx_api_f_6mpi4py_3MPI_PyMPIRequest_Get, "MPI_Request *(PyObject *)") < 0) goto bad;
  if (__Pyx_ImportFunction(module, "PyMPIMessage_New", (void (**)(void))&__pyx_api_f_6mpi4py_3MPI_PyMPIMessage_New, "PyObject *(MPI_Message)") < 0) goto bad;
  if (__Pyx_ImportFunction(module, "PyMPIMessage_Get", (void (**)(void))&__pyx_api_f_6mpi4py_3MPI_PyMPIMessage_Get, "MPI_Message *(PyObject *)") < 0) goto bad;
  if (__Pyx_ImportFunction(module, "PyMPIOp_New", (void (**)(void))&__pyx_api_f_6mpi4py_3MPI_PyMPIOp_New, "PyObject *(MPI_Op)") < 0) goto bad;
  if (__Pyx_ImportFunction(module, "PyMPIOp_Get", (void (**)(void))&__pyx_api_f_6mpi4py_3MPI_PyMPIOp_Get, "MPI_Op *(PyObject *)") < 0) goto bad;
  if (__Pyx_ImportFunction(module, "PyMPIInfo_New", (void (**)(void))&__pyx_api_f_6mpi4py_3MPI_PyMPIInfo_New, "PyObject *(MPI_Info)") < 0) goto bad;
  if (__Pyx_ImportFunction(module, "PyMPIInfo_Get", (void (**)(void))&__pyx_api_f_6mpi4py_3MPI_PyMPIInfo_Get, "MPI_Info *(PyObject *)") < 0) goto bad;
  if (__Pyx_ImportFunction(module, "PyMPIGroup_New", (void (**)(void))&__pyx_api_f_6mpi4py_3MPI_PyMPIGroup_New, "PyObject *(MPI_Group)") < 0) goto bad;
  if (__Pyx_ImportFunction(module, "PyMPIGroup_Get", (void (**)(void))&__pyx_api_f_6mpi4py_3MPI_PyMPIGroup_Get, "MPI_Group *(PyObject *)") < 0) goto bad;
  if (__Pyx_ImportFunction(module, "PyMPIComm_New", (void (**)(void))&__pyx_api_f_6mpi4py_3MPI_PyMPIComm_New, "PyObject *(MPI_Comm)") < 0) goto bad;
  if (__Pyx_ImportFunction(module, "PyMPIComm_Get", (void (**)(void))&__pyx_api_f_6mpi4py_3MPI_PyMPIComm_Get, "MPI_Comm *(PyObject *)") < 0) goto bad;
  if (__Pyx_ImportFunction(module, "PyMPIWin_New", (void (**)(void))&__pyx_api_f_6mpi4py_3MPI_PyMPIWin_New, "PyObject *(MPI_Win)") < 0) goto bad;
  if (__Pyx_ImportFunction(module, "PyMPIWin_Get", (void (**)(void))&__pyx_api_f_6mpi4py_3MPI_PyMPIWin_Get, "MPI_Win *(PyObject *)") < 0) goto bad;
  if (__Pyx_ImportFunction(module, "PyMPIFile_New", (void (**)(void))&__pyx_api_f_6mpi4py_3MPI_PyMPIFile_New, "PyObject *(MPI_File)") < 0) goto bad;
  if (__Pyx_ImportFunction(module, "PyMPIFile_Get", (void (**)(void))&__pyx_api_f_6mpi4py_3MPI_PyMPIFile_Get, "MPI_File *(PyObject *)") < 0) goto bad;
  if (__Pyx_ImportFunction(module, "PyMPIErrhandler_New", (void (**)(void))&__pyx_api_f_6mpi4py_3MPI_PyMPIErrhandler_New, "PyObject *(MPI_Errhandler)") < 0) goto bad;
  if (__Pyx_ImportFunction(module, "PyMPIErrhandler_Get", (void (**)(void))&__pyx_api_f_6mpi4py_3MPI_PyMPIErrhandler_Get, "MPI_Errhandler *(PyObject *)") < 0) goto bad;
  __pyx_ptype_6mpi4py_3MPI_Status = __Pyx_ImportType(module, "mpi4py.MPI", "Status", sizeof(struct PyMPIStatusObject), __Pyx_ImportType_CheckSize_Warn);
   if (!__pyx_ptype_6mpi4py_3MPI_Status) goto bad;
  __pyx_ptype_6mpi4py_3MPI_Datatype = __Pyx_ImportType(module, "mpi4py.MPI", "Datatype", sizeof(struct PyMPIDatatypeObject), __Pyx_ImportType_CheckSize_Warn);
   if (!__pyx_ptype_6mpi4py_3MPI_Datatype) goto bad;
  __pyx_ptype_6mpi4py_3MPI_Request = __Pyx_ImportType(module, "mpi4py.MPI", "Request", sizeof(struct PyMPIRequestObject), __Pyx_ImportType_CheckSize_Warn);
   if (!__pyx_ptype_6mpi4py_3MPI_Request) goto bad;
  __pyx_ptype_6mpi4py_3MPI_Prequest = __Pyx_ImportType(module, "mpi4py.MPI", "Prequest", sizeof(struct PyMPIPrequestObject), __Pyx_ImportType_CheckSize_Warn);
   if (!__pyx_ptype_6mpi4py_3MPI_Prequest) goto bad;
  __pyx_ptype_6mpi4py_3MPI_Grequest = __Pyx_ImportType(module, "mpi4py.MPI", "Grequest", sizeof(struct PyMPIGrequestObject), __Pyx_ImportType_CheckSize_Warn);
   if (!__pyx_ptype_6mpi4py_3MPI_Grequest) goto bad;
  __pyx_ptype_6mpi4py_3MPI_Message = __Pyx_ImportType(module, "mpi4py.MPI", "Message", sizeof(struct PyMPIMessageObject), __Pyx_ImportType_CheckSize_Warn);
   if (!__pyx_ptype_6mpi4py_3MPI_Message) goto bad;
  __pyx_ptype_6mpi4py_3MPI_Op = __Pyx_ImportType(module, "mpi4py.MPI", "Op", sizeof(struct PyMPIOpObject), __Pyx_ImportType_CheckSize_Warn);
   if (!__pyx_ptype_6mpi4py_3MPI_Op) goto bad;
  __pyx_ptype_6mpi4py_3MPI_Group = __Pyx_ImportType(module, "mpi4py.MPI", "Group", sizeof(struct PyMPIGroupObject), __Pyx_ImportType_CheckSize_Warn);
   if (!__pyx_ptype_6mpi4py_3MPI_Group) goto bad;
  __pyx_ptype_6mpi4py_3MPI_Info = __Pyx_ImportType(module, "mpi4py.MPI", "Info", sizeof(struct PyMPIInfoObject), __Pyx_ImportType_CheckSize_Warn);
   if (!__pyx_ptype_6mpi4py_3MPI_Info) goto bad;
  __pyx_ptype_6mpi4py_3MPI_Errhandler = __Pyx_ImportType(module, "mpi4py.MPI", "Errhandler", sizeof(struct PyMPIErrhandlerObject), __Pyx_ImportType_CheckSize_Warn);
   if (!__pyx_ptype_6mpi4py_3MPI_Errhandler) goto bad;
  __pyx_ptype_6mpi4py_3MPI_Comm = __Pyx_ImportType(module, "mpi4py.MPI", "Comm", sizeof(struct PyMPICommObject), __Pyx_ImportType_CheckSize_Warn);
   if (!__pyx_ptype_6mpi4py_3MPI_Comm) goto bad;
  __pyx_ptype_6mpi4py_3MPI_Intracomm = __Pyx_ImportType(module, "mpi4py.MPI", "Intracomm", sizeof(struct PyMPIIntracommObject), __Pyx_ImportType_CheckSize_Warn);
   if (!__pyx_ptype_6mpi4py_3MPI_Intracomm) goto bad;
  __pyx_ptype_6mpi4py_3MPI_Topocomm = __Pyx_ImportType(module, "mpi4py.MPI", "Topocomm", sizeof(struct PyMPITopocommObject), __Pyx_ImportType_CheckSize_Warn);
   if (!__pyx_ptype_6mpi4py_3MPI_Topocomm) goto bad;
  __pyx_ptype_6mpi4py_3MPI_Cartcomm = __Pyx_ImportType(module, "mpi4py.MPI", "Cartcomm", sizeof(struct PyMPICartcommObject), __Pyx_ImportType_CheckSize_Warn);
   if (!__pyx_ptype_6mpi4py_3MPI_Cartcomm) goto bad;
  __pyx_ptype_6mpi4py_3MPI_Graphcomm = __Pyx_ImportType(module, "mpi4py.MPI", "Graphcomm", sizeof(struct PyMPIGraphcommObject), __Pyx_ImportType_CheckSize_Warn);
   if (!__pyx_ptype_6mpi4py_3MPI_Graphcomm) goto bad;
  __pyx_ptype_6mpi4py_3MPI_Distgraphcomm = __Pyx_ImportType(module, "mpi4py.MPI", "Distgraphcomm", sizeof(struct PyMPIDistgraphcommObject), __Pyx_ImportType_CheckSize_Warn);
   if (!__pyx_ptype_6mpi4py_3MPI_Distgraphcomm) goto bad;
  __pyx_ptype_6mpi4py_3MPI_Intercomm = __Pyx_ImportType(module, "mpi4py.MPI", "Intercomm", sizeof(struct PyMPIIntercommObject), __Pyx_ImportType_CheckSize_Warn);
   if (!__pyx_ptype_6mpi4py_3MPI_Intercomm) goto bad;
  __pyx_ptype_6mpi4py_3MPI_Win = __Pyx_ImportType(module, "mpi4py.MPI", "Win", sizeof(struct PyMPIWinObject), __Pyx_ImportType_CheckSize_Warn);
   if (!__pyx_ptype_6mpi4py_3MPI_Win) goto bad;
  __pyx_ptype_6mpi4py_3MPI_File = __Pyx_ImportType(module, "mpi4py.MPI", "File", sizeof(struct PyMPIFileObject), __Pyx_ImportType_CheckSize_Warn);
   if (!__pyx_ptype_6mpi4py_3MPI_File) goto bad;
  Py_DECREF(module); module = 0;
  return 0;
  bad:
  Py_XDECREF(module);
  return -1;
}

#endif /* !__PYX_HAVE_API__mpi4py__MPI */
