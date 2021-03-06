/*
 * THIS FILE IS AUTOMATICALLY GENERATED BY gen_scrn_dispatch.pl
 * DO NOT EDIT!!
 */

#include "glxglvnd.h"
#include "glxglvnddispatchfuncs.h"
#include "g_glxglvnddispatchindices.h"

const int DI_FUNCTION_COUNT = DI_LAST_INDEX;
int __glXDispatchTableIndices[DI_LAST_INDEX];
void *__glXDispatchFunctions[DI_LAST_INDEX];
__GLXapiExports __glXGLVNDAPIExports;

const char *__glXDispatchTableStrings[DI_LAST_INDEX] = {
"glXBindTexImageEXT",
// glXChooseFBConfig implemented by libglvnd
"glXChooseFBConfigSGIX",
// glXChooseVisual implemented by libglvnd
// glXCopyContext implemented by libglvnd
// glXCreateContext implemented by libglvnd
"glXCreateContextAttribsARB",
"glXCreateContextWithConfigSGIX",
"glXCreateGLXPbufferSGIX",
// glXCreateGLXPixmap implemented by libglvnd
"glXCreateGLXPixmapWithConfigSGIX",
// glXCreateNewContext implemented by libglvnd
// glXCreatePbuffer implemented by libglvnd
// glXCreatePixmap implemented by libglvnd
// glXCreateWindow implemented by libglvnd
// glXDestroyContext implemented by libglvnd
"glXDestroyGLXPbufferSGIX",
// glXDestroyGLXPixmap implemented by libglvnd
// glXDestroyPbuffer implemented by libglvnd
// glXDestroyPixmap implemented by libglvnd
// glXDestroyWindow implemented by libglvnd
"glXFreeContextEXT",
// glXGetClientString implemented by libglvnd
// glXGetConfig implemented by libglvnd
"glXGetContextIDEXT",
// glXGetCurrentContext implemented by libglvnd
// glXGetCurrentDisplay implemented by libglvnd
"glXGetCurrentDisplayEXT",
// glXGetCurrentDrawable implemented by libglvnd
// glXGetCurrentReadDrawable implemented by libglvnd
// glXGetFBConfigAttrib implemented by libglvnd
"glXGetFBConfigAttribSGIX",
"glXGetFBConfigFromVisualSGIX",
// glXGetFBConfigs implemented by libglvnd
// glXGetProcAddress implemented by libglvnd
// glXGetProcAddressARB implemented by libglvnd
// glXGetSelectedEvent implemented by libglvnd
"glXGetSelectedEventSGIX",
#if defined(GLX_SGI_video_sync)
"glXGetVideoSyncSGI",
#endif // defined(GLX_SGI_video_sync)
// glXGetVisualFromFBConfig implemented by libglvnd
"glXGetVisualFromFBConfigSGIX",
"glXImportContextEXT",
// glXIsDirect implemented by libglvnd
// glXMakeContextCurrent implemented by libglvnd
// glXMakeCurrent implemented by libglvnd
// glXQueryContext implemented by libglvnd
"glXQueryContextInfoEXT",
// glXQueryDrawable implemented by libglvnd
// glXQueryExtension implemented by libglvnd
// glXQueryExtensionsString implemented by libglvnd
"glXQueryGLXPbufferSGIX",
// glXQueryServerString implemented by libglvnd
// glXQueryVersion implemented by libglvnd
"glXReleaseTexImageEXT",
// glXSelectEvent implemented by libglvnd
"glXSelectEventSGIX",
// glXSwapBuffers implemented by libglvnd
#if defined(GLX_SGI_swap_control)
"glXSwapIntervalSGI",
#endif // defined(GLX_SGI_swap_control)
// glXUseXFont implemented by libglvnd
// glXWaitGL implemented by libglvnd
#if defined(GLX_SGI_video_sync)
"glXWaitVideoSyncSGI",
#endif // defined(GLX_SGI_video_sync)
// glXWaitX implemented by libglvnd
"glXglXBindSwapBarrierSGIX",
"glXglXCopySubBufferMESA",
"glXglXCreateGLXPixmapMESA",
"glXglXGetMscRateOML",
"glXglXGetScreenDriver",
"glXglXGetSwapIntervalMESA",
"glXglXGetSyncValuesOML",
"glXglXJoinSwapGroupSGIX",
"glXglXQueryCurrentRendererIntegerMESA",
"glXglXQueryCurrentRendererStringMESA",
"glXglXQueryMaxSwapBarriersSGIX",
"glXglXQueryRendererIntegerMESA",
"glXglXQueryRendererStringMESA",
"glXglXReleaseBuffersMESA",
"glXglXSwapBuffersMscOML",
"glXglXSwapIntervalMESA",
"glXglXWaitForMscOML",
"glXglXWaitForSbcOML",
};

static void dispatch_BindTexImageEXT(Display * dpy, GLXDrawable drawable, int buffer, const int * attrib_list)
{

    typedef void (*fn_BindTexImageEXT_ptr)(Display * dpy, GLXDrawable drawable, int buffer, const int * attrib_list);
    fn_BindTexImageEXT_ptr pBindTexImageEXT;
    __GLXvendorInfo *dd = NULL;


    GetDispatchFromDrawable(dpy, drawable, NULL, &dd);
    pBindTexImageEXT = (fn_BindTexImageEXT_ptr)(dd ?
        __VND.fetchDispatchEntry(dd,
             __glXDispatchTableIndices[DI_BindTexImageEXT]) :
        NULL);
    if (pBindTexImageEXT) {
        (*pBindTexImageEXT)(dpy, drawable, buffer, attrib_list);
    }

}



