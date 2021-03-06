//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ASIHTTPRequest, NSArray, NSMutableArray, NSString;

@interface TADHttpRequest : NSObject
{
    NSString *_requestTag;
    long long _flags;
    id <TADHttpRequestDelegate> _delegate;
    NSMutableArray *_itemList;
    NSArray *_channels;
    NSString *_requestId;
    ASIHTTPRequest *_myRequest;
    NSString *_serverUrl;
    double _startFlag;
    NSArray *_adTypes;
}

+ (id)rtSplashRequestWithDelegate:(id)arg1;
+ (id)requestForItem:(id)arg1 params:(id)arg2 withDelegate:(id)arg3;
+ (id)requestForItem:(id)arg1 withDelegate:(id)arg2;
+ (id)requestForItem:(id)arg1 loadType:(id)arg2 withDelegate:(id)arg3;
+ (id)requestInfiniteStreamForChannel:(id)arg1 infiniteParams:(id)arg2 withDelegate:(id)arg3;
+ (id)requestForChannel:(id)arg1 withDelegate:(id)arg2;
+ (id)requestForPhotosAdWithDelegate:(id)arg1;
+ (id)requestForNewsFlowAdForChannels:(id)arg1 withDelegate:(id)arg2;
+ (id)requestForSplashAdWithDelegate:(id)arg1;
@property(retain, nonatomic) NSArray *adTypes; // @synthesize adTypes=_adTypes;
@property(nonatomic) double startFlag; // @synthesize startFlag=_startFlag;
@property(copy, nonatomic) NSString *serverUrl; // @synthesize serverUrl=_serverUrl;
@property(retain, nonatomic) ASIHTTPRequest *myRequest; // @synthesize myRequest=_myRequest;
@property(copy, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
@property(retain, nonatomic) NSArray *channels; // @synthesize channels=_channels;
@property(retain, nonatomic) NSMutableArray *itemList; // @synthesize itemList=_itemList;
@property(nonatomic) __weak id <TADHttpRequestDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long flags; // @synthesize flags=_flags;
@property(retain, nonatomic) NSString *requestTag; // @synthesize requestTag=_requestTag;
- (void).cxx_destruct;
- (long long)requestTimeCost;
- (void)dealloc;
- (void)clearDelegatesAndCancel;
- (void)requestFailed:(id)arg1;
- (void)p_updateIndexForAdType:(id)arg1 widthIndexMap:(id)arg2 inChannel:(id)arg3;
- (void)requestFinished:(id)arg1;
- (void)requestStarted:(id)arg1;
- (void)requestForChannels:(id)arg1 WithAdTypes:(id)arg2 loadType:(id)arg3 adParams:(id)arg4;
- (void)requestForChannels:(id)arg1 WithAdTypes:(id)arg2 loadType:(id)arg3;
- (id)adPublisherURLString;
- (id)init;

@end

