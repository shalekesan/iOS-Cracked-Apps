//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface XAdUtils : NSObject
{
}

+ (id)formatIPV4Address:(struct in_addr)arg1;
+ (id)formatIPV6Address:(struct in6_addr)arg1;
+ (struct CGRect)getCorrectRectByOSWhenPAD:(struct CGRect)arg1;
+ (int)getNetworkType;
+ (void)getTelephonyInfo;
+ (id)netWorkType;
+ (id)carrier;
+ (id)getCarrierName;
+ (_Bool)isTablet;
+ (id)deviceIPAdress;
+ (id)idfa;
+ (int)getScreenHeight;
+ (int)getScreenWidth;
+ (id)OpenUDID;

@end