static GLXFBConfigSGIX * dispatch_ChooseFBConfigSGIX(Display * dpy, int screen, const int * attrib_list, int * nelements)
{

    typedef GLXFBConfigSGIX * (*fn_ChooseFBConfigSGIX_ptr)(Display * dpy, int screen, const int * attrib_list, int * nelements);
    fn_ChooseFBConfigSGIX_ptr pChooseFBConfigSGIX;
    __GLXvendorInfo *dd = NULL;
    int disp_screen;
    GLXFBConfigSGIX * ret = NULL;


    dd = __VND.getDynDispatch(dpy, screen);
    disp_screen = screen;
    pChooseFBConfigSGIX = (fn_ChooseFBConfigSGIX_ptr)(dd ?
        __VND.fetchDispatchEntry(dd,
             __glXDispatchTableIndices[DI_ChooseFBConfigSGIX]) :
        NULL);
    if (pChooseFBConfigSGIX) {
        ret = (*pChooseFBConfigSGIX)(dpy, screen, attrib_list, nelements);
    }

    AddScreenFBConfigsMapping(dpy, ret, nelements, disp_screen, dd);

    return ret;

}



static GLXContext dispatch_CreateContextAttribsARB(Display * dpy, GLXFBConfig config, GLXContext share_list, Bool direct, const int * attrib_list)
{

    typedef GLXContext (*fn_CreateContextAttribsARB_ptr)(Display * dpy, GLXFBConfig config, GLXContext share_list, Bool direct, const int * attrib_list);
    fn_CreateContextAttribsARB_ptr pCreateContextAttribsARB;
    __GLXvendorInfo *dd = NULL;
    int disp_screen;
    GLXContext ret = None;


    GetDispatchFromFBConfig(dpy, config, &disp_screen, &dd);
    pCreateContextAttribsARB = (fn_CreateContextAttribsARB_ptr)(dd ?
        __VND.fetchDispatchEntry(dd,
             __glXDispatchTableIndices[DI_CreateContextAttribsARB]) :
        NULL);
    if (pCreateContextAttribsARB) {
        ret = (*pCreateContextAttribsARB)(dpy, config, share_list, direct, attrib_list);
    }

    AddContextMapping(dpy, ret, disp_screen, dd);

    return ret;

}



static GLXContext dispatch_CreateContextWithConfigSGIX(Display * dpy, GLXFBConfigSGIX config, int render_type, GLXContext share_list, Bool direct)
{

    typedef GLXContext (*fn_CreateContextWithConfigSGIX_ptr)(Display * dpy, GLXFBConfigSGIX config, int render_type, GLXContext share_list, Bool direct);
    fn_CreateContextWithConfigSGIX_ptr pCreateContextWithConfigSGIX;
    __GLXvendorInfo *dd = NULL;
    int disp_screen;
    GLXContext ret = None;


    GetDispatchFromFBConfig(dpy, config, &disp_screen, &dd);
    pCreateContextWithConfigSGIX = (fn_CreateContextWithConfigSGIX_ptr)(dd ?
        __VND.fetchDispatchEntry(dd,
             __glXDispatchTableIndices[DI_CreateContextWithConfigSGIX]) :
        NULL);
    if (pCreateContextWithConfigSGIX) {
        ret = (*pCreateContextWithConfigSGIX)(dpy, config, render_type, share_list, direct);
    }

    AddContextMapping(dpy, ret, disp_screen, dd);

    return ret;

}



static GLXPbuffer dispatch_CreateGLXPbufferSGIX(Display * dpy, GLXFBConfig config, unsigned int width, unsigned int height, const int * attrib_list)
{

    typedef GLXPbuffer (*fn_CreateGLXPbufferSGIX_ptr)(Display * dpy, GLXFBConfig config, unsigned int width, unsigned int height, const int * attrib_list);
    fn_CreateGLXPbufferSGIX_ptr pCreateGLXPbufferSGIX;
    __GLXvendorInfo *dd = NULL;
    int disp_screen;
    GLXPbuffer ret = None;


    GetDispatchFromFBConfig(dpy, config, &disp_screen, &dd);
    pCreateGLXPbufferSGIX = (fn_CreateGLXPbufferSGIX_ptr)(dd ?
        __VND.fetchDispatchEntry(dd,
             __glXDispatchTableIndices[DI_CreateGLXPbufferSGIX]) :
        NULL);
    if (pCreateGLXPbufferSGIX) {
        ret = (*pCreateGLXPbufferSGIX)(dpy, config, width, height, attrib_list);
    }

    AddDrawableMapping(dpy, ret, disp_screen, dd);

    return ret;

}



static GLXPixmap dispatch_CreateGLXPixmapWithConfigSGIX(Display * dpy, GLXFBConfigSGIX config, Pixmap pixmap)
{

    typedef GLXPixmap (*fn_CreateGLXPixmapWithConfigSGIX_ptr)(Display * dpy, GLXFBConfigSGIX config, Pixmap pixmap);
    fn_CreateGLXPixmapWithConfigSGIX_ptr pCreateGLXPixmapWithConfigSGIX;
    __GLXvendorInfo *dd = NULL;
    int disp_screen;
    GLXPixmap ret = None;


    GetDispatchFromFBConfig(dpy, config, &disp_screen, &dd);
    pCreateGLXPixmapWithConfigSGIX = (fn_CreateGLXPixmapWithConfigSGIX_ptr)(dd ?
        __VND.fetchDispatchEntry(dd,
             __glXDispatchTableIndices[DI_CreateGLXPixmapWithConfigSGIX]) :
        NULL);
    if (pCreateGLXPixmapWithConfigSGIX) {
        ret = (*pCreateGLXPixmapWithConfigSGIX)(dpy, config, pixmap);
    }

    AddDrawableMapping(dpy, ret, disp_screen, dd);

    return ret;

}



static void dispatch_DestroyGLXPbufferSGIX(Display * dpy, GLXPbuffer pbuf)
{

    typedef void (*fn_DestroyGLXPbufferSGIX_ptr)(Display * dpy, GLXPbuffer pbuf);
    fn_DestroyGLXPbufferSGIX_ptr pDestroyGLXPbufferSGIX;
    __GLXvendorInfo *dd = NULL;


    GetDispatchFromDrawable(dpy, pbuf, NULL, &dd);
    pDestroyGLXPbufferSGIX = (fn_DestroyGLXPbufferSGIX_ptr)(dd ?
        __VND.fetchDispatchEntry(dd,
             __glXDispatchTableIndices[DI_DestroyGLXPbufferSGIX]) :
        NULL);
    if (pDestroyGLXPbufferSGIX) {
        (*pDestroyGLXPbufferSGIX)(dpy, pbuf);
    }

}



