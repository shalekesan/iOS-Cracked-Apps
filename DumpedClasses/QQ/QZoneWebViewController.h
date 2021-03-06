//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQPAAlbumWebViewController.h"

@class NSDictionary, NSString;

@interface QZoneWebViewController : QQPAAlbumWebViewController
{
    double _startLoadAbsoluteTime;
    double _blogDetailPageLoadTime;
    double _endLoadAbsoluteTime;
    double _startStayAbsoluteTime;
    double _endStayAbsoluteTime;
    unsigned char _isComleteLoad;
    _Bool _isLoadDefaulFailURL;
    int _startLoadCalledCount;
    _Bool _isAdvLoadReported;
    _Bool _isAdvBrowerReported;
    _Bool _isGDTPage;
    _Bool _isBlogDetailWebPage;
    _Bool _isLoadSucc;
    NSString *_strRdmReportEventName;
    NSString *_nextControllerLBTitle;
    NSDictionary *_feedCookie;
}

@property(nonatomic) _Bool isLoadSucc; // @synthesize isLoadSucc=_isLoadSucc;
@property(nonatomic) _Bool isBlogDetailWebPage; // @synthesize isBlogDetailWebPage=_isBlogDetailWebPage;
@property(retain, nonatomic) NSDictionary *feedCookie; // @synthesize feedCookie=_feedCookie;
@property(nonatomic) _Bool isGDTPage; // @synthesize isGDTPage=_isGDTPage;
@property(copy, nonatomic) NSString *nextControllerLBTitle; // @synthesize nextControllerLBTitle=_nextControllerLBTitle;
@property(copy, nonatomic) NSString *strRdmReportEventName; // @synthesize strRdmReportEventName=_strRdmReportEventName;
- (void).cxx_destruct;
- (void)reportWebviewDisappear;
- (void)onApplicationDidBecomeActiveNotify:(id)arg1;
- (void)onApplicationDidEnterBackgroundNotify:(id)arg1;
- (id)GetCurrentTitle;
- (void)reportGDTPageLoadingTime:(unsigned long long)arg1 loadSucc:(_Bool)arg2;
- (void)reportUnLoadComplete;
- (void)reportDataToRdm:(_Bool)arg1 error:(id)arg2;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)setWebViewBgcolor:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWith:(id)arg1 forStyle:(long long)arg2;

@end

