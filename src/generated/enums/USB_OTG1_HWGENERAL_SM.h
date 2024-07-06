/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class USB_OTG1_HWGENERAL_SM : uint8_t
{
    SERIAL_ENGINE_NO /*!< No Serial Engine, always use parallel signalling. */,
    SERIAL_ENGINE_EN = 1 /*!< Serial Engine present, always use serial
                            signalling for FS/LS. */
        ,
    SW_RST_PARALLEL = 2 /*!< Software programmable - Reset to use parallel
                           signalling for FS/LS */
        ,
    SW_RST_SERIAL_ENG = 3 /*!< Software programmable - Reset to use serial
                             signalling for FS/LS */
};
static_assert(sizeof(USB_OTG1_HWGENERAL_SM) == 1);

/**
 * Converts USB_OTG1_HWGENERAL_SM to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USB_OTG1_HWGENERAL_SM instance)
{
    const char *result = "UNKNOWN USB_OTG1_HWGENERAL_SM";

    switch (instance)
    {
    case USB_OTG1_HWGENERAL_SM::SERIAL_ENGINE_NO:
        result = "SERIAL_ENGINE_NO";
        break;
    case USB_OTG1_HWGENERAL_SM::SERIAL_ENGINE_EN:
        result = "SERIAL_ENGINE_EN";
        break;
    case USB_OTG1_HWGENERAL_SM::SW_RST_PARALLEL:
        result = "SW_RST_PARALLEL";
        break;
    case USB_OTG1_HWGENERAL_SM::SW_RST_SERIAL_ENG:
        result = "SW_RST_SERIAL_ENG";
        break;
    }

    return result;
}

/**
 * Converts a C string to USB_OTG1_HWGENERAL_SM.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USB_OTG1_HWGENERAL_SM &output)
{
    bool result = false;

    if ((result = !strncmp(data, "SERIAL_ENGINE_NO", 16)))
    {
        output = USB_OTG1_HWGENERAL_SM::SERIAL_ENGINE_NO;
    }
    else if ((result = !strncmp(data, "SERIAL_ENGINE_EN", 16)))
    {
        output = USB_OTG1_HWGENERAL_SM::SERIAL_ENGINE_EN;
    }
    else if ((result = !strncmp(data, "SW_RST_PARALLEL", 15)))
    {
        output = USB_OTG1_HWGENERAL_SM::SW_RST_PARALLEL;
    }
    else if ((result = !strncmp(data, "SW_RST_SERIAL_ENG", 17)))
    {
        output = USB_OTG1_HWGENERAL_SM::SW_RST_SERIAL_ENG;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4
