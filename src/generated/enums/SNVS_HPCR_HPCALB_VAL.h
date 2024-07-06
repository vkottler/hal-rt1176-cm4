/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class SNVS_HPCR_HPCALB_VAL : uint8_t
{
    ADD_0_PER_32768_TICKS /*!< +0 counts per each 32768 ticks of the counter */
        ,
    ADD_1_PER_32768_TICKS =
        1 /*!< +1 counts per each 32768 ticks of the counter */,
    ADD_2_PER_32768_TICKS =
        2 /*!< +2 counts per each 32768 ticks of the counter */,
    ADD_15_PER_32768_TICKS =
        15 /*!< +15 counts per each 32768 ticks of the counter */,
    SUB_16_PER_32768_TICKS =
        16 /*!< -16 counts per each 32768 ticks of the counter */,
    SUB_15_PER_32768_TICKS =
        17 /*!< -15 counts per each 32768 ticks of the counter */,
    SUB_2_PER_32768_TICKS =
        30 /*!< -2 counts per each 32768 ticks of the counter */,
    SUB_1_PER_32768_TICKS =
        31 /*!< -1 counts per each 32768 ticks of the counter */
};
static_assert(sizeof(SNVS_HPCR_HPCALB_VAL) == 1);

/**
 * Converts SNVS_HPCR_HPCALB_VAL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SNVS_HPCR_HPCALB_VAL instance)
{
    const char *result = "UNKNOWN SNVS_HPCR_HPCALB_VAL";

    switch (instance)
    {
    case SNVS_HPCR_HPCALB_VAL::ADD_0_PER_32768_TICKS:
        result = "ADD_0_PER_32768_TICKS";
        break;
    case SNVS_HPCR_HPCALB_VAL::ADD_1_PER_32768_TICKS:
        result = "ADD_1_PER_32768_TICKS";
        break;
    case SNVS_HPCR_HPCALB_VAL::ADD_2_PER_32768_TICKS:
        result = "ADD_2_PER_32768_TICKS";
        break;
    case SNVS_HPCR_HPCALB_VAL::ADD_15_PER_32768_TICKS:
        result = "ADD_15_PER_32768_TICKS";
        break;
    case SNVS_HPCR_HPCALB_VAL::SUB_16_PER_32768_TICKS:
        result = "SUB_16_PER_32768_TICKS";
        break;
    case SNVS_HPCR_HPCALB_VAL::SUB_15_PER_32768_TICKS:
        result = "SUB_15_PER_32768_TICKS";
        break;
    case SNVS_HPCR_HPCALB_VAL::SUB_2_PER_32768_TICKS:
        result = "SUB_2_PER_32768_TICKS";
        break;
    case SNVS_HPCR_HPCALB_VAL::SUB_1_PER_32768_TICKS:
        result = "SUB_1_PER_32768_TICKS";
        break;
    }

    return result;
}

/**
 * Converts a C string to SNVS_HPCR_HPCALB_VAL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SNVS_HPCR_HPCALB_VAL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "ADD_0_PER_32768_TICKS", 21)))
    {
        output = SNVS_HPCR_HPCALB_VAL::ADD_0_PER_32768_TICKS;
    }
    else if ((result = !strncmp(data, "ADD_1_PER_32768_TICKS", 21)))
    {
        output = SNVS_HPCR_HPCALB_VAL::ADD_1_PER_32768_TICKS;
    }
    else if ((result = !strncmp(data, "ADD_2_PER_32768_TICKS", 21)))
    {
        output = SNVS_HPCR_HPCALB_VAL::ADD_2_PER_32768_TICKS;
    }
    else if ((result = !strncmp(data, "ADD_15_PER_32768_TICKS", 22)))
    {
        output = SNVS_HPCR_HPCALB_VAL::ADD_15_PER_32768_TICKS;
    }
    else if ((result = !strncmp(data, "SUB_16_PER_32768_TICKS", 22)))
    {
        output = SNVS_HPCR_HPCALB_VAL::SUB_16_PER_32768_TICKS;
    }
    else if ((result = !strncmp(data, "SUB_15_PER_32768_TICKS", 22)))
    {
        output = SNVS_HPCR_HPCALB_VAL::SUB_15_PER_32768_TICKS;
    }
    else if ((result = !strncmp(data, "SUB_2_PER_32768_TICKS", 21)))
    {
        output = SNVS_HPCR_HPCALB_VAL::SUB_2_PER_32768_TICKS;
    }
    else if ((result = !strncmp(data, "SUB_1_PER_32768_TICKS", 21)))
    {
        output = SNVS_HPCR_HPCALB_VAL::SUB_1_PER_32768_TICKS;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4
