//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "FMComponentViewProtocol.h"

@class NSString, UIImageView, UILabel;

@interface FMFilterLocalGpsInfoView : UIView <FMComponentViewProtocol>
{
    _Bool _isRefreshing;
    UILabel *_titleLabel;
    UILabel *_locationInfoLabel;
    UIImageView *_refreshButton;
    UILabel *_refreshLabel;
    UIView *_line;
}

+ (double)rowHeightForComponent:(id)arg1;
@property(nonatomic) _Bool isRefreshing; // @synthesize isRefreshing=_isRefreshing;
@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
@property(retain, nonatomic) UILabel *refreshLabel; // @synthesize refreshLabel=_refreshLabel;
@property(retain, nonatomic) UIImageView *refreshButton; // @synthesize refreshButton=_refreshButton;
@property(retain, nonatomic) UILabel *locationInfoLabel; // @synthesize locationInfoLabel=_locationInfoLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)refreshLocation;
- (id)signalForQueryDetailWtihLocationId:(id)arg1;
- (void)bindComponent:(id)arg1;
- (void)layout;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

