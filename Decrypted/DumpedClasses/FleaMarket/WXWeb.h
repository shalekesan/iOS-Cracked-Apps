//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXComponent.h"

@class NSString, UIViewController;

@interface WXWeb : WXComponent
{
    _Bool _startLoadEvent;
    _Bool _finishLoadEvent;
    _Bool _failLoadEvent;
    UIViewController *_viewController;
    NSString *_url;
}

@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) _Bool failLoadEvent; // @synthesize failLoadEvent=_failLoadEvent;
@property(nonatomic) _Bool finishLoadEvent; // @synthesize finishLoadEvent=_finishLoadEvent;
@property(nonatomic) _Bool startLoadEvent; // @synthesize startLoadEvent=_startLoadEvent;
@property(retain, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (id)baseInfo;
- (void)goForward;
- (void)goBack;
- (void)reload;
- (void)loadURL:(id)arg1;
- (void)addEvent:(id)arg1;
- (void)updateAttributes:(id)arg1;
- (void)viewDidLoad;
- (id)loadView;
- (void)dealloc;
- (id)initWithRef:(id)arg1 type:(id)arg2 styles:(id)arg3 attributes:(id)arg4 events:(id)arg5 weexInstance:(id)arg6;
- (id)webViewController;
- (id)webView;

@end