static void dispatch_FreeContextEXT(Display * dpy, GLXContext ctx)
{

    typedef void (*fn_FreeContextEXT_ptr)(Display * dpy, GLXContext ctx);
    fn_FreeContextEXT_ptr pFreeContextEXT;
    __GLXvendorInfo *dd = NULL;


    GetDispatchFromContext(dpy, ctx, NULL, &dd);
    pFreeContextEXT = (fn_FreeContextEXT_ptr)(dd ?
        __VND.fetchDispatchEntry(dd,
             __glXDispatchTableIndices[DI_FreeContextEXT]) :
        NULL);
    if (pFreeContextEXT) {
        (*pFreeContextEXT)(dpy, ctx);
    }

}



static GLXContextID dispatch_GetContextIDEXT(const GLXContext ctx)
{

    typedef GLXContextID (*fn_GetContextIDEXT_ptr)(const GLXContext ctx);
    fn_GetContextIDEXT_ptr pGetContextIDEXT;
    __GLXvendorInfo *dd = NULL;
    Display *dpy = GET_DEFAULT_DISPLAY();
    GLXContextID ret = None;


    GetDispatchFromContext(dpy, ctx, NULL, &dd);
    pGetContextIDEXT = (fn_GetContextIDEXT_ptr)(dd ?
        __VND.fetchDispatchEntry(dd,
             __glXDispatchTableIndices[DI_GetContextIDEXT]) :
        NULL);
    if (pGetContextIDEXT) {
        ret = (*pGetContextIDEXT)(ctx);
    }

    return ret;

}



static Display * dispatch_GetCurrentDisplayEXT(void)
{

    typedef Display * (*fn_GetCurrentDisplayEXT_ptr)(void);
    fn_GetCurrentDisplayEXT_ptr pGetCurrentDisplayEXT;
    __GLXvendorInfo *dd = NULL;
    Display * ret = NULL;


    if (!__VND.getCurrentContext()) {
        return ret;
    }

    dd = __VND.getCurrentDynDispatch();
    pGetCurrentDisplayEXT = (fn_GetCurrentDisplayEXT_ptr)(dd ?
        __VND.fetchDispatchEntry(dd,
             __glXDispatchTableIndices[DI_GetCurrentDisplayEXT]) :
        NULL);
    if (pGetCurrentDisplayEXT) {
        ret = (*pGetCurrentDisplayEXT)();
    }

    return ret;

}



static int dispatch_GetFBConfigAttribSGIX(Display * dpy, GLXFBConfigSGIX config, int attribute, int * value_return)
{

    typedef int (*fn_GetFBConfigAttribSGIX_ptr)(Display * dpy, GLXFBConfigSGIX config, int attribute, int * value_return);
    fn_GetFBConfigAttribSGIX_ptr pGetFBConfigAttribSGIX;
    __GLXvendorInfo *dd = NULL;
    int ret = GLX_NO_EXTENSION;


    GetDispatchFromFBConfig(dpy, config, NULL, &dd);
    pGetFBConfigAttribSGIX = (fn_GetFBConfigAttribSGIX_ptr)(dd ?
        __VND.fetchDispatchEntry(dd,
             __glXDispatchTableIndices[DI_GetFBConfigAttribSGIX]) :
        NULL);
    if (pGetFBConfigAttribSGIX) {
        ret = (*pGetFBConfigAttribSGIX)(dpy, config, attribute, value_return);
    }

    return ret;

}



static GLXFBConfigSGIX dispatch_GetFBConfigFromVisualSGIX(Display * dpy, XVisualInfo * vis)
{

    typedef GLXFBConfigSGIX (*fn_GetFBConfigFromVisualSGIX_ptr)(Display * dpy, XVisualInfo * vis);
    fn_GetFBConfigFromVisualSGIX_ptr pGetFBConfigFromVisualSGIX;
    __GLXvendorInfo *dd = NULL;
    int disp_screen;
    GLXFBConfigSGIX ret = NULL;


    GetDispatchFromVisual(dpy, vis, &dd);
    disp_screen = vis->screen;
    pGetFBConfigFromVisualSGIX = (fn_GetFBConfigFromVisualSGIX_ptr)(dd ?
        __VND.fetchDispatchEntry(dd,
             __glXDispatchTableIndices[DI_GetFBConfigFromVisualSGIX]) :
        NULL);
    if (pGetFBConfigFromVisualSGIX) {
        ret = (*pGetFBConfigFromVisualSGIX)(dpy, vis);
    }

    AddFBConfigMapping(dpy, ret, disp_screen, dd);

    return ret;

}



static void dispatch_GetSelectedEventSGIX(Display * dpy, GLXDrawable drawable, unsigned long * mask)
{

    typedef void (*fn_GetSelectedEventSGIX_ptr)(Display * dpy, GLXDrawable drawable, unsigned long * mask);
    fn_GetSelectedEventSGIX_ptr pGetSelectedEventSGIX;
    __GLXvendorInfo *dd = NULL;


    GetDispatchFromDrawable(dpy, drawable, NULL, &dd);
    pGetSelectedEventSGIX = (fn_GetSelectedEventSGIX_ptr)(dd ?
        __VND.fetchDispatchEntry(dd,
             __glXDispatchTableIndices[DI_GetSelectedEventSGIX]) :
        NULL);
    if (pGetSelectedEventSGIX) {
        (*pGetSelectedEventSGIX)(dpy, drawable, mask);
    }

}



#if defined(GLX_SGI_video_sync)
static int dispatch_GetVideoSyncSGI(unsigned int * count)
{

    typedef int (*fn_GetVideoSyncSGI_ptr)(unsigned int * count);
    fn_GetVideoSyncSGI_ptr pGetVideoSyncSGI;
    __GLXvendorInfo *dd = NULL;
    int ret = GLX_NO_EXTENSION;


    if (!__VND.getCurrentContext()) {
        return GLX_BAD_CONTEXT;
    }

    dd = __VND.getCurrentDynDispatch();
    pGetVideoSyncSGI = (fn_GetVideoSyncSGI_ptr)(dd ?
        __VND.fetchDispatchEntry(dd,
             __glXDispatchTableIndices[DI_GetVideoSyncSGI]) :
        NULL);
    if (pGetVideoSyncSGI) {
        ret = (*pGetVideoSyncSGI)(count);
    }

    return ret;

}
#endif // defined(GLX_SGI_video_sync)



