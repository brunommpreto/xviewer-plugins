/*
 * peas-version.h
 * This file is part of libpeas
 *
 * libpeas is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * libpeas is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA.
 */

#ifndef __PEAS_VERSION_H__
#define __PEAS_VERSION_H__

/**
 * SECTION:peas-version
 * @short_description: Peas version checking
 *
 * Peas provides macros to check the version of the library at compile-time
 */

/**
 * PEAS_MAJOR_VERSION:
 *
 * Peas major version component (e.g. 1 if %PEAS_VERSION is 1.2.3)
 */
#define PEAS_MAJOR_VERSION              (1)

/**
 * PEAS_MINOR_VERSION:
 *
 * Peas minor version component (e.g. 2 if %PEAS_VERSION is 1.2.3)
 */
#define PEAS_MINOR_VERSION              (30)

/**
 * PEAS_MICRO_VERSION:
 *
 * Peas micro version component (e.g. 3 if %PEAS_VERSION is 1.2.3)
 */
#define PEAS_MICRO_VERSION              (0)

/**
 * PEAS_VERSION
 *
 * Peas version.
 */
#define PEAS_VERSION                    (1.30.0)

/**
 * PEAS_VERSION_S:
 *
 * Peas version, encoded as a string, useful for printing and
 * concatenation.
 */
#define PEAS_VERSION_S                  "1.30.0"

#define PEAS_ENCODE_VERSION(major,minor,micro) \
        ((major) << 24 | (minor) << 16 | (micro) << 8)

/**
 * PEAS_VERSION_HEX:
 *
 * Peas version, encoded as an hexadecimal number, useful for
 * integer comparisons.
 */
#define PEAS_VERSION_HEX \
        (PEAS_ENCODE_VERSION (PEAS_MAJOR_VERSION, PEAS_MINOR_VERSION, PEAS_MICRO_VERSION))

/**
 * PEAS_CHECK_VERSION:
 * @major: required major version
 * @minor: required minor version
 * @micro: required micro version
 *
 * Compile-time version checking. Evaluates to %TRUE if the version
 * of peas is greater than the required one.
 */
#define PEAS_CHECK_VERSION(major,minor,micro)   \
        (PEAS_MAJOR_VERSION > (major) || \
         (PEAS_MAJOR_VERSION == (major) && PEAS_MINOR_VERSION > (minor)) || \
         (PEAS_MAJOR_VERSION == (major) && PEAS_MINOR_VERSION == (minor) && \
          PEAS_MICRO_VERSION >= (micro)))

#endif /* __PEAS_VERSION_H__ */
