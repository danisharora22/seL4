/*
 * Copyright 2016, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(D61_GPL)
 */

#ifndef __LIBSEL4_SEL4_SEL4_ARCH_MAPPING_H_
#define __LIBSEL4_SEL4_SEL4_ARCH_MAPPING_H_

#define SEL4_MAPPING_LOOKUP_LEVEL 2
#define SEL4_MAPPING_LOOKUP_NO_PT 21
#define SEL4_MAPPING_LOOKUP_NO_PD 30
#define SEL4_MAPPING_LOOKUP_NO_PUD 39

LIBSEL4_INLINE_FUNC seL4_Word seL4_MappingFailedLookupLevel(void)
{
    return seL4_GetMR(SEL4_MAPPING_LOOKUP_LEVEL);
}

#endif /* __LIBSEL4_SEL4_SEL4_ARCH_MAPPING_H_ */
