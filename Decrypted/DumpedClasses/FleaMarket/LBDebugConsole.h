//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDateFormatter, NSMutableArray, NSMutableDictionary, NSString, UIButton, UIViewController, UIWindow;

@interface LBDebugConsole : NSObject
{
    NSMutableDictionary *_consoleInfo;
    UIButton *_consoleButton;
    NSMutableDictionary *_performanceDict;
    NSMutableArray *_performanceInfo;
    NSDateFormatter *_dateFormatter;
    NSString *_logText;
    UIViewController *_rootCtr;
    UIWindow *_rootWindow;
    _Bool _debugConsoleVisiable;
    _Bool _consoleEnable;
    id <RangerDelegate> _delegate;
}

+ (id)shareInstance;
@property __weak id <RangerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)alert;
- (void)mark;
- (void)success;
- (void)showBlinkWithColor:(id)arg1;
- (void)clearPerformanceLog;
- (id)performanceLog;
- (void)addEfficiencyLog:(unsigned long long)arg1 end:(unsigned long long)arg2;
- (double)endPerformanceForKey:(id)arg1;
- (void)startPerformanceForKey:(id)arg1;
- (id)textLog;
- (void)clearTextLog;
- (void)addTextLog:(id)arg1;
- (id)consoleInfo;
- (id)consoleInfoForTitle:(id)arg1;
- (void)addConsoleInfo:(id)arg1;
- (void)setRootCtr:(id)arg1;
- (void)onDebugWindowShow:(id)arg1;
- (void)switchRangerDebugConsole;
- (void)switchRangerDebugConsoleWithFrame:(struct CGRect)arg1;
- (_Bool)isRangerDebugConsoleVisiable;
- (void)setRangerDebugConsoleVisiable:(_Bool)arg1;
- (void)setConsoleEnable:(_Bool)arg1;
- (_Bool)isConsoleEnable;
- (id)rootWindow;
- (id)init;
- (void)setRootWindow:(id)arg1;

@end

