//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QZVideoPlayerConfigureDelegate.h"

@class NSString, QZBaseVideoProxyManager;

@interface QZBaseVideoConfigure : NSObject <QZVideoPlayerConfigureDelegate>
{
    long long _totalFileSize;
    QZBaseVideoProxyManager *_sdkProxyManager;
}

@property(retain, nonatomic) QZBaseVideoProxyManager *sdkProxyManager; // @synthesize sdkProxyManager=_sdkProxyManager;
@property(nonatomic) long long totalFileSize; // @synthesize totalFileSize=_totalFileSize;
- (void).cxx_destruct;
- (long long)minBufferBeforePlay:(double)arg1;
- (_Bool)isVideoFromAio;
- (id)videoCompletePathWithURL:(id)arg1 vid:(id)arg2;
- (id)videoInfoPathWithURL:(id)arg1 vid:(id)arg2;
- (id)videoPathWithURL:(id)arg1 vid:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
