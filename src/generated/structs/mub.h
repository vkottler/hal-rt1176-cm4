/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include "../enums/MUB_CR_Fn.h"
#include "../enums/MUB_CR_GIEn.h"
#include "../enums/MUB_CR_GIRn.h"
#include "../enums/MUB_CR_RIEn.h"
#include "../enums/MUB_CR_TIEn.h"
#include "../enums/MUB_SR_Fn.h"
#include "../enums/MUB_SR_GIPn.h"
#include "../enums/MUB_SR_RFn.h"
#include "../enums/MUB_SR_TEn.h"
#include "../ifgen/common.h"

namespace MIMXRT1176::CM4
{

/**
 * MUB
 */
struct [[gnu::packed]] mub
{
    /* Constant attributes. */
    static constexpr std::size_t size = 40; /*!< mub's size in bytes. */

    /* Fields. */
    uint32_t TR0; /*!< (read-write) Processor B Transmit Register 0 */
    uint32_t TR1; /*!< (read-write) Processor B Transmit Register 1 */
    uint32_t TR2; /*!< (read-write) Processor B Transmit Register 2 */
    uint32_t TR3; /*!< (read-write) Processor B Transmit Register 3 */
    uint32_t RR0; /*!< (read-write) Processor B Receive Register 0 */
    uint32_t RR1; /*!< (read-write) Processor B Receive Register 1 */
    uint32_t RR2; /*!< (read-write) Processor B Receive Register 2 */
    uint32_t RR3; /*!< (read-write) Processor B Receive Register 3 */
    uint32_t SR;  /*!< (read-write) Processor B Status Register */
    uint32_t CR;  /*!< (read-write) Processor B Control Register */

    /* Methods. */

    /**
     * Get TR0's DATA field.
     *
     * TR0
     */
    inline uint32_t get_TR0_DATA() volatile
    {
        return (TR0 >> 0u) & 0b11111111111111111111111111111111u;
    }

    /**
     * Set TR0's DATA field.
     *
     * TR0
     */
    inline void set_TR0_DATA(uint32_t value) volatile
    {
        uint32_t curr = TR0;

        curr &= ~(0b11111111111111111111111111111111u << 0u);
        curr |= (value & 0b11111111111111111111111111111111u) << 0u;

        TR0 = curr;
    }

    /**
     * Get TR1's DATA field.
     *
     * TR1
     */
    inline uint32_t get_TR1_DATA() volatile
    {
        return (TR1 >> 0u) & 0b11111111111111111111111111111111u;
    }

    /**
     * Set TR1's DATA field.
     *
     * TR1
     */
    inline void set_TR1_DATA(uint32_t value) volatile
    {
        uint32_t curr = TR1;

        curr &= ~(0b11111111111111111111111111111111u << 0u);
        curr |= (value & 0b11111111111111111111111111111111u) << 0u;

        TR1 = curr;
    }

    /**
     * Get TR2's DATA field.
     *
     * TR2
     */
    inline uint32_t get_TR2_DATA() volatile
    {
        return (TR2 >> 0u) & 0b11111111111111111111111111111111u;
    }

    /**
     * Set TR2's DATA field.
     *
     * TR2
     */
    inline void set_TR2_DATA(uint32_t value) volatile
    {
        uint32_t curr = TR2;

        curr &= ~(0b11111111111111111111111111111111u << 0u);
        curr |= (value & 0b11111111111111111111111111111111u) << 0u;

        TR2 = curr;
    }

    /**
     * Get TR3's DATA field.
     *
     * TR3
     */
    inline uint32_t get_TR3_DATA() volatile
    {
        return (TR3 >> 0u) & 0b11111111111111111111111111111111u;
    }

    /**
     * Set TR3's DATA field.
     *
     * TR3
     */
    inline void set_TR3_DATA(uint32_t value) volatile
    {
        uint32_t curr = TR3;

        curr &= ~(0b11111111111111111111111111111111u << 0u);
        curr |= (value & 0b11111111111111111111111111111111u) << 0u;

        TR3 = curr;
    }

    /**
     * Get RR0's DATA field.
     *
     * RR0
     */
    inline uint32_t get_RR0_DATA() volatile
    {
        return (RR0 >> 0u) & 0b11111111111111111111111111111111u;
    }

