/*
 * MIT License
 *
 * Copyright (c) 2021 Yago Fontoura do Rosário <yago.rosario@hotmail.com.br>
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 *
 */

/**
 * @file hash_table.h
 *
 * @author Yago Fontoura do Rosario <yago.rosario@hotmail.com.br>
 */

#ifndef HASH_TABLE_ITERATOR_H
#define HASH_TABLE_ITERATOR_H

#include <stdint.h>

#include "hash_table.h"

typedef struct {
  uint32_t      current;
  hash_table_t *hash_table;
} hash_table_iterator_t;

uint8_t hash_table_iterator_init(hash_table_iterator_t *hash_table_iterator,
    hash_table_t *hash_table);

uint8_t hash_table_iterator_next(hash_table_iterator_t *hash_table_iterator,
    hash_table_t *hash_table, uint8_t *key, uint8_t *data);

#endif /* HASH_TABLE_ITERATOR_H */
