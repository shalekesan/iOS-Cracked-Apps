//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DGPRealTimeCell.h"

@class NSString, UIButton;

@interface DGPRealTimeAndButtonCell : DGPRealTimeCell
{
    UIButton *_moreLineButton;
    UIButton *_otherBusButton;
    NSString *_arrivalInfo;
    NSString *_otherBusInfo;
}

@property(retain, nonatomic) NSString *otherBusInfo; // @synthesize otherBusInfo=_otherBusInfo;
@property(retain, nonatomic) NSString *arrivalInfo; // @synthesize arrivalInfo=_arrivalInfo;
@property(retain, nonatomic) UIButton *otherBusButton; // @synthesize otherBusButton=_otherBusButton;
@property(retain, nonatomic) UIButton *moreLineButton; // @synthesize moreLineButton=_moreLineButton;
- (void).cxx_destruct;
- (id)attrTextForText:(id)arg1 leftIntend:(double)arg2;
- (void)otherButtonPressed;
- (void)etaButtonPressed;
- (void)configCell;
- (void)configConstraints;
- (void)setupSubviews;

@end