static XVisualInfo * dispatch_GetVisualFromFBConfigSGIX(Display * dpy, GLXFBConfigSGIX config)
{

    typedef XVisualInfo * (*fn_GetVisualFromFBConfigSGIX_ptr)(Display * dpy, GLXFBConfigSGIX config);
    fn_GetVisualFromFBConfigSGIX_ptr pGetVisualFromFBConfigSGIX;
    __GLXvendorInfo *dd = NULL;
    XVisualInfo * ret = NULL;


    GetDispatchFromFBConfig(dpy, config, NULL, &dd);
    pGetVisualFromFBConfigSGIX = (fn_GetVisualFromFBConfigSGIX_ptr)(dd ?
        __VND.fetchDispatchEntry(dd,
             __glXDispatchTableIndices[DI_GetVisualFromFBConfigSGIX]) :
        NULL);
    if (pGetVisualFromFBConfigSGIX) {
        ret = (*pGetVisualFromFBConfigSGIX)(dpy, config);
    }

    AddVisualMapping(dpy, ret, dd);

    return ret;

}



static GLXContext dispatch_ImportContextEXT(Display * dpy, GLXContextID contextID)
{

    typedef GLXContext (*fn_ImportContextEXT_ptr)(Display * dpy, GLXContextID contextID);
    fn_ImportContextEXT_ptr pImportContextEXT;
    __GLXvendorInfo *dd = NULL;
    GLXContext ret = None;


    dd = __VND.getDynDispatch(dpy, GET_DEFAULT_SCREEN());
    pImportContextEXT = (fn_ImportContextEXT_ptr)(dd ?
        __VND.fetchDispatchEntry(dd,
             __glXDispatchTableIndices[DI_ImportContextEXT]) :
        NULL);
    if (pImportContextEXT) {
        ret = (*pImportContextEXT)(dpy, contextID);
    }

    return ret;

}



static int dispatch_QueryContextInfoEXT(Display * dpy, GLXContext ctx, int attribute, int * value)
{

    typedef int (*fn_QueryContextInfoEXT_ptr)(Display * dpy, GLXContext ctx, int attribute, int * value);
    fn_QueryContextInfoEXT_ptr pQueryContextInfoEXT;
    __GLXvendorInfo *dd = NULL;
    int ret = GLX_NO_EXTENSION;


    GetDispatchFromContext(dpy, ctx, NULL, &dd);
    pQueryContextInfoEXT = (fn_QueryContextInfoEXT_ptr)(dd ?
        __VND.fetchDispatchEntry(dd,
             __glXDispatchTableIndices[DI_QueryContextInfoEXT]) :
        NULL);
    if (pQueryContextInfoEXT) {
        ret = (*pQueryContextInfoEXT)(dpy, ctx, attribute, value);
    }

    return ret;

}



static void dispatch_QueryGLXPbufferSGIX(Display * dpy, GLXPbuffer pbuf, int attribute, unsigned int * value)
{

    typedef void (*fn_QueryGLXPbufferSGIX_ptr)(Display * dpy, GLXPbuffer pbuf, int attribute, unsigned int * value);
    fn_QueryGLXPbufferSGIX_ptr pQueryGLXPbufferSGIX;
    __GLXvendorInfo *dd = NULL;


    GetDispatchFromDrawable(dpy, pbuf, NULL, &dd);
    pQueryGLXPbufferSGIX = (fn_QueryGLXPbufferSGIX_ptr)(dd ?
        __VND.fetchDispatchEntry(dd,
             __glXDispatchTableIndices[DI_QueryGLXPbufferSGIX]) :
        NULL);
    if (pQueryGLXPbufferSGIX) {
        (*pQueryGLXPbufferSGIX)(dpy, pbuf, attribute, value);
    }

}



static void dispatch_ReleaseTexImageEXT(Display * dpy, GLXDrawable drawable, int buffer)
{

    typedef void (*fn_ReleaseTexImageEXT_ptr)(Display * dpy, GLXDrawable drawable, int buffer);
    fn_ReleaseTexImageEXT_ptr pReleaseTexImageEXT;
    __GLXvendorInfo *dd = NULL;


    GetDispatchFromDrawable(dpy, drawable, NULL, &dd);
    pReleaseTexImageEXT = (fn_ReleaseTexImageEXT_ptr)(dd ?
        __VND.fetchDispatchEntry(dd,
             __glXDispatchTableIndices[DI_ReleaseTexImageEXT]) :
        NULL);
    if (pReleaseTexImageEXT) {
        (*pReleaseTexImageEXT)(dpy, drawable, buffer);
    }

}



static void dispatch_SelectEventSGIX(Display * dpy, GLXDrawable drawable, unsigned long mask)
{

    typedef void (*fn_SelectEventSGIX_ptr)(Display * dpy, GLXDrawable drawable, unsigned long mask);
    fn_SelectEventSGIX_ptr pSelectEventSGIX;
    __GLXvendorInfo *dd = NULL;


    GetDispatchFromDrawable(dpy, drawable, NULL, &dd);
    pSelectEventSGIX = (fn_SelectEventSGIX_ptr)(dd ?
        __VND.fetchDispatchEntry(dd,
             __glXDispatchTableIndices[DI_SelectEventSGIX]) :
        NULL);
    if (pSelectEventSGIX) {
        (*pSelectEventSGIX)(dpy, drawable, mask);
    }

}



#if defined(GLX_SGI_swap_control)
static int dispatch_SwapIntervalSGI(int interval)
{

    typedef int (*fn_SwapIntervalSGI_ptr)(int interval);
    fn_SwapIntervalSGI_ptr pSwapIntervalSGI;
    __GLXvendorInfo *dd = NULL;
    int ret = GLX_NO_EXTENSION;


    if (!__VND.getCurrentContext()) {
        return GLX_BAD_CONTEXT;
    }

    dd = __VND.getCurrentDynDispatch();
    pSwapIntervalSGI = (fn_SwapIntervalSGI_ptr)(dd ?
        __VND.fetchDispatchEntry(dd,
             __glXDispatchTableIndices[DI_SwapIntervalSGI]) :
        NULL);
    if (pSwapIntervalSGI) {
        ret = (*pSwapIntervalSGI)(interval);
    }

    return ret;

}
#endif // defined(GLX_SGI_swap_control)



