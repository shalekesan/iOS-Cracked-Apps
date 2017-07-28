//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FMEventHandlerProtocol.h"

@class FMContextComponent, NSString;

@interface FMContextEventHandler : NSObject <FMEventHandlerProtocol>
{
    FMContextComponent *_context;
}

@property(nonatomic) __weak FMContextComponent *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)callEventResolver:(id)arg1 data:(id)arg2;
- (id)observedEvents;
- (void)sendEvent:(id)arg1 data:(id)arg2;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

