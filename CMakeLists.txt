#
# Copyright (c) 2025 Telink Semiconductor
#
# SPDX-License-Identifier: Apache-2.0
#

if (CONFIG_ST25DVXXKC)
	zephyr_include_directories(
		${CMAKE_CURRENT_SOURCE_DIR}/include
	)

    add_subdirectory(st25dvxxkc)
endif()