    /**
     * Get RR1's DATA field.
     *
     * RR1
     */
    inline uint32_t get_RR1_DATA() volatile
    {
        return (RR1 >> 0u) & 0b11111111111111111111111111111111u;
    }

    /**
     * Get RR2's DATA field.
     *
     * RR2
     */
    inline uint32_t get_RR2_DATA() volatile
    {
        return (RR2 >> 0u) & 0b11111111111111111111111111111111u;
    }

    /**
     * Get RR3's DATA field.
     *
     * RR3
     */
    inline uint32_t get_RR3_DATA() volatile
    {
        return (RR3 >> 0u) & 0b11111111111111111111111111111111u;
    }

    /**
     * Get SR's GIPn field.
     *
     * GIPn
     */
    inline MUB_SR_GIPn get_SR_GIPn() volatile
    {
        return MUB_SR_GIPn((SR >> 28u) & 0b1111u);
    }

    /**
     * Set SR's GIPn field.
     *
     * GIPn
     */
    inline void set_SR_GIPn(MUB_SR_GIPn value) volatile
    {
        uint32_t curr = SR;

        curr &= ~(0b1111u << 28u);
        curr |= (std::to_underlying(value) & 0b1111u) << 28u;

        SR = curr;
    }

    /**
     * Get SR's RFn field.
     *
     * RFn
     */
    inline MUB_SR_RFn get_SR_RFn() volatile
    {
        return MUB_SR_RFn((SR >> 24u) & 0b1111u);
    }

    /**
     * Get SR's TEn field.
     *
     * TEn
     */
    inline MUB_SR_TEn get_SR_TEn() volatile
    {
        return MUB_SR_TEn((SR >> 20u) & 0b1111u);
    }

    /**
     * Get SR's FUP bit.
     *
     * FUP
     */
    inline bool get_SR_FUP() volatile
    {
        return SR & (1u << 8u);
    }

    /**
     * Get SR's RS bit.
     *
     * RS
     */
    inline bool get_SR_RS() volatile
    {
        return SR & (1u << 7u);
    }

    /**
     * Get SR's EP bit.
     *
     * EP
     */
    inline bool get_SR_EP() volatile
    {
        return SR & (1u << 4u);
    }

    /**
     * Get SR's Fn field.
     *
     * Fn
     */
    inline MUB_SR_Fn get_SR_Fn() volatile
    {
        return MUB_SR_Fn((SR >> 0u) & 0b111u);
    }

    /**
     * Get all of SR's bit fields.
     *
     * (read-write) Processor B Status Register
     */
    inline void get_SR(MUB_SR_GIPn &GIPn, MUB_SR_RFn &RFn, MUB_SR_TEn &TEn,
                       bool &FUP, bool &RS, bool &EP, MUB_SR_Fn &Fn) volatile
    {
        uint32_t curr = SR;

        GIPn = MUB_SR_GIPn((curr >> 28u) & 0b1111u);
        RFn = MUB_SR_RFn((curr >> 24u) & 0b1111u);
        TEn = MUB_SR_TEn((curr >> 20u) & 0b1111u);
        FUP = curr & (1u << 8u);
        RS = curr & (1u << 7u);
        EP = curr & (1u << 4u);
        Fn = MUB_SR_Fn((curr >> 0u) & 0b111u);
    }

    /**
     * Get CR's GIEn field.
     *
     * GIEn
     */
    inline MUB_CR_GIEn get_CR_GIEn() volatile
    {
        return MUB_CR_GIEn((CR >> 28u) & 0b1111u);
    }

    /**
     * Set CR's GIEn field.
     *
     * GIEn
     */
    inline void set_CR_GIEn(MUB_CR_GIEn value) volatile
    {
        uint32_t curr = CR;

        curr &= ~(0b1111u << 28u);
        curr |= (std::to_underlying(value) & 0b1111u) << 28u;

        CR = curr;
    }

    /**
     * Get CR's RIEn field.
     *
     * RIEn
     */
    inline MUB_CR_RIEn get_CR_RIEn() volatile
    {
        return MUB_CR_RIEn((CR >> 24u) & 0b1111u);
    }