#if defined(GLX_SGI_video_sync)
static int dispatch_WaitVideoSyncSGI(int divisor, int remainder, unsigned int * count)
{

    typedef int (*fn_WaitVideoSyncSGI_ptr)(int divisor, int remainder, unsigned int * count);
    fn_WaitVideoSyncSGI_ptr pWaitVideoSyncSGI;
    __GLXvendorInfo *dd = NULL;
    int ret = GLX_NO_EXTENSION;


    if (!__VND.getCurrentContext()) {
        return GLX_BAD_CONTEXT;
    }

    dd = __VND.getCurrentDynDispatch();
    pWaitVideoSyncSGI = (fn_WaitVideoSyncSGI_ptr)(dd ?
        __VND.fetchDispatchEntry(dd,
             __glXDispatchTableIndices[DI_WaitVideoSyncSGI]) :
        NULL);
    if (pWaitVideoSyncSGI) {
        ret = (*pWaitVideoSyncSGI)(divisor, remainder, count);
    }

    return ret;

}
#endif // defined(GLX_SGI_video_sync)



static void dispatch_glXBindSwapBarrierSGIX(Display * dpy, GLXDrawable drawable, int barrier)
{

    typedef void (*fn_glXBindSwapBarrierSGIX_ptr)(Display * dpy, GLXDrawable drawable, int barrier);
    fn_glXBindSwapBarrierSGIX_ptr pglXBindSwapBarrierSGIX;
    __GLXvendorInfo *dd = NULL;


    GetDispatchFromDrawable(dpy, drawable, NULL, &dd);
    pglXBindSwapBarrierSGIX = (fn_glXBindSwapBarrierSGIX_ptr)(dd ?
        __VND.fetchDispatchEntry(dd,
             __glXDispatchTableIndices[DI_glXBindSwapBarrierSGIX]) :
        NULL);
    if (pglXBindSwapBarrierSGIX) {
        (*pglXBindSwapBarrierSGIX)(dpy, drawable, barrier);
    }

}



static void dispatch_glXCopySubBufferMESA(Display * dpy, GLXDrawable drawable, int x, int y, int width, int height)
{

    typedef void (*fn_glXCopySubBufferMESA_ptr)(Display * dpy, GLXDrawable drawable, int x, int y, int width, int height);
    fn_glXCopySubBufferMESA_ptr pglXCopySubBufferMESA;
    __GLXvendorInfo *dd = NULL;


    GetDispatchFromDrawable(dpy, drawable, NULL, &dd);
    pglXCopySubBufferMESA = (fn_glXCopySubBufferMESA_ptr)(dd ?
        __VND.fetchDispatchEntry(dd,
             __glXDispatchTableIndices[DI_glXCopySubBufferMESA]) :
        NULL);
    if (pglXCopySubBufferMESA) {
        (*pglXCopySubBufferMESA)(dpy, drawable, x, y, width, height);
    }

}



static GLXPixmap dispatch_glXCreateGLXPixmapMESA(Display * dpy, XVisualInfo * visinfo, Pixmap pixmap, Colormap cmap)
{

    typedef GLXPixmap (*fn_glXCreateGLXPixmapMESA_ptr)(Display * dpy, XVisualInfo * visinfo, Pixmap pixmap, Colormap cmap);
    fn_glXCreateGLXPixmapMESA_ptr pglXCreateGLXPixmapMESA;
    __GLXvendorInfo *dd = NULL;
    int disp_screen;
    GLXPixmap ret = None;


    GetDispatchFromVisual(dpy, visinfo, &dd);
    disp_screen = visinfo->screen;
    pglXCreateGLXPixmapMESA = (fn_glXCreateGLXPixmapMESA_ptr)(dd ?
        __VND.fetchDispatchEntry(dd,
             __glXDispatchTableIndices[DI_glXCreateGLXPixmapMESA]) :
        NULL);
    if (pglXCreateGLXPixmapMESA) {
        ret = (*pglXCreateGLXPixmapMESA)(dpy, visinfo, pixmap, cmap);
    }

    AddDrawableMapping(dpy, ret, disp_screen, dd);

    return ret;

}



static GLboolean dispatch_glXGetMscRateOML(Display * dpy, GLXDrawable drawable, int32_t * numerator, int32_t * denominator)
{

    typedef GLboolean (*fn_glXGetMscRateOML_ptr)(Display * dpy, GLXDrawable drawable, int32_t * numerator, int32_t * denominator);
    fn_glXGetMscRateOML_ptr pglXGetMscRateOML;
    __GLXvendorInfo *dd = NULL;
    GLboolean ret = GL_FALSE;


    GetDispatchFromDrawable(dpy, drawable, NULL, &dd);
    pglXGetMscRateOML = (fn_glXGetMscRateOML_ptr)(dd ?
        __VND.fetchDispatchEntry(dd,
             __glXDispatchTableIndices[DI_glXGetMscRateOML]) :
        NULL);
    if (pglXGetMscRateOML) {
        ret = (*pglXGetMscRateOML)(dpy, drawable, numerator, denominator);
    }

    return ret;

}



static const char * dispatch_glXGetScreenDriver(Display * dpy, int scrNum)
{

    typedef const char * (*fn_glXGetScreenDriver_ptr)(Display * dpy, int scrNum);
    fn_glXGetScreenDriver_ptr pglXGetScreenDriver;
    __GLXvendorInfo *dd = NULL;
    const char * ret = NULL;


    dd = __VND.getDynDispatch(dpy, scrNum);
    pglXGetScreenDriver = (fn_glXGetScreenDriver_ptr)(dd ?
        __VND.fetchDispatchEntry(dd,
             __glXDispatchTableIndices[DI_glXGetScreenDriver]) :
        NULL);
    if (pglXGetScreenDriver) {
        ret = (*pglXGetScreenDriver)(dpy, scrNum);
    }

    return ret;

}



