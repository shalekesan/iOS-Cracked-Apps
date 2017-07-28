//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UINavigationControllerDelegate.h"

@class FMItemDO, FMMaskView, FMPostServiceMenuListView, NSMutableArray, NSMutableDictionary, NSString, UIImageView, UILabel, UIView;

@interface FMPostItemComponent : NSObject <UINavigationControllerDelegate>
{
    _Bool _hasDraft;
    _Bool _isMenuShowing;
    _Bool _closeEnable;
    _Bool _otherViewHasInit;
    _Bool _hasResell;
    _Bool _hasGuideShowed;
    unsigned int _from;
    FMItemDO *_itemDO;
    UILabel *_titleLabel;
    FMPostServiceMenuListView *_menuListView;
    UIImageView *_guideView;
    UIImageView *_resellIcon;
    FMMaskView *_maskView;
    UIView *_maskContentView;
    NSMutableDictionary *_animationDic;
    NSMutableDictionary *_reverseanimationDic;
    NSMutableArray *_titleLabelArray;
    NSMutableArray *_buttonArray;
    NSMutableArray *_menuViewsArray;
}

+ (void)postWithItemDO:(id)arg1 from:(unsigned int)arg2;
+ (void)postWithItemDO:(id)arg1;
+ (void)post;
+ (id)instance;
@property(nonatomic) _Bool hasGuideShowed; // @synthesize hasGuideShowed=_hasGuideShowed;
@property(nonatomic) _Bool hasResell; // @synthesize hasResell=_hasResell;
@property(nonatomic) _Bool otherViewHasInit; // @synthesize otherViewHasInit=_otherViewHasInit;
@property(nonatomic) _Bool closeEnable; // @synthesize closeEnable=_closeEnable;
@property(nonatomic) _Bool isMenuShowing; // @synthesize isMenuShowing=_isMenuShowing;
@property(nonatomic) _Bool hasDraft; // @synthesize hasDraft=_hasDraft;
@property(retain, nonatomic) NSMutableArray *menuViewsArray; // @synthesize menuViewsArray=_menuViewsArray;
@property(retain, nonatomic) NSMutableArray *buttonArray; // @synthesize buttonArray=_buttonArray;
@property(retain, nonatomic) NSMutableArray *titleLabelArray; // @synthesize titleLabelArray=_titleLabelArray;
@property(retain, nonatomic) NSMutableDictionary *reverseanimationDic; // @synthesize reverseanimationDic=_reverseanimationDic;
@property(retain, nonatomic) NSMutableDictionary *animationDic; // @synthesize animationDic=_animationDic;
@property(retain, nonatomic) UIView *maskContentView; // @synthesize maskContentView=_maskContentView;
@property(retain, nonatomic) FMMaskView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIImageView *resellIcon; // @synthesize resellIcon=_resellIcon;
@property(retain, nonatomic) UIImageView *guideView; // @synthesize guideView=_guideView;
@property(retain, nonatomic) FMPostServiceMenuListView *menuListView; // @synthesize menuListView=_menuListView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) unsigned int from; // @synthesize from=_from;
@property(retain, nonatomic) FMItemDO *itemDO; // @synthesize itemDO=_itemDO;
- (void).cxx_destruct;
- (void)wrapOpenURLWithParams:(id)arg1 from:(unsigned long long)arg2;
- (void)presentAlbumControllerWithHasResell:(_Bool)arg1 fromType:(unsigned long long)arg2;
- (void)viewTapped:(long long)arg1;
- (id)labelWithText:(id)arg1;
- (id)buttonWithImage:(id)arg1;
- (void)closeMask;
- (void)closeMenu:(_Bool)arg1;
- (id)createAlphaAnimation;
- (id)reverseAnimation:(id)arg1;
- (void)setTitleLabelShowAtIndex:(long long)arg1 delay:(double)arg2;
- (void)setTitleLabelHidden;
- (void)openMenu;
- (void)generateAnimation;
- (void)setButtomEnable:(_Bool)arg1;
- (void)resetTitleLabelFrame;
- (void)postWithItemDO:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

