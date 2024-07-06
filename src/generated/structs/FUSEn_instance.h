/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include "../ifgen/common.h"

namespace MIMXRT1176::CM4
{

/**
 * no description available
 */
struct [[gnu::packed]] FUSEn_instance
{
    /* Constant attributes. */
    static constexpr std::size_t size =
        4; /*!< FUSEn_instance's size in bytes. */

    /* Fields. */
    uint32_t FUSE; /*!< (read-write) Value of fuse word index */

    /* Methods. */

    /**
     * Get FUSE's BITS field.
     *
     * Reflects value of the fuse word
     */
    inline uint32_t get_FUSE_BITS()
    {
        return (FUSE >> 0u) & 0b11111111111111111111111111111111u;
    }
};

static_assert(sizeof(FUSEn_instance) == FUSEn_instance::size);

}; // namespace MIMXRT1176::CM4
