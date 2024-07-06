/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class SEMC_SDRAMCR0_CL : uint8_t
{
    _0 /*!< 1 */,
    _1 = 1 /*!< 1 */,
    _2 = 2 /*!< 2 */,
    _3 = 3 /*!< 3 */
};
static_assert(sizeof(SEMC_SDRAMCR0_CL) == 1);

/**
 * Converts SEMC_SDRAMCR0_CL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SEMC_SDRAMCR0_CL instance)
{
    const char *result = "UNKNOWN SEMC_SDRAMCR0_CL";

    switch (instance)
    {
    case SEMC_SDRAMCR0_CL::_0:
        result = "_0";
        break;
    case SEMC_SDRAMCR0_CL::_1:
        result = "_1";
        break;
    case SEMC_SDRAMCR0_CL::_2:
        result = "_2";
        break;
    case SEMC_SDRAMCR0_CL::_3:
        result = "_3";
        break;
    }

    return result;
}

/**
 * Converts a C string to SEMC_SDRAMCR0_CL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SEMC_SDRAMCR0_CL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0", 2)))
    {
        output = SEMC_SDRAMCR0_CL::_0;
    }
    else if ((result = !strncmp(data, "_1", 2)))
    {
        output = SEMC_SDRAMCR0_CL::_1;
    }
    else if ((result = !strncmp(data, "_2", 2)))
    {
        output = SEMC_SDRAMCR0_CL::_2;
    }
    else if ((result = !strncmp(data, "_3", 2)))
    {
        output = SEMC_SDRAMCR0_CL::_3;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4