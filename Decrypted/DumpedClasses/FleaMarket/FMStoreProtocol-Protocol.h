//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol FMStoreProtocol <NSObject>
- (NSString *)fileCacheDirPathForModule:(NSString *)arg1;
- (void)clearCache;
- (void)removeCacheForModule:(NSString *)arg1;
- (_Bool)cacheExistForModule:(NSString *)arg1;
- (id <FMCacheProtocol>)cacheForModule:(NSString *)arg1;
- (id <FMCacheProtocol>)defaultCache;
- (void)removeEncryptDatabaseForModule:(NSString *)arg1;
- (void)removeDatabaseForModule:(NSString *)arg1;
- (id <FMDatabaseProtocol>)encryptDatabaseForModule:(NSString *)arg1;
- (id <FMDatabaseProtocol>)databaseForModule:(NSString *)arg1;
- (id <FMDatabaseProtocol>)defaultEncryptDatabase;
- (id <FMDatabaseProtocol>)defaultDatabase;
@end

