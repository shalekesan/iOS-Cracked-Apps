//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WVBridgeHandlerInfo.h"

@class NSString;

@interface WVBridgeComplexHandlerInfo : WVBridgeHandlerInfo
{
    NSString *_className;
    unsigned long long _instanceScope;
}

@property(readonly, nonatomic) unsigned long long instanceScope; // @synthesize instanceScope=_instanceScope;
@property(readonly, nonatomic) NSString *className; // @synthesize className=_className;
- (void).cxx_destruct;
- (void)invoke:(id)arg1 withParams:(id)arg2 withCallbackContext:(id)arg3 withContext:(id)arg4;
- (id)createInstance;

@end

