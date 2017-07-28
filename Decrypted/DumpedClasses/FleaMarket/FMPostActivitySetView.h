//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "FMComponentCellProtocol.h"
#import "FMDatePickerDelegate.h"

@class FMDatePicker, FMPostActivityCellView, NSString, UIView;

@interface FMPostActivitySetView : UITableViewCell <FMDatePickerDelegate, FMComponentCellProtocol>
{
    UIView *_activityView;
    FMPostActivityCellView *_activityStartTimeCell;
    FMPostActivityCellView *_activityEndTimeCell;
    FMDatePicker *_startDatePicker;
    FMDatePicker *_endDatePicker;
    FMPostActivityCellView *_activityLocationCell;
    long long _viewState;
}

+ (double)rowHeightForComponent:(id)arg1;
@property(nonatomic) long long viewState; // @synthesize viewState=_viewState;
@property(retain, nonatomic) FMPostActivityCellView *activityLocationCell; // @synthesize activityLocationCell=_activityLocationCell;
@property(retain, nonatomic) FMDatePicker *endDatePicker; // @synthesize endDatePicker=_endDatePicker;
@property(retain, nonatomic) FMDatePicker *startDatePicker; // @synthesize startDatePicker=_startDatePicker;
@property(retain, nonatomic) FMPostActivityCellView *activityEndTimeCell; // @synthesize activityEndTimeCell=_activityEndTimeCell;
@property(retain, nonatomic) FMPostActivityCellView *activityStartTimeCell; // @synthesize activityStartTimeCell=_activityStartTimeCell;
@property(retain, nonatomic) UIView *activityView; // @synthesize activityView=_activityView;
- (void).cxx_destruct;
- (void)fmDatePickerConfirm:(id)arg1;
- (id)createLineWithTopMarignView:(id)arg1 hasLeftMargin:(_Bool)arg2;
- (id)createPostCellWithTopMarignView:(id)arg1;
- (void)setupViews;
- (id)dateFormatter;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)bindComponent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

