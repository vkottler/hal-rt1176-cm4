/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class MUB_SR_GIPn : uint8_t
{
    not_pending /*!< Processor B general purpose interrupt n is not pending.
                   (default) */
        ,
    pending = 1 /*!< Processor B general purpose interrupt n is pending. */
};
static_assert(sizeof(MUB_SR_GIPn) == 1);

/**
 * Converts MUB_SR_GIPn to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(MUB_SR_GIPn instance)
{
    const char *result = "UNKNOWN MUB_SR_GIPn";

    switch (instance)
    {
    case MUB_SR_GIPn::not_pending:
        result = "not_pending";
        break;
    case MUB_SR_GIPn::pending:
        result = "pending";
        break;
    }

    return result;
}

/**
 * Converts a C string to MUB_SR_GIPn.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, MUB_SR_GIPn &output)
{
    bool result = false;

    if ((result = !strncmp(data, "not_pending", 11)))
    {
        output = MUB_SR_GIPn::not_pending;
    }
    else if ((result = !strncmp(data, "pending", 7)))
    {
        output = MUB_SR_GIPn::pending;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4
