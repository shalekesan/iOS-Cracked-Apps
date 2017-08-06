//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NMPlayingListSqliteAccessService : NSObject
{
}

+ (id)sharedInstance;
- (_Bool)removeAllPlayingListWithUserId:(id)arg1 databaseQueue:(id)arg2;
- (_Bool)removeFromPlayingList:(id)arg1 userId:(id)arg2 databaseQueue:(id)arg3;
- (_Bool)insertToTailOfPlayingList:(id)arg1 userId:(id)arg2 databaseQueue:(id)arg3;
- (_Bool)insertToHeadOfPlayingList:(id)arg1 userId:(id)arg2 databaseQueue:(id)arg3;
- (_Bool)updateAllPlayingListEq:(id)arg1 userId:(id)arg2 databaseQueue:(id)arg3;
- (_Bool)updateAllPlayingList:(id)arg1 userId:(id)arg2 databaseQueue:(id)arg3;
- (id)getPlayingListWithUserId:(id)arg1 databaseQueue:(id)arg2;

@end
