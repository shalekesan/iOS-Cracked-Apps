//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ISecurityGuardStaticDataEncrypt.h"

@class NSString;

@interface SecurityGuardStaticDataEncrypt : NSObject <ISecurityGuardStaticDataEncrypt>
{
}

- (Class)getMetaClass;
- (id)staticBinarySafeDecryptNoB64:(long long)arg1 forKey:(id)arg2 forNeedProcessValue:(id)arg3;
- (id)staticBinarySafeEncryptNoB64:(long long)arg1 forKey:(id)arg2 forNeedProcessValue:(id)arg3;
- (id)staticBinarySafeDecrypt:(long long)arg1 forKey:(id)arg2 forNeedProcessValue:(id)arg3;
- (id)staticBinarySafeEncrypt:(long long)arg1 forKey:(id)arg2 forNeedProcessValue:(id)arg3;
- (id)staticSafeDecrypt:(long long)arg1 forKey:(id)arg2 forNeedProcessValue:(id)arg3;
- (id)staticSafeEncrypt:(long long)arg1 forKey:(id)arg2 forNeedProcessValue:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

