/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class SEMC_SDRAMCR0_BL : uint8_t
{
    _0 /*!< 1 */,
    _1 = 1 /*!< 2 */,
    _2 = 2 /*!< 4 */,
    _3 = 3 /*!< 8 */,
    _4 = 4 /*!< 8 */,
    _5 = 5 /*!< 8 */,
    _6 = 6 /*!< 8 */,
    _7 = 7 /*!< 8 */
};
static_assert(sizeof(SEMC_SDRAMCR0_BL) == 1);

/**
 * Converts SEMC_SDRAMCR0_BL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SEMC_SDRAMCR0_BL instance)
{
    const char *result = "UNKNOWN SEMC_SDRAMCR0_BL";

    switch (instance)
    {
    case SEMC_SDRAMCR0_BL::_0:
        result = "_0";
        break;
    case SEMC_SDRAMCR0_BL::_1:
        result = "_1";
        break;
    case SEMC_SDRAMCR0_BL::_2:
        result = "_2";
        break;
    case SEMC_SDRAMCR0_BL::_3:
        result = "_3";
        break;
    case SEMC_SDRAMCR0_BL::_4:
        result = "_4";
        break;
    case SEMC_SDRAMCR0_BL::_5:
        result = "_5";
        break;
    case SEMC_SDRAMCR0_BL::_6:
        result = "_6";
        break;
    case SEMC_SDRAMCR0_BL::_7:
        result = "_7";
        break;
    }

    return result;
}

/**
 * Converts a C string to SEMC_SDRAMCR0_BL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SEMC_SDRAMCR0_BL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0", 2)))
    {
        output = SEMC_SDRAMCR0_BL::_0;
    }
    else if ((result = !strncmp(data, "_1", 2)))
    {
        output = SEMC_SDRAMCR0_BL::_1;
    }
    else if ((result = !strncmp(data, "_2", 2)))
    {
        output = SEMC_SDRAMCR0_BL::_2;
    }
    else if ((result = !strncmp(data, "_3", 2)))
    {
        output = SEMC_SDRAMCR0_BL::_3;
    }
    else if ((result = !strncmp(data, "_4", 2)))
    {
        output = SEMC_SDRAMCR0_BL::_4;
    }
    else if ((result = !strncmp(data, "_5", 2)))
    {
        output = SEMC_SDRAMCR0_BL::_5;
    }
    else if ((result = !strncmp(data, "_6", 2)))
    {
        output = SEMC_SDRAMCR0_BL::_6;
    }
    else if ((result = !strncmp(data, "_7", 2)))
    {
        output = SEMC_SDRAMCR0_BL::_7;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4