//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface KuBiRechargeBLL : NSObject
{
}

- (void)consumeOrder:(id)arg1 AndStoreKey:(id)arg2 AndGoodsEntity:(id)arg3 AndSourceId:(id)arg4 AndSongHash:(id)arg5 AndRepBlock:(CDUnknownBlockType)arg6 AndErrorBlock:(CDUnknownBlockType)arg7;
- (void)createRechargeOrderWithSourceId:(id)arg1 songHash:(id)arg2 RepBlock:(CDUnknownBlockType)arg3 AndErrorBlock:(CDUnknownBlockType)arg4;
- (void)saveStoreKey:(id)arg1 AndRepBlock:(CDUnknownBlockType)arg2 AndErrorBlock:(CDUnknownBlockType)arg3;

@end
