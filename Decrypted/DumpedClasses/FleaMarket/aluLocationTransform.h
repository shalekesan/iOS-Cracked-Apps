//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface aluLocationTransform : NSObject
{
}

+ (double)transformLon:(double)arg1 bdLon:(double)arg2;
+ (double)transformLat:(double)arg1 bdLon:(double)arg2;
+ (_Bool)isLocationOutOfChina:(double)arg1 lat:(double)arg2;
+ (void)transformFromWGSToGCJ:(double)arg1 lat:(double)arg2 offsetLon:(double *)arg3 offsetLat:(double *)arg4;
+ (CDStruct_c3b9c2ee)offsetCoordinate:(CDStruct_c3b9c2ee)arg1;

@end

