//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class XDb, XMemoryCache;

@interface XCache : NSObject
{
    XMemoryCache *_MemCache;
    CDUnknownBlockType _NewEntry;
    CDUnknownBlockType _StorageSaveEntry;
    CDUnknownBlockType _StorageQueryEntry;
    CDUnknownBlockType _NetQueryEntry;
    double _CacheAge;
    XDb *_Db;
}

+ (id)cacheOf:(id)arg1;
+ (id)makeCache:(id)arg1 withNewEntry:(CDUnknownBlockType)arg2 andStorageSave:(CDUnknownBlockType)arg3 andStorageQuery:(CDUnknownBlockType)arg4 andNetQuery:(CDUnknownBlockType)arg5;
@property __weak XDb *Db; // @synthesize Db=_Db;
@property double CacheAge; // @synthesize CacheAge=_CacheAge;
@property(copy) CDUnknownBlockType NetQueryEntry; // @synthesize NetQueryEntry=_NetQueryEntry;
@property(copy) CDUnknownBlockType StorageQueryEntry; // @synthesize StorageQueryEntry=_StorageQueryEntry;
@property(copy) CDUnknownBlockType StorageSaveEntry; // @synthesize StorageSaveEntry=_StorageSaveEntry;
@property(copy) CDUnknownBlockType NewEntry; // @synthesize NewEntry=_NewEntry;
@property(retain) XMemoryCache *MemCache; // @synthesize MemCache=_MemCache;
- (void).cxx_destruct;
- (void)close;
- (void)onNet:(id)arg1 inWay:(int)arg2 withHit:(_Bool)arg3;
- (void)onStorage:(id)arg1 inWay:(int)arg2 withHit:(_Bool)arg3;
- (void)removeKey:(id)arg1;
- (void)changeKey:(id)arg1 for:(id)arg2;
- (id)cacheObjForKey:(id)arg1 inWay:(int)arg2;
- (id)objectForKey:(id)arg1 inWay:(int)arg2;
- (id)name;

@end

