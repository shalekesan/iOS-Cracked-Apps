//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, TBIUCache;

@interface FMMediaCache : NSObject
{
    TBIUCache *_cache;
    NSString *_moduleName;
    unsigned long long _bytesLimitForSingleFile;
    unsigned long long _bytesLimitForAll;
    unsigned long long _maxAge;
}

+ (void)clearCache;
+ (id)defaultCache;
+ (id)cacheForModule:(id)arg1;
@property(nonatomic) unsigned long long maxAge; // @synthesize maxAge=_maxAge;
@property(nonatomic) unsigned long long bytesLimitForAll; // @synthesize bytesLimitForAll=_bytesLimitForAll;
@property(nonatomic) unsigned long long bytesLimitForSingleFile; // @synthesize bytesLimitForSingleFile=_bytesLimitForSingleFile;
@property(readonly, copy, nonatomic) NSString *moduleName; // @synthesize moduleName=_moduleName;
- (void).cxx_destruct;
- (void)trimToLimitBytes;
- (unsigned long long)totalBytes;
- (void)trimToBytes:(unsigned long long)arg1;
- (void)trimToExpirationDate:(id)arg1;
- (unsigned long long)objectCount;
- (id)pathForKey:(id)arg1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (_Bool)containsObjectForKey:(id)arg1;
- (void)objectForKey:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2 toMemory:(_Bool)arg3;
- (void)dealloc;
- (id)initWithModuleName:(id)arg1;
- (id)init;

@end

