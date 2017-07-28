//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TBMBMessageReceiver.h"

@class NSMutableSet, NSString;

@interface TBMBDefaultMediator : NSObject <TBMBMessageReceiver>
{
    id <TBMBFacade> _$tbmbFacade;
    NSMutableSet *_$tbmbObserver;
    id _realReceiver;
}

+ (id)mediatorWithRealReceiver:(id)arg1;
+ (id)mediatorWithRealReceiver:(id)arg1 tbmbFacade:(id)arg2;
@property(readonly, nonatomic) id realReceiver; // @synthesize realReceiver=_realReceiver;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_$removeObserver:(id)arg1;
- (void)_$addObserver:(id)arg1;
- (id)_$listObserver;
- (id)listReceiveNotifications;
- (void)handlerNotification:(id)arg1;
- (unsigned long long)notificationKey;
- (id)initWithRealReceiver:(id)arg1;
- (void)close;
- (id)initWithRealReceiver:(id)arg1 tbmbFacade:(id)arg2;
@property(retain, nonatomic) id <TBMBFacade> tbmbFacade;
@property(readonly, nonatomic) id proxyObject;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

