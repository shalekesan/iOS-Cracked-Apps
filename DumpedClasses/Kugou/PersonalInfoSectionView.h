//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class KGThemeButton, KGThemeLabel;

@interface PersonalInfoSectionView : UIView
{
    id <PersonalInfoCenterActionDelegate> _delegate;
    long long _personalSection;
    KGThemeLabel *_numLabel;
    KGThemeLabel *_titleLabel;
    KGThemeLabel *_descLabel;
    KGThemeButton *_moreBtn;
}

@property(retain, nonatomic) KGThemeButton *moreBtn; // @synthesize moreBtn=_moreBtn;
@property(retain, nonatomic) KGThemeLabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) KGThemeLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) KGThemeLabel *numLabel; // @synthesize numLabel=_numLabel;
@property(nonatomic) long long personalSection; // @synthesize personalSection=_personalSection;
@property(nonatomic) __weak id <PersonalInfoCenterActionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setSectionCount:(long long)arg1 describe:(id)arg2;
- (void)sectionBtnAction;
- (id)initWithPersonalSection:(long long)arg1;

@end
