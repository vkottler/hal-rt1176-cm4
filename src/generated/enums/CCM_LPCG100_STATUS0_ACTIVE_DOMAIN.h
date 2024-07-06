/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class CCM_LPCG100_STATUS0_ACTIVE_DOMAIN : uint8_t
{
    NO /*!< Clock not owned by any domain */,
    ZERO = 1 /*!< Clock owned by Domain0 */,
    TWO = 2 /*!< Clock owned by Domain1 */,
    THREE = 3 /*!< Clock owned by Domain0 and Domain1 */,
    FOUR = 4 /*!< Clock owned by Domain2 */,
    FIVE = 5 /*!< Clock owned by Domain0 and Domain2 */,
    SIX = 6 /*!< Clock owned by Domain1 and Domain2 */,
    SEVEN = 7 /*!< Clock owned by Domain0, Domain1 and Domain 2 */,
    EIGHT = 8 /*!< Clock owned by Domain3 */,
    NINE = 9 /*!< Clock owned by Domain0 and Domain3 */,
    TEN = 10 /*!< Clock owned by Domain1 and Domain3 */,
    ELV = 11 /*!< Clock owned by Domain2 and Domain3 */,
    TW = 12 /*!< Clock owned by Domain0, Domain 1, and Domain3 */,
    TH = 13 /*!< Clock owned by Domain0, Domain 2, and Domain3 */,
    FR = 14 /*!< Clock owned by Domain1, Domain 2, and Domain3 */,
    all = 15 /*!< Clock owned by all domains */
};
static_assert(sizeof(CCM_LPCG100_STATUS0_ACTIVE_DOMAIN) == 1);

/**
 * Converts CCM_LPCG100_STATUS0_ACTIVE_DOMAIN to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CCM_LPCG100_STATUS0_ACTIVE_DOMAIN instance)
{
    const char *result = "UNKNOWN CCM_LPCG100_STATUS0_ACTIVE_DOMAIN";

    switch (instance)
    {
    case CCM_LPCG100_STATUS0_ACTIVE_DOMAIN::NO:
        result = "NO";
        break;
    case CCM_LPCG100_STATUS0_ACTIVE_DOMAIN::ZERO:
        result = "ZERO";
        break;
    case CCM_LPCG100_STATUS0_ACTIVE_DOMAIN::TWO:
        result = "TWO";
        break;
    case CCM_LPCG100_STATUS0_ACTIVE_DOMAIN::THREE:
        result = "THREE";
        break;
    case CCM_LPCG100_STATUS0_ACTIVE_DOMAIN::FOUR:
        result = "FOUR";
        break;
    case CCM_LPCG100_STATUS0_ACTIVE_DOMAIN::FIVE:
        result = "FIVE";
        break;
    case CCM_LPCG100_STATUS0_ACTIVE_DOMAIN::SIX:
        result = "SIX";
        break;
    case CCM_LPCG100_STATUS0_ACTIVE_DOMAIN::SEVEN:
        result = "SEVEN";
        break;
    case CCM_LPCG100_STATUS0_ACTIVE_DOMAIN::EIGHT:
        result = "EIGHT";
        break;
    case CCM_LPCG100_STATUS0_ACTIVE_DOMAIN::NINE:
        result = "NINE";
        break;
    case CCM_LPCG100_STATUS0_ACTIVE_DOMAIN::TEN:
        result = "TEN";
        break;
    case CCM_LPCG100_STATUS0_ACTIVE_DOMAIN::ELV:
        result = "ELV";
        break;
    case CCM_LPCG100_STATUS0_ACTIVE_DOMAIN::TW:
        result = "TW";
        break;
    case CCM_LPCG100_STATUS0_ACTIVE_DOMAIN::TH:
        result = "TH";
        break;
    case CCM_LPCG100_STATUS0_ACTIVE_DOMAIN::FR:
        result = "FR";
        break;
    case CCM_LPCG100_STATUS0_ACTIVE_DOMAIN::all:
        result = "all";
        break;
    }

    return result;
}

/**
 * Converts a C string to CCM_LPCG100_STATUS0_ACTIVE_DOMAIN.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        CCM_LPCG100_STATUS0_ACTIVE_DOMAIN &output)
{
    bool result = false;

    if ((result = !strncmp(data, "NO", 2)))
    {
        output = CCM_LPCG100_STATUS0_ACTIVE_DOMAIN::NO;
    }
    else if ((result = !strncmp(data, "ZERO", 4)))
    {
        output = CCM_LPCG100_STATUS0_ACTIVE_DOMAIN::ZERO;
    }
    else if ((result = !strncmp(data, "TWO", 3)))
    {
        output = CCM_LPCG100_STATUS0_ACTIVE_DOMAIN::TWO;
    }
    else if ((result = !strncmp(data, "THREE", 5)))
    {
        output = CCM_LPCG100_STATUS0_ACTIVE_DOMAIN::THREE;
    }
    else if ((result = !strncmp(data, "FOUR", 4)))
    {
        output = CCM_LPCG100_STATUS0_ACTIVE_DOMAIN::FOUR;
    }
    else if ((result = !strncmp(data, "FIVE", 4)))
    {
        output = CCM_LPCG100_STATUS0_ACTIVE_DOMAIN::FIVE;
    }
    else if ((result = !strncmp(data, "SIX", 3)))
    {
        output = CCM_LPCG100_STATUS0_ACTIVE_DOMAIN::SIX;
    }
    else if ((result = !strncmp(data, "SEVEN", 5)))
    {
        output = CCM_LPCG100_STATUS0_ACTIVE_DOMAIN::SEVEN;
    }
    else if ((result = !strncmp(data, "EIGHT", 5)))
    {
        output = CCM_LPCG100_STATUS0_ACTIVE_DOMAIN::EIGHT;
    }
    else if ((result = !strncmp(data, "NINE", 4)))
    {
        output = CCM_LPCG100_STATUS0_ACTIVE_DOMAIN::NINE;
    }
    else if ((result = !strncmp(data, "TEN", 3)))
    {
        output = CCM_LPCG100_STATUS0_ACTIVE_DOMAIN::TEN;
    }
    else if ((result = !strncmp(data, "ELV", 3)))
    {
        output = CCM_LPCG100_STATUS0_ACTIVE_DOMAIN::ELV;
    }
    else if ((result = !strncmp(data, "TW", 2)))
    {
        output = CCM_LPCG100_STATUS0_ACTIVE_DOMAIN::TW;
    }
    else if ((result = !strncmp(data, "TH", 2)))
    {
        output = CCM_LPCG100_STATUS0_ACTIVE_DOMAIN::TH;
    }
    else if ((result = !strncmp(data, "FR", 2)))
    {
        output = CCM_LPCG100_STATUS0_ACTIVE_DOMAIN::FR;
    }
    else if ((result = !strncmp(data, "all", 3)))
    {
        output = CCM_LPCG100_STATUS0_ACTIVE_DOMAIN::all;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4