    /**
     * Set CR's RIEn field.
     *
     * RIEn
     */
    inline void set_CR_RIEn(MUB_CR_RIEn value) volatile
    {
        uint32_t curr = CR;

        curr &= ~(0b1111u << 24u);
        curr |= (std::to_underlying(value) & 0b1111u) << 24u;

        CR = curr;
    }

    /**
     * Get CR's TIEn field.
     *
     * TIEn
     */
    inline MUB_CR_TIEn get_CR_TIEn() volatile
    {
        return MUB_CR_TIEn((CR >> 20u) & 0b1111u);
    }

    /**
     * Set CR's TIEn field.
     *
     * TIEn
     */
    inline void set_CR_TIEn(MUB_CR_TIEn value) volatile
    {
        uint32_t curr = CR;

        curr &= ~(0b1111u << 20u);
        curr |= (std::to_underlying(value) & 0b1111u) << 20u;

        CR = curr;
    }

    /**
     * Get CR's GIRn field.
     *
     * GIRn
     */
    inline MUB_CR_GIRn get_CR_GIRn() volatile
    {
        return MUB_CR_GIRn((CR >> 16u) & 0b1111u);
    }

    /**
     * Set CR's GIRn field.
     *
     * GIRn
     */
    inline void set_CR_GIRn(MUB_CR_GIRn value) volatile
    {
        uint32_t curr = CR;

        curr &= ~(0b1111u << 16u);
        curr |= (std::to_underlying(value) & 0b1111u) << 16u;

        CR = curr;
    }

    /**
     * Get CR's Fn field.
     *
     * Fn
     */
    inline MUB_CR_Fn get_CR_Fn() volatile
    {
        return MUB_CR_Fn((CR >> 0u) & 0b111u);
    }

    /**
     * Set CR's Fn field.
     *
     * Fn
     */
    inline void set_CR_Fn(MUB_CR_Fn value) volatile
    {
        uint32_t curr = CR;

        curr &= ~(0b111u << 0u);
        curr |= (std::to_underlying(value) & 0b111u) << 0u;

        CR = curr;
    }

    /**
     * Get all of CR's bit fields.
     *
     * (read-write) Processor B Control Register
     */
    inline void get_CR(MUB_CR_GIEn &GIEn, MUB_CR_RIEn &RIEn, MUB_CR_TIEn &TIEn,
                       MUB_CR_GIRn &GIRn, MUB_CR_Fn &Fn) volatile
    {
        uint32_t curr = CR;

        GIEn = MUB_CR_GIEn((curr >> 28u) & 0b1111u);
        RIEn = MUB_CR_RIEn((curr >> 24u) & 0b1111u);
        TIEn = MUB_CR_TIEn((curr >> 20u) & 0b1111u);
        GIRn = MUB_CR_GIRn((curr >> 16u) & 0b1111u);
        Fn = MUB_CR_Fn((curr >> 0u) & 0b111u);
    }

    /**
     * Set all of CR's bit fields.
     *
     * (read-write) Processor B Control Register
     */
    inline void set_CR(MUB_CR_GIEn GIEn, MUB_CR_RIEn RIEn, MUB_CR_TIEn TIEn,
                       MUB_CR_GIRn GIRn, MUB_CR_Fn Fn) volatile
    {
        uint32_t curr = CR;

        curr &= ~(0b1111u << 28u);
        curr |= (std::to_underlying(GIEn) & 0b1111u) << 28u;
        curr &= ~(0b1111u << 24u);
        curr |= (std::to_underlying(RIEn) & 0b1111u) << 24u;
        curr &= ~(0b1111u << 20u);
        curr |= (std::to_underlying(TIEn) & 0b1111u) << 20u;
        curr &= ~(0b1111u << 16u);
        curr |= (std::to_underlying(GIRn) & 0b1111u) << 16u;
        curr &= ~(0b111u << 0u);
        curr |= (std::to_underlying(Fn) & 0b111u) << 0u;

        CR = curr;
    }
};

static_assert(sizeof(mub) == mub::size);

static volatile mub *const MUB = reinterpret_cast<mub *>(0x40C4C000);

}; // namespace MIMXRT1176::CM4