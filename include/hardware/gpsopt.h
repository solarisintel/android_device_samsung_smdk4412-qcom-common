/*
 * Copyright (C) 2010 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ANDROID_INCLUDE_HARDWARE_GPS_OPT_H
#define ANDROID_INCLUDE_HARDWARE_GPS_OPT_H

#include <stdint.h>
#include <sys/cdefs.h>
#include <sys/types.h>
#include <pthread.h>
#include <sys/socket.h>
#include <stdbool.h>

#include <hardware/hardware.h>

__BEGIN_DECLS

/* IMPORTANT: Note that the following values must match
 * constants in GpsLocationProvider.java. */
#define GPS_DELETE_EPHEMERIS                     0x00000001
#define GPS_DELETE_ALMANAC                       0x00000002
#define GPS_DELETE_POSITION                      0x00000004
#define GPS_DELETE_TIME                          0x00000008
#define GPS_DELETE_IONO                          0x00000010
#define GPS_DELETE_UTC                           0x00000020
#define GPS_DELETE_HEALTH                        0x00000040
#define GPS_DELETE_SVDIR                         0x00000080
#define GPS_DELETE_SVSTEER                       0x00000100
#define GPS_DELETE_SADATA                        0x00000200
#define GPS_DELETE_RTI                           0x00000400
#define GPS_DELETE_CELLDB_INFO                   0x00000800
#define GPS_DELETE_ALMANAC_CORR                  0x00001000
#define GPS_DELETE_FREQ_BIAS_EST                 0x00002000
#define GLO_DELETE_EPHEMERIS                     0x00004000
#define GLO_DELETE_ALMANAC                       0x00008000
#define GLO_DELETE_SVDIR                         0x00010000
#define GLO_DELETE_SVSTEER                       0x00020000
#define GLO_DELETE_ALMANAC_CORR                  0x00040000
#define GPS_DELETE_TIME_GPS                      0x00080000
#define GLO_DELETE_TIME                          0x00100000
#define BDS_DELETE_SVDIR                         0X00200000
#define BDS_DELETE_SVSTEER                       0X00400000
#define BDS_DELETE_TIME                          0X00800000
#define BDS_DELETE_ALMANAC_CORR                  0X01000000
#define BDS_DELETE_EPHEMERIS                     0X02000000
#define BDS_DELETE_ALMANAC                       0X04000000

#define GPS_DELETE_ALL                           0xFFFFFFFF

__END_DECLS

#endif /* ANDROID_INCLUDE_HARDWARE_GPSOPT_H */

