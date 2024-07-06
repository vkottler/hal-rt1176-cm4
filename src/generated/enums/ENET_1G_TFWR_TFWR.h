/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class ENET_1G_TFWR_TFWR : uint8_t
{
    _64_0 /*!< 64 bytes written. */,
    _64_1 = 1 /*!< 64 bytes written. */,
    _128 = 2 /*!< 128 bytes written. */,
    _192 = 3 /*!< 192 bytes written. */,
    _4032 = 63 /*!< 4032 bytes written. */
};
static_assert(sizeof(ENET_1G_TFWR_TFWR) == 1);

/**
 * Converts ENET_1G_TFWR_TFWR to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(ENET_1G_TFWR_TFWR instance)
{
    const char *result = "UNKNOWN ENET_1G_TFWR_TFWR";

    switch (instance)
    {
    case ENET_1G_TFWR_TFWR::_64_0:
        result = "_64_0";
        break;
    case ENET_1G_TFWR_TFWR::_64_1:
        result = "_64_1";
        break;
    case ENET_1G_TFWR_TFWR::_128:
        result = "_128";
        break;
    case ENET_1G_TFWR_TFWR::_192:
        result = "_192";
        break;
    case ENET_1G_TFWR_TFWR::_4032:
        result = "_4032";
        break;
    }

    return result;
}

/**
 * Converts a C string to ENET_1G_TFWR_TFWR.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, ENET_1G_TFWR_TFWR &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_64_0", 5)))
    {
        output = ENET_1G_TFWR_TFWR::_64_0;
    }
    else if ((result = !strncmp(data, "_64_1", 5)))
    {
        output = ENET_1G_TFWR_TFWR::_64_1;
    }
    else if ((result = !strncmp(data, "_128", 4)))
    {
        output = ENET_1G_TFWR_TFWR::_128;
    }
    else if ((result = !strncmp(data, "_192", 4)))
    {
        output = ENET_1G_TFWR_TFWR::_192;
    }
    else if ((result = !strncmp(data, "_4032", 5)))
    {
        output = ENET_1G_TFWR_TFWR::_4032;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4