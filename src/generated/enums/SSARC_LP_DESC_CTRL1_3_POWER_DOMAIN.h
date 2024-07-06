/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class SSARC_LP_DESC_CTRL1_3_POWER_DOMAIN : uint8_t
{
    _0 /*!< PGMC_BPC0 */,
    _1 = 1 /*!< PGMC_BPC1 */,
    _2 = 2 /*!< PGMC_BPC2 */,
    _3 = 3 /*!< PGMC_BPC3 */,
    _4 = 4 /*!< PGMC_BPC4 */,
    _5 = 5 /*!< PGMC_BPC5 */,
    _6 = 6 /*!< PGMC_BPC6 */,
    _7 = 7 /*!< PGMC_BPC7 */
};
static_assert(sizeof(SSARC_LP_DESC_CTRL1_3_POWER_DOMAIN) == 1);

/**
 * Converts SSARC_LP_DESC_CTRL1_3_POWER_DOMAIN to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SSARC_LP_DESC_CTRL1_3_POWER_DOMAIN instance)
{
    const char *result = "UNKNOWN SSARC_LP_DESC_CTRL1_3_POWER_DOMAIN";

    switch (instance)
    {
    case SSARC_LP_DESC_CTRL1_3_POWER_DOMAIN::_0:
        result = "_0";
        break;
    case SSARC_LP_DESC_CTRL1_3_POWER_DOMAIN::_1:
        result = "_1";
        break;
    case SSARC_LP_DESC_CTRL1_3_POWER_DOMAIN::_2:
        result = "_2";
        break;
    case SSARC_LP_DESC_CTRL1_3_POWER_DOMAIN::_3:
        result = "_3";
        break;
    case SSARC_LP_DESC_CTRL1_3_POWER_DOMAIN::_4:
        result = "_4";
        break;
    case SSARC_LP_DESC_CTRL1_3_POWER_DOMAIN::_5:
        result = "_5";
        break;
    case SSARC_LP_DESC_CTRL1_3_POWER_DOMAIN::_6:
        result = "_6";
        break;
    case SSARC_LP_DESC_CTRL1_3_POWER_DOMAIN::_7:
        result = "_7";
        break;
    }

    return result;
}

/**
 * Converts a C string to SSARC_LP_DESC_CTRL1_3_POWER_DOMAIN.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        SSARC_LP_DESC_CTRL1_3_POWER_DOMAIN &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0", 2)))
    {
        output = SSARC_LP_DESC_CTRL1_3_POWER_DOMAIN::_0;
    }
    else if ((result = !strncmp(data, "_1", 2)))
    {
        output = SSARC_LP_DESC_CTRL1_3_POWER_DOMAIN::_1;
    }
    else if ((result = !strncmp(data, "_2", 2)))
    {
        output = SSARC_LP_DESC_CTRL1_3_POWER_DOMAIN::_2;
    }
    else if ((result = !strncmp(data, "_3", 2)))
    {
        output = SSARC_LP_DESC_CTRL1_3_POWER_DOMAIN::_3;
    }
    else if ((result = !strncmp(data, "_4", 2)))
    {
        output = SSARC_LP_DESC_CTRL1_3_POWER_DOMAIN::_4;
    }
    else if ((result = !strncmp(data, "_5", 2)))
    {
        output = SSARC_LP_DESC_CTRL1_3_POWER_DOMAIN::_5;
    }
    else if ((result = !strncmp(data, "_6", 2)))
    {
        output = SSARC_LP_DESC_CTRL1_3_POWER_DOMAIN::_6;
    }
    else if ((result = !strncmp(data, "_7", 2)))
    {
        output = SSARC_LP_DESC_CTRL1_3_POWER_DOMAIN::_7;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4
