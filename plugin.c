#include <gst/gst.h>
#include "gstsplitmuxsink.h"

#define PACKAGE "splitmuxsink"

static gboolean
plugin_init (GstPlugin * plugin)
{
    if (!register_splitmuxsink(plugin))
        return FALSE;

    return TRUE;
}

GST_PLUGIN_DEFINE(
    GST_VERSION_MAJOR,
    GST_VERSION_MINOR,
    splitmuxsink,
    "Multifile output segmentation.",
    plugin_init,
    "1.5.2",
    "LGPL",
    "splitmuxsink",
    "Back-ported from GStreamer 1.5.2"
)
