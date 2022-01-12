/*
 * File name attribute ($FILE_NAME) functions
 *
 * Copyright (C) 2010-2022, Joachim Metz <joachim.metz@gmail.com>
 *
 * Refer to AUTHORS for acknowledgements.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#if !defined( _LIBFSNTFS_FILE_NAME_ATTRIBUTE_H )
#define _LIBFSNTFS_FILE_NAME_ATTRIBUTE_H

#include <common.h>
#include <types.h>

#include "libfsntfs_extern.h"
#include "libfsntfs_libcerror.h"
#include "libfsntfs_types.h"

#if defined( __cplusplus )
extern "C" {
#endif

LIBFSNTFS_EXTERN \
int libfsntfs_file_name_attribute_get_parent_file_reference(
     libfsntfs_attribute_t *attribute,
     uint64_t *parent_file_reference,
     libcerror_error_t **error );

LIBFSNTFS_EXTERN \
int libfsntfs_file_name_attribute_get_creation_time(
     libfsntfs_attribute_t *attribute,
     uint64_t *filetime,
     libcerror_error_t **error );

LIBFSNTFS_EXTERN \
int libfsntfs_file_name_attribute_get_modification_time(
     libfsntfs_attribute_t *attribute,
     uint64_t *filetime,
     libcerror_error_t **error );

LIBFSNTFS_EXTERN \
int libfsntfs_file_name_attribute_get_access_time(
     libfsntfs_attribute_t *attribute,
     uint64_t *filetime,
     libcerror_error_t **error );

LIBFSNTFS_EXTERN \
int libfsntfs_file_name_attribute_get_entry_modification_time(
     libfsntfs_attribute_t *attribute,
     uint64_t *filetime,
     libcerror_error_t **error );

LIBFSNTFS_EXTERN \
int libfsntfs_file_name_attribute_get_file_attribute_flags(
     libfsntfs_attribute_t *attribute,
     uint32_t *file_attribute_flags,
     libcerror_error_t **error );

LIBFSNTFS_EXTERN \
int libfsntfs_file_name_attribute_get_name_space(
     libfsntfs_attribute_t *attribute,
     uint8_t *name_space,
     libcerror_error_t **error );

LIBFSNTFS_EXTERN \
int libfsntfs_file_name_attribute_get_utf8_name_size(
     libfsntfs_attribute_t *attribute,
     size_t *utf8_string_size,
     libcerror_error_t **error );

LIBFSNTFS_EXTERN \
int libfsntfs_file_name_attribute_get_utf8_name(
     libfsntfs_attribute_t *attribute,
     uint8_t *utf8_string,
     size_t utf8_string_size,
     libcerror_error_t **error );

LIBFSNTFS_EXTERN \
int libfsntfs_file_name_attribute_get_utf16_name_size(
     libfsntfs_attribute_t *attribute,
     size_t *utf16_string_size,
     libcerror_error_t **error );

LIBFSNTFS_EXTERN \
int libfsntfs_file_name_attribute_get_utf16_name(
     libfsntfs_attribute_t *attribute,
     uint16_t *utf16_string,
     size_t utf16_string_size,
     libcerror_error_t **error );

#if defined( __cplusplus )
}
#endif

#endif /* !defined( _LIBFSNTFS_FILE_NAME_ATTRIBUTE_H ) */

