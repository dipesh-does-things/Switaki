/*
 * Copyright (c) 2020, Switaki-Dev
 *
 * This file is part of Switaki
 *
 * Switaki is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * Switaki is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * with Switaki.  If not, see <https://www.gnu.org/licenses/>.
 */

#include "switaki.h"

static size_t get_image_size(char const *file_path)
{
    struct stat st;

    stat(file_path, &st);
    return (st.st_size);
}

char *read_image(char const *file_path)
{
    int fd;
    char *image;
    size_t image_size;

    fd = open(file_path, O_RDONLY);
    if (fd < 0) {
        return (NULL);
    }
    image_size = get_image_size(file_path);
    image = malloc(sizeof(char) * image_size);
    if (!image) {
        close(fd);
        return (image);
    }
    read(fd, image, image_size);
    close(fd);
    return (image);
}
