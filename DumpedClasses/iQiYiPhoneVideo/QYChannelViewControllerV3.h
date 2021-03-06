//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYBaseCardViewControllerV3.h"

@class NSString;

@interface QYChannelViewControllerV3 : QYBaseCardViewControllerV3
{
    NSString *_channelId;
    NSString *_originalPageUrl;
}

@property(copy, nonatomic) NSString *originalPageUrl; // @synthesize originalPageUrl=_originalPageUrl;
@property(copy, nonatomic) NSString *channelId; // @synthesize channelId=_channelId;
- (void).cxx_destruct;
- (_Bool)shouldSendPingback:(id)arg1 event:(id)arg2 type:(unsigned long long)arg3 ation:(unsigned long long)arg4 cardData:(id)arg5;
- (void)dataLoadManagerFinished:(id)arg1;
- (void)setPageUrlString:(id)arg1;
- (id)appendParametersWithUrl:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)setTitleBarHidden:(_Bool)arg1;
- (void)pullAndRefreshData;
- (void)viewDidLoad;

@end

