/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class MUB_SR_RFn : uint8_t
{
    not_full /*!< MUB.RRn register is not full (default). */,
    full = 1 /*!< MUB.RRn register has received data from MUA.TRn register and
                is ready to be read by the Processor B. */
};
static_assert(sizeof(MUB_SR_RFn) == 1);

/**
 * Converts MUB_SR_RFn to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(MUB_SR_RFn instance)
{
    const char *result = "UNKNOWN MUB_SR_RFn";

    switch (instance)
    {
    case MUB_SR_RFn::not_full:
        result = "not_full";
        break;
    case MUB_SR_RFn::full:
        result = "full";
        break;
    }

    return result;
}

/**
 * Converts a C string to MUB_SR_RFn.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, MUB_SR_RFn &output)
{
    bool result = false;

    if ((result = !strncmp(data, "not_full", 8)))
    {
        output = MUB_SR_RFn::not_full;
    }
    else if ((result = !strncmp(data, "full", 4)))
    {
        output = MUB_SR_RFn::full;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4