static int dispatch_glXGetSwapIntervalMESA(void)
{

    typedef int (*fn_glXGetSwapIntervalMESA_ptr)(void);
    fn_glXGetSwapIntervalMESA_ptr pglXGetSwapIntervalMESA;
    __GLXvendorInfo *dd = NULL;
    int ret = 0;


    if (!__VND.getCurrentContext()) {
        return GLX_BAD_CONTEXT;
    }

    dd = __VND.getCurrentDynDispatch();
    pglXGetSwapIntervalMESA = (fn_glXGetSwapIntervalMESA_ptr)(dd ?
        __VND.fetchDispatchEntry(dd,
             __glXDispatchTableIndices[DI_glXGetSwapIntervalMESA]) :
        NULL);
    if (pglXGetSwapIntervalMESA) {
        ret = (*pglXGetSwapIntervalMESA)();
    }

    return ret;

}



static Bool dispatch_glXGetSyncValuesOML(Display * dpy, GLXDrawable drawable, int64_t * ust, int64_t * msc, int64_t * sbc)
{

    typedef Bool (*fn_glXGetSyncValuesOML_ptr)(Display * dpy, GLXDrawable drawable, int64_t * ust, int64_t * msc, int64_t * sbc);
    fn_glXGetSyncValuesOML_ptr pglXGetSyncValuesOML;
    __GLXvendorInfo *dd = NULL;
    Bool ret = False;


    GetDispatchFromDrawable(dpy, drawable, NULL, &dd);
    pglXGetSyncValuesOML = (fn_glXGetSyncValuesOML_ptr)(dd ?
        __VND.fetchDispatchEntry(dd,
             __glXDispatchTableIndices[DI_glXGetSyncValuesOML]) :
        NULL);
    if (pglXGetSyncValuesOML) {
        ret = (*pglXGetSyncValuesOML)(dpy, drawable, ust, msc, sbc);
    }

    return ret;

}



static void dispatch_glXJoinSwapGroupSGIX(Display * dpy, GLXDrawable drawable, GLXDrawable member)
{

    typedef void (*fn_glXJoinSwapGroupSGIX_ptr)(Display * dpy, GLXDrawable drawable, GLXDrawable member);
    fn_glXJoinSwapGroupSGIX_ptr pglXJoinSwapGroupSGIX;
    __GLXvendorInfo *dd = NULL;


    GetDispatchFromDrawable(dpy, drawable, NULL, &dd);
    pglXJoinSwapGroupSGIX = (fn_glXJoinSwapGroupSGIX_ptr)(dd ?
        __VND.fetchDispatchEntry(dd,
             __glXDispatchTableIndices[DI_glXJoinSwapGroupSGIX]) :
        NULL);
    if (pglXJoinSwapGroupSGIX) {
        (*pglXJoinSwapGroupSGIX)(dpy, drawable, member);
    }

}



static Bool dispatch_glXQueryCurrentRendererIntegerMESA(int attribute, unsigned int * value)
{

    typedef Bool (*fn_glXQueryCurrentRendererIntegerMESA_ptr)(int attribute, unsigned int * value);
    fn_glXQueryCurrentRendererIntegerMESA_ptr pglXQueryCurrentRendererIntegerMESA;
    __GLXvendorInfo *dd = NULL;
    Bool ret = False;


    if (!__VND.getCurrentContext()) {
        return ret;
    }

    dd = __VND.getCurrentDynDispatch();
    pglXQueryCurrentRendererIntegerMESA = (fn_glXQueryCurrentRendererIntegerMESA_ptr)(dd ?
        __VND.fetchDispatchEntry(dd,
             __glXDispatchTableIndices[DI_glXQueryCurrentRendererIntegerMESA]) :
        NULL);
    if (pglXQueryCurrentRendererIntegerMESA) {
        ret = (*pglXQueryCurrentRendererIntegerMESA)(attribute, value);
    }

    return ret;

}



static const char * dispatch_glXQueryCurrentRendererStringMESA(int attribute)
{

    typedef const char * (*fn_glXQueryCurrentRendererStringMESA_ptr)(int attribute);
    fn_glXQueryCurrentRendererStringMESA_ptr pglXQueryCurrentRendererStringMESA;
    __GLXvendorInfo *dd = NULL;
    const char * ret = NULL;


    if (!__VND.getCurrentContext()) {
        return ret;
    }

    dd = __VND.getCurrentDynDispatch();
    pglXQueryCurrentRendererStringMESA = (fn_glXQueryCurrentRendererStringMESA_ptr)(dd ?
        __VND.fetchDispatchEntry(dd,
             __glXDispatchTableIndices[DI_glXQueryCurrentRendererStringMESA]) :
        NULL);
    if (pglXQueryCurrentRendererStringMESA) {
        ret = (*pglXQueryCurrentRendererStringMESA)(attribute);
    }

    return ret;

}



static Bool dispatch_glXQueryMaxSwapBarriersSGIX(Display * dpy, int screen, int * max)
{

    typedef Bool (*fn_glXQueryMaxSwapBarriersSGIX_ptr)(Display * dpy, int screen, int * max);
    fn_glXQueryMaxSwapBarriersSGIX_ptr pglXQueryMaxSwapBarriersSGIX;
    __GLXvendorInfo *dd = NULL;
    Bool ret = False;


    dd = __VND.getDynDispatch(dpy, screen);
    pglXQueryMaxSwapBarriersSGIX = (fn_glXQueryMaxSwapBarriersSGIX_ptr)(dd ?
        __VND.fetchDispatchEntry(dd,
             __glXDispatchTableIndices[DI_glXQueryMaxSwapBarriersSGIX]) :
        NULL);
    if (pglXQueryMaxSwapBarriersSGIX) {
        ret = (*pglXQueryMaxSwapBarriersSGIX)(dpy, screen, max);
    }

    return ret;

}



static Bool dispatch_glXQueryRendererIntegerMESA(Display * dpy, int screen, int renderer, int attribute, unsigned int * value)
{

    typedef Bool (*fn_glXQueryRendererIntegerMESA_ptr)(Display * dpy, int screen, int renderer, int attribute, unsigned int * value);
    fn_glXQueryRendererIntegerMESA_ptr pglXQueryRendererIntegerMESA;
    __GLXvendorInfo *dd = NULL;
    Bool ret = False;


    dd = __VND.getDynDispatch(dpy, screen);
    pglXQueryRendererIntegerMESA = (fn_glXQueryRendererIntegerMESA_ptr)(dd ?
        __VND.fetchDispatchEntry(dd,
             __glXDispatchTableIndices[DI_glXQueryRendererIntegerMESA]) :
        NULL);
    if (pglXQueryRendererIntegerMESA) {
        ret = (*pglXQueryRendererIntegerMESA)(dpy, screen, renderer, attribute, value);
    }

    return ret;

}



static const char * dispatch_glXQueryRendererStringMESA(Display * dpy, int screen, int renderer, int attribute)
{

    typedef const char * (*fn_glXQueryRendererStringMESA_ptr)(Display * dpy, int screen, int renderer, int attribute);
    fn_glXQueryRendererStringMESA_ptr pglXQueryRendererStringMESA;
    __GLXvendorInfo *dd = NULL;
    const char * ret = NULL;


    dd = __VND.getDynDispatch(dpy, screen);
    pglXQueryRendererStringMESA = (fn_glXQueryRendererStringMESA_ptr)(dd ?
        __VND.fetchDispatchEntry(dd,
             __glXDispatchTableIndices[DI_glXQueryRendererStringMESA]) :
        NULL);
    if (pglXQueryRendererStringMESA) {
        ret = (*pglXQueryRendererStringMESA)(dpy, screen, renderer, attribute);
    }

    return ret;

}



static Bool dispatch_glXReleaseBuffersMESA(Display * dpy, GLXDrawable d)
{

    typedef Bool (*fn_glXReleaseBuffersMESA_ptr)(Display * dpy, GLXDrawable d);
    fn_glXReleaseBuffersMESA_ptr pglXReleaseBuffersMESA;
    __GLXvendorInfo *dd = NULL;
    Bool ret = False;


    GetDispatchFromDrawable(dpy, d, NULL, &dd);
    pglXReleaseBuffersMESA = (fn_glXReleaseBuffersMESA_ptr)(dd ?
        __VND.fetchDispatchEntry(dd,
             __glXDispatchTableIndices[DI_glXReleaseBuffersMESA]) :
        NULL);
    if (pglXReleaseBuffersMESA) {
        ret = (*pglXReleaseBuffersMESA)(dpy, d);
    }

    return ret;

}



static int64_t dispatch_glXSwapBuffersMscOML(Display * dpy, GLXDrawable drawable, int64_t target_msc, int64_t divisor, int64_t remainder)
{

    typedef int64_t (*fn_glXSwapBuffersMscOML_ptr)(Display * dpy, GLXDrawable drawable, int64_t target_msc, int64_t divisor, int64_t remainder);
    fn_glXSwapBuffersMscOML_ptr pglXSwapBuffersMscOML;
    __GLXvendorInfo *dd = NULL;
    int64_t ret = 0;


    GetDispatchFromDrawable(dpy, drawable, NULL, &dd);
    pglXSwapBuffersMscOML = (fn_glXSwapBuffersMscOML_ptr)(dd ?
        __VND.fetchDispatchEntry(dd,
             __glXDispatchTableIndices[DI_glXSwapBuffersMscOML]) :
        NULL);
    if (pglXSwapBuffersMscOML) {
        ret = (*pglXSwapBuffersMscOML)(dpy, drawable, target_msc, divisor, remainder);
    }

    return ret;

}



static int dispatch_glXSwapIntervalMESA(unsigned int interval)
{

    typedef int (*fn_glXSwapIntervalMESA_ptr)(unsigned int interval);
    fn_glXSwapIntervalMESA_ptr pglXSwapIntervalMESA;
    __GLXvendorInfo *dd = NULL;
    int ret = 0;


    if (!__VND.getCurrentContext()) {
        return GLX_BAD_CONTEXT;
    }

    dd = __VND.getCurrentDynDispatch();
    pglXSwapIntervalMESA = (fn_glXSwapIntervalMESA_ptr)(dd ?
        __VND.fetchDispatchEntry(dd,
             __glXDispatchTableIndices[DI_glXSwapIntervalMESA]) :
        NULL);
    if (pglXSwapIntervalMESA) {
        ret = (*pglXSwapIntervalMESA)(interval);
    }

    return ret;

}



static Bool dispatch_glXWaitForMscOML(Display * dpy, GLXDrawable drawable, int64_t target_msc, int64_t divisor, int64_t remainder, int64_t * ust, int64_t * msc, int64_t * sbc)
{

    typedef Bool (*fn_glXWaitForMscOML_ptr)(Display * dpy, GLXDrawable drawable, int64_t target_msc, int64_t divisor, int64_t remainder, int64_t * ust, int64_t * msc, int64_t * sbc);
    fn_glXWaitForMscOML_ptr pglXWaitForMscOML;
    __GLXvendorInfo *dd = NULL;
    Bool ret = False;


    GetDispatchFromDrawable(dpy, drawable, NULL, &dd);
    pglXWaitForMscOML = (fn_glXWaitForMscOML_ptr)(dd ?
        __VND.fetchDispatchEntry(dd,
             __glXDispatchTableIndices[DI_glXWaitForMscOML]) :
        NULL);
    if (pglXWaitForMscOML) {
        ret = (*pglXWaitForMscOML)(dpy, drawable, target_msc, divisor, remainder, ust, msc, sbc);
    }

    return ret;

}



static Bool dispatch_glXWaitForSbcOML(Display * dpy, GLXDrawable drawable, int64_t target_sbc, int64_t * ust, int64_t * msc, int64_t * sbc)
{

    typedef Bool (*fn_glXWaitForSbcOML_ptr)(Display * dpy, GLXDrawable drawable, int64_t target_sbc, int64_t * ust, int64_t * msc, int64_t * sbc);
    fn_glXWaitForSbcOML_ptr pglXWaitForSbcOML;
    __GLXvendorInfo *dd = NULL;
    Bool ret = False;


    GetDispatchFromDrawable(dpy, drawable, NULL, &dd);
    pglXWaitForSbcOML = (fn_glXWaitForSbcOML_ptr)(dd ?
        __VND.fetchDispatchEntry(dd,
             __glXDispatchTableIndices[DI_glXWaitForSbcOML]) :
        NULL);
    if (pglXWaitForSbcOML) {
        ret = (*pglXWaitForSbcOML)(dpy, drawable, target_sbc, ust, msc, sbc);
    }

    return ret;

}



