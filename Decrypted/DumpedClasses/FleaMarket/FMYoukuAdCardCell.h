//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FMAdvBaseCardCell.h"

#import "XAdSDKAppContextDelegate.h"

@class NSString, XAdSDKAppContext;

@interface FMYoukuAdCardCell : FMAdvBaseCardCell <XAdSDKAppContextDelegate>
{
    XAdSDKAppContext *_context;
}

+ (double)rowHeightForComponent:(id)arg1;
@property(retain, nonatomic) XAdSDKAppContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)onOpenWebView:(id)arg1;
- (void)onAdFail;
- (void)onAdSuccess;
- (void)didSelectCell;
- (void)bindComponent:(id)arg1;
- (void)moreActionButtonClick:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

