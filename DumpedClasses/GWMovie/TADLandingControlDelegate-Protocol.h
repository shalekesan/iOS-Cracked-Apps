//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, NSURL;

@protocol TADLandingControlDelegate <NSObject>

@optional
- (_Bool)tadWebViewShouldRecognitionQRCodeByGesture;
- (void)tadWebViewShowRichMediaAd;
- (void)tadWebViewDidFinishLoad;
- (_Bool)shouldOpenUrl:(NSURL *)arg1;
- (void)updateRefreshBtnWithLoadStatus:(_Bool)arg1;
- (void)tadWebViewTitle:(NSString *)arg1;
- (void)tadWebViewCanGoBack:(_Bool)arg1;
- (void)tadWebViewLoadingUpdateProgress:(float)arg1;
@end

