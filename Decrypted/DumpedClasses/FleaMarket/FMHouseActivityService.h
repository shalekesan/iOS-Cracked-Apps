//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FMBaseService.h"

@interface FMHouseActivityService : FMBaseService
{
}

+ (void)getHouseScanInfoWithOrderId:(id)arg1 ItemId:(id)arg2 Gps:(id)arg3 result:(CDUnknownBlockType)arg4;
+ (void)getHouseReserveInfoWithItemId:(id)arg1 result:(CDUnknownBlockType)arg2;
+ (void)getHouseCouponWithItemId:(id)arg1 sellerId:(id)arg2 bizOrderId:(id)arg3 onlyArDIDI:(id)arg4 result:(CDUnknownBlockType)arg5;

@end

