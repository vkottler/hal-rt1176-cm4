/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include "../enums/XRDC2_D0_MCR_GCL.h"
#include "../ifgen/common.h"
#include "mdaci_instance.h"
#include "mrci_instance.h"
#include "msci_msac_wk_instance.h"
#include "paci_instance.h"

namespace MIMXRT1176::CM4
{

/**
 * XRDC2
 */
struct [[gnu::packed]] xrdc2_d0
{
    /* Constant attributes. */
    static constexpr std::size_t size =
        54280; /*!< xrdc2_d0's size in bytes. */

    /* Fields. */
    uint32_t MCR; /*!< (read-write) Module Control Register */
    uint32_t SR;  /*!< (read-write) Status Register */
    static constexpr std::size_t msci_msac_wk_length = 128;
    msci_msac_wk_instance
        msci_msac_wk[msci_msac_wk_length]; /*!< no description available */
    static constexpr std::size_t mdaci_length = 32;
    mdaci_instance mdaci[mdaci_length]; /*!< no description available */
    static constexpr std::size_t paci_length = 8;
    paci_instance paci[paci_length]; /*!< no description available */
    static constexpr std::size_t mrci_length = 32;
    mrci_instance mrci[mrci_length]; /*!< no description available */

    /* Methods. */

    /**
     * Get MCR's GCL field.
     *
     * Global Configuration Lock
     */
    inline XRDC2_D0_MCR_GCL get_MCR_GCL() volatile
    {
        return XRDC2_D0_MCR_GCL((MCR >> 4u) & 0b11u);
    }

    /**
     * Set MCR's GCL field.
     *
     * Global Configuration Lock
     */
    inline void set_MCR_GCL(XRDC2_D0_MCR_GCL value) volatile
    {
        uint32_t curr = MCR;

        curr &= ~(0b11u << 4u);
        curr |= (std::to_underlying(value) & 0b11u) << 4u;

        MCR = curr;
    }

    /**
     * Get MCR's GVLDC bit.
     *
     * Global Valid Access Control
     */
    inline bool get_MCR_GVLDC() volatile
    {
        return MCR & (1u << 1u);
    }

    /**
     * Set MCR's GVLDC bit.
     *
     * Global Valid Access Control
     */
    inline void set_MCR_GVLDC() volatile
    {
        MCR |= 1u << 1u;
    }

    /**
     * Clear MCR's GVLDC bit.
     *
     * Global Valid Access Control
     */
    inline void clear_MCR_GVLDC() volatile
    {
        MCR &= ~(1u << 1u);
    }

    /**
     * Toggle MCR's GVLDC bit.
     *
     * Global Valid Access Control
     */
    inline void toggle_MCR_GVLDC() volatile
    {
        MCR ^= 1u << 1u;
    }

    /**
     * Get MCR's GVLDM bit.
     *
     * Global Valid MDAC
     */
    inline bool get_MCR_GVLDM() volatile
    {
        return MCR & (1u << 0u);
    }

    /**
     * Set MCR's GVLDM bit.
     *
     * Global Valid MDAC
     */
    inline void set_MCR_GVLDM() volatile
    {
        MCR |= 1u << 0u;
    }

    /**
     * Clear MCR's GVLDM bit.
     *
     * Global Valid MDAC
     */
    inline void clear_MCR_GVLDM() volatile
    {
        MCR &= ~(1u << 0u);
    }

    /**
     * Toggle MCR's GVLDM bit.
     *
     * Global Valid MDAC
     */
    inline void toggle_MCR_GVLDM() volatile
    {
        MCR ^= 1u << 0u;
    }

    /**
     * Get all of MCR's bit fields.
     *
     * (read-write) Module Control Register
     */
    inline void get_MCR(XRDC2_D0_MCR_GCL &GCL, bool &GVLDC,
                        bool &GVLDM) volatile
    {
        uint32_t curr = MCR;

        GCL = XRDC2_D0_MCR_GCL((curr >> 4u) & 0b11u);
        GVLDC = curr & (1u << 1u);
        GVLDM = curr & (1u << 0u);
    }

    /**
     * Set all of MCR's bit fields.
     *
     * (read-write) Module Control Register
     */
    inline void set_MCR(XRDC2_D0_MCR_GCL GCL, bool GVLDC, bool GVLDM) volatile
    {
        uint32_t curr = MCR;

        curr &= ~(0b11u << 4u);
        curr |= (std::to_underlying(GCL) & 0b11u) << 4u;
        curr &= ~(0b1u << 1u);
        curr |= (GVLDC & 0b1u) << 1u;
        curr &= ~(0b1u << 0u);
        curr |= (GVLDM & 0b1u) << 0u;

        MCR = curr;
    }

    /**
     * Get SR's GCLO field.
     *
     * Global Configuration Lock Owner
     */
    inline uint8_t get_SR_GCLO() volatile
    {
        return (SR >> 8u) & 0b1111u;
    }

    /**
     * Get SR's HRL field.
     *
     * Hardware Revision Level
     */
    inline uint8_t get_SR_HRL() volatile
    {
        return (SR >> 4u) & 0b1111u;
    }

    /**
     * Get SR's DIN field.
     *
     * Domain Identifier Number
     */
    inline uint8_t get_SR_DIN() volatile
    {
        return (SR >> 0u) & 0b1111u;
    }

    /**
     * Get all of SR's bit fields.
     *
     * (read-write) Status Register
     */
    inline void get_SR(uint8_t &GCLO, uint8_t &HRL, uint8_t &DIN) volatile
    {
        uint32_t curr = SR;

        GCLO = (curr >> 8u) & 0b1111u;
        HRL = (curr >> 4u) & 0b1111u;
        DIN = (curr >> 0u) & 0b1111u;
    }
};

static_assert(sizeof(xrdc2_d0) == xrdc2_d0::size);

static volatile xrdc2_d0 *const XRDC2_D0 =
    reinterpret_cast<xrdc2_d0 *>(0x40CE0000);

static volatile xrdc2_d0 *const XRDC2_D1 =
    reinterpret_cast<xrdc2_d0 *>(0x40CD0000);

}; // namespace MIMXRT1176::CM4