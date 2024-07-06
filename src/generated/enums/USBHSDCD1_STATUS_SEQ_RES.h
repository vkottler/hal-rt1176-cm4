/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class USBHSDCD1_STATUS_SEQ_RES : uint8_t
{
    NO_RESULT /*!< No results to report. */,
    CONN_SDP = 1 /*!< Attached to an SDP. Must comply with USB 2.0 by drawing
                    only 2.5 mA (max) until connected. */
        ,
    CONN_CP = 2 /*!< Attached to a charging port. The exact meaning depends on
                   bit 18 (value 0: Attached to either a CDP or a DCP. The
                   charger type detection has not completed. value 1: Attached
                   to a CDP. The charger type detection has completed.) */
        ,
    CONN_DCP = 3 /*!< Attached to a DCP. */
};
static_assert(sizeof(USBHSDCD1_STATUS_SEQ_RES) == 1);

/**
 * Converts USBHSDCD1_STATUS_SEQ_RES to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USBHSDCD1_STATUS_SEQ_RES instance)
{
    const char *result = "UNKNOWN USBHSDCD1_STATUS_SEQ_RES";

    switch (instance)
    {
    case USBHSDCD1_STATUS_SEQ_RES::NO_RESULT:
        result = "NO_RESULT";
        break;
    case USBHSDCD1_STATUS_SEQ_RES::CONN_SDP:
        result = "CONN_SDP";
        break;
    case USBHSDCD1_STATUS_SEQ_RES::CONN_CP:
        result = "CONN_CP";
        break;
    case USBHSDCD1_STATUS_SEQ_RES::CONN_DCP:
        result = "CONN_DCP";
        break;
    }

    return result;
}

/**
 * Converts a C string to USBHSDCD1_STATUS_SEQ_RES.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USBHSDCD1_STATUS_SEQ_RES &output)
{
    bool result = false;

    if ((result = !strncmp(data, "NO_RESULT", 9)))
    {
        output = USBHSDCD1_STATUS_SEQ_RES::NO_RESULT;
    }
    else if ((result = !strncmp(data, "CONN_SDP", 8)))
    {
        output = USBHSDCD1_STATUS_SEQ_RES::CONN_SDP;
    }
    else if ((result = !strncmp(data, "CONN_CP", 7)))
    {
        output = USBHSDCD1_STATUS_SEQ_RES::CONN_CP;
    }
    else if ((result = !strncmp(data, "CONN_DCP", 8)))
    {
        output = USBHSDCD1_STATUS_SEQ_RES::CONN_DCP;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4
