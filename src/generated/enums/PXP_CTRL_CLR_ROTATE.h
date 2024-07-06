/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class PXP_CTRL_CLR_ROTATE : uint8_t
{
    _0 /*!< ROT_0 */,
    _90 = 1 /*!< ROT_90 */,
    _180 = 2 /*!< ROT_180 */,
    _270 = 3 /*!< ROT_270 */
};
static_assert(sizeof(PXP_CTRL_CLR_ROTATE) == 1);

/**
 * Converts PXP_CTRL_CLR_ROTATE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PXP_CTRL_CLR_ROTATE instance)
{
    const char *result = "UNKNOWN PXP_CTRL_CLR_ROTATE";

    switch (instance)
    {
    case PXP_CTRL_CLR_ROTATE::_0:
        result = "_0";
        break;
    case PXP_CTRL_CLR_ROTATE::_90:
        result = "_90";
        break;
    case PXP_CTRL_CLR_ROTATE::_180:
        result = "_180";
        break;
    case PXP_CTRL_CLR_ROTATE::_270:
        result = "_270";
        break;
    }

    return result;
}

/**
 * Converts a C string to PXP_CTRL_CLR_ROTATE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PXP_CTRL_CLR_ROTATE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0", 2)))
    {
        output = PXP_CTRL_CLR_ROTATE::_0;
    }
    else if ((result = !strncmp(data, "_90", 3)))
    {
        output = PXP_CTRL_CLR_ROTATE::_90;
    }
    else if ((result = !strncmp(data, "_180", 4)))
    {
        output = PXP_CTRL_CLR_ROTATE::_180;
    }
    else if ((result = !strncmp(data, "_270", 4)))
    {
        output = PXP_CTRL_CLR_ROTATE::_270;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4
