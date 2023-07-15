/*-------------------------------------------------------------------------
 *
 * reaper.h
 *
 * Copyright (c) 2023, KhulnaSoft-Labs, Inc.
 *
 *-------------------------------------------------------------------------
 */
#ifndef REAPER_H
#define REAPER_H

extern int ttl_expiration_batch_size;
extern int ttl_expiration_threshold;

int DeleteTTLExpiredRows(RangeVar *cvname, RangeVar *matrel);

#endif   /* REAPER_H */