void __glXGLVNDInitDispatchFunctions(void)
{

    __glXDispatchFunctions[DI_BindTexImageEXT] = (void *)dispatch_BindTexImageEXT;
    __glXDispatchFunctions[DI_ChooseFBConfigSGIX] = (void *)dispatch_ChooseFBConfigSGIX;
    __glXDispatchFunctions[DI_CreateContextAttribsARB] = (void *)dispatch_CreateContextAttribsARB;
    __glXDispatchFunctions[DI_CreateContextWithConfigSGIX] = (void *)dispatch_CreateContextWithConfigSGIX;
    __glXDispatchFunctions[DI_CreateGLXPbufferSGIX] = (void *)dispatch_CreateGLXPbufferSGIX;
    __glXDispatchFunctions[DI_CreateGLXPixmapWithConfigSGIX] = (void *)dispatch_CreateGLXPixmapWithConfigSGIX;
    __glXDispatchFunctions[DI_DestroyGLXPbufferSGIX] = (void *)dispatch_DestroyGLXPbufferSGIX;
    __glXDispatchFunctions[DI_FreeContextEXT] = (void *)dispatch_FreeContextEXT;
    __glXDispatchFunctions[DI_GetContextIDEXT] = (void *)dispatch_GetContextIDEXT;
    __glXDispatchFunctions[DI_GetCurrentDisplayEXT] = (void *)dispatch_GetCurrentDisplayEXT;
    __glXDispatchFunctions[DI_GetFBConfigAttribSGIX] = (void *)dispatch_GetFBConfigAttribSGIX;
    __glXDispatchFunctions[DI_GetFBConfigFromVisualSGIX] = (void *)dispatch_GetFBConfigFromVisualSGIX;
    __glXDispatchFunctions[DI_GetSelectedEventSGIX] = (void *)dispatch_GetSelectedEventSGIX;
#if defined(GLX_SGI_video_sync)
    __glXDispatchFunctions[DI_GetVideoSyncSGI] = (void *)dispatch_GetVideoSyncSGI;
#endif // defined(GLX_SGI_video_sync)
    __glXDispatchFunctions[DI_GetVisualFromFBConfigSGIX] = (void *)dispatch_GetVisualFromFBConfigSGIX;
    __glXDispatchFunctions[DI_ImportContextEXT] = (void *)dispatch_ImportContextEXT;
    __glXDispatchFunctions[DI_QueryContextInfoEXT] = (void *)dispatch_QueryContextInfoEXT;
    __glXDispatchFunctions[DI_QueryGLXPbufferSGIX] = (void *)dispatch_QueryGLXPbufferSGIX;
    __glXDispatchFunctions[DI_ReleaseTexImageEXT] = (void *)dispatch_ReleaseTexImageEXT;
    __glXDispatchFunctions[DI_SelectEventSGIX] = (void *)dispatch_SelectEventSGIX;
#if defined(GLX_SGI_swap_control)
    __glXDispatchFunctions[DI_SwapIntervalSGI] = (void *)dispatch_SwapIntervalSGI;
#endif // defined(GLX_SGI_swap_control)
#if defined(GLX_SGI_video_sync)
    __glXDispatchFunctions[DI_WaitVideoSyncSGI] = (void *)dispatch_WaitVideoSyncSGI;
#endif // defined(GLX_SGI_video_sync)
    __glXDispatchFunctions[DI_glXBindSwapBarrierSGIX] = (void *)dispatch_glXBindSwapBarrierSGIX;
    __glXDispatchFunctions[DI_glXCopySubBufferMESA] = (void *)dispatch_glXCopySubBufferMESA;
    __glXDispatchFunctions[DI_glXCreateGLXPixmapMESA] = (void *)dispatch_glXCreateGLXPixmapMESA;
    __glXDispatchFunctions[DI_glXGetMscRateOML] = (void *)dispatch_glXGetMscRateOML;
    __glXDispatchFunctions[DI_glXGetScreenDriver] = (void *)dispatch_glXGetScreenDriver;
    __glXDispatchFunctions[DI_glXGetSwapIntervalMESA] = (void *)dispatch_glXGetSwapIntervalMESA;
    __glXDispatchFunctions[DI_glXGetSyncValuesOML] = (void *)dispatch_glXGetSyncValuesOML;
    __glXDispatchFunctions[DI_glXJoinSwapGroupSGIX] = (void *)dispatch_glXJoinSwapGroupSGIX;
    __glXDispatchFunctions[DI_glXQueryCurrentRendererIntegerMESA] = (void *)dispatch_glXQueryCurrentRendererIntegerMESA;
    __glXDispatchFunctions[DI_glXQueryCurrentRendererStringMESA] = (void *)dispatch_glXQueryCurrentRendererStringMESA;
    __glXDispatchFunctions[DI_glXQueryMaxSwapBarriersSGIX] = (void *)dispatch_glXQueryMaxSwapBarriersSGIX;
    __glXDispatchFunctions[DI_glXQueryRendererIntegerMESA] = (void *)dispatch_glXQueryRendererIntegerMESA;
    __glXDispatchFunctions[DI_glXQueryRendererStringMESA] = (void *)dispatch_glXQueryRendererStringMESA;
    __glXDispatchFunctions[DI_glXReleaseBuffersMESA] = (void *)dispatch_glXReleaseBuffersMESA;
    __glXDispatchFunctions[DI_glXSwapBuffersMscOML] = (void *)dispatch_glXSwapBuffersMscOML;
    __glXDispatchFunctions[DI_glXSwapIntervalMESA] = (void *)dispatch_glXSwapIntervalMESA;
    __glXDispatchFunctions[DI_glXWaitForMscOML] = (void *)dispatch_glXWaitForMscOML;
    __glXDispatchFunctions[DI_glXWaitForSbcOML] = (void *)dispatch_glXWaitForSbcOML;

}

