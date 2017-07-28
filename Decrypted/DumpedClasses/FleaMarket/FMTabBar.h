//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray;

@interface FMTabBar : UIView
{
    NSArray *_tabBarItems;
    id <FMTabBarDelegate> _delegate;
}

@property(retain, nonatomic) NSArray *tabBarItems; // @synthesize tabBarItems=_tabBarItems;
@property(nonatomic) __weak id <FMTabBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)tabBarItemByType:(long long)arg1;
- (void)setTabBarItemSelected:(id)arg1;
- (void)setTabBarItemSelectedIndex:(long long)arg1;
- (void)tabBarItemSelect:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

