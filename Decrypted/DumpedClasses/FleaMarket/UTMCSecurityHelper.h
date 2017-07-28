//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface UTMCSecurityHelper : NSObject
{
    id mSecurityManagerInstance;
    id mSecuritySignatureComp;
    id mSecurityGuardParamContext;
    _Bool mIsOpen;
}

+ (void)isOpenSet;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)getInstance;
- (void).cxx_destruct;
- (id)utmcGetUmidForOpen;
- (id)utmcStaticBinarySafeDecryptNoB64ForOpen:(long long)arg1 forKey:(id)arg2 forNeedProcessValue:(id)arg3;
- (id)signRequestForOpen:(id)arg1 param:(id)arg2 requestType:(long long)arg3;
- (id)getAppKeyForOpen:(int)arg1;
- (void)initSecurityForOpen;
- (id)utmcGetDynamicData:(id)arg1;
- (int)utmcPutDynamicData:(id)arg1 forkey:(id)arg2;
- (id)utmcGetUmidForNotOpen;
- (id)utmcStaticBinarySafeDecryptNoB64ForNotOpen:(long long)arg1 forKey:(id)arg2 forNeedProcessValue:(id)arg3;
- (id)signRequestForNotOpen:(id)arg1 param:(id)arg2 requestType:(long long)arg3;
- (id)getAppKeyForNotOpen:(int)arg1;
- (void)initSecurityForNotOpen;
- (void)setSecurityStatus;
- (id)utmcGetUmid;
- (id)utmcStaticBinarySafeDecryptNoB64:(long long)arg1 forKey:(id)arg2 forNeedProcessValue:(id)arg3;
- (id)signRequest:(id)arg1 param:(id)arg2 requestType:(long long)arg3;
- (id)getAppKey:(int)arg1;
- (_Bool)isOpen;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

