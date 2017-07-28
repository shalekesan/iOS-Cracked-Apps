//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TBPageLoadMonitorOnline, TBPerformanceConfigManager, UIViewController;

@interface AliPerformanceMonitorManager : NSObject
{
    TBPageLoadMonitorOnline *_pageLoadMonitorOnline;
    TBPerformanceConfigManager *_pageLoadMonitorConfig;
    id <AliPerformanceMonitorUIProtocol> _extraHandler;
    UIViewController *_lastPushVC;
    CDUnknownBlockType _outputHandlerBlock;
}

+ (void)navigationDidEndTransitionFromView:(id)arg1 toView:(id)arg2;
+ (void)handlePageChange:(long long)arg1 fromVC:(id)arg2 toVC:(id)arg3 args:(id)arg4;
+ (void)viewDidLayoutSubviews:(id)arg1;
+ (void)viewDidAppear:(_Bool)arg1 viewController:(id)arg2;
+ (id)untrackedContainnerClassConfigurationPath;
+ (id)unTrackedContainnerClasses;
+ (id)shareInstance;
+ (void)load;
@property(copy, nonatomic) CDUnknownBlockType outputHandlerBlock; // @synthesize outputHandlerBlock=_outputHandlerBlock;
@property(nonatomic) __weak UIViewController *lastPushVC; // @synthesize lastPushVC=_lastPushVC;
@property(retain, nonatomic) id <AliPerformanceMonitorUIProtocol> extraHandler; // @synthesize extraHandler=_extraHandler;
@property(retain, nonatomic) TBPerformanceConfigManager *pageLoadMonitorConfig; // @synthesize pageLoadMonitorConfig=_pageLoadMonitorConfig;
@property(retain, nonatomic) TBPageLoadMonitorOnline *pageLoadMonitorOnline; // @synthesize pageLoadMonitorOnline=_pageLoadMonitorOnline;
- (void).cxx_destruct;
- (void)setPerformanceOutputHandler:(CDUnknownBlockType)arg1;
- (void)setConfig:(id)arg1;
- (void)setPerformanceMonitorUIHandler:(id)arg1;
- (void)appWillResignActive:(id)arg1;
- (void)dealloc;
- (id)init;

@end

