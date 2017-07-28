//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXComponent.h"

#import "TBHCElevatorHeaderViewDelegate.h"

@class NSArray, NSString;

@interface WXTabHeader : WXComponent <TBHCElevatorHeaderViewDelegate>
{
    _Bool _selectEvent;
    NSString *_textColor;
    NSString *_textHighlightColor;
    NSString *_backgroundColor;
    NSArray *_data;
    long long _selectedIndex;
}

@property(nonatomic) _Bool selectEvent; // @synthesize selectEvent=_selectEvent;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) NSArray *data; // @synthesize data=_data;
@property(retain, nonatomic) NSString *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) NSString *textHighlightColor; // @synthesize textHighlightColor=_textHighlightColor;
@property(retain, nonatomic) NSString *textColor; // @synthesize textColor=_textColor;
- (void).cxx_destruct;
- (void)didSelectedCategoryWithIndex:(unsigned long long)arg1 target:(id)arg2;
- (void)updateHeaderView:(id)arg1;
- (void)removeEvent:(id)arg1;
- (void)addEvent:(id)arg1;
- (void)updateStyles:(id)arg1;
- (void)updateAttributes:(id)arg1;
- (void)viewDidLoad;
- (id)loadView;
- (id)initWithRef:(id)arg1 type:(id)arg2 styles:(id)arg3 attributes:(id)arg4 events:(id)arg5 weexInstance:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

