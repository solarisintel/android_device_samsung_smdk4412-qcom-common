
gps.h and gnss-base.h overwrite copy to hardware/libhardware/include/hardware/

include/hardwareにあるgps.h とgnss-base.h は、
hardware/libhardware/include/hardware/ に上書きコピーしてください。

hardware/interfaces/gnss のソースがなぜかTARGET_SPECIFIC_HEADER_PATHを参照しないためです。

include/telephony/ril.hも同様に上書きコピーです。
find hardware/ril -name ril.h でファイルを検索し、そのファイルに上書きコピーします。



