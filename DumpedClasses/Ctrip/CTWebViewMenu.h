//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KxMenuView;

@interface CTWebViewMenu : NSObject
{
    KxMenuView *_menuView;
    _Bool _observing;
}

+ (void)setTitleFont:(id)arg1;
+ (id)titleFont;
+ (void)dismissMenu;
+ (void)showMenuInView:(id)arg1 fromRect:(struct CGRect)arg2 menuItems:(id)arg3;
+ (id)sharedMenu;
- (void).cxx_destruct;
- (void)orientationWillChange:(id)arg1;
- (void)dismissMenu;
- (void)showMenuInView:(id)arg1 fromRect:(struct CGRect)arg2 menuItems:(id)arg3;
- (void)dealloc;
- (id)init;

@end
