//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DynamicItemViewModel, KTVDynamicCommentCell, KTVDynamicView, KTVInputTextView, KTVMoreCommentCell, KTVOpusModel, KtvDynamicTableCell, NSAttributedString, NSString;

@protocol KTVDynamicViewDataSource <NSObject>
- (NSString *)dynamicView:(KTVDynamicView *)arg1 opusNameForDynamicIndex:(long long)arg2;
- (_Bool)dynamicView:(KTVDynamicView *)arg1 opusIsPlayingForDynamicIndex:(long long)arg2;
- (KTVOpusModel *)dynamicView:(KTVDynamicView *)arg1 opusModelForDynamicIndex:(long long)arg2;
- (NSString *)dynamicView:(KTVDynamicView *)arg1 opusPlayUrlStringForDynamicIndex:(long long)arg2 compelete:(void (^)(_Bool, NSString *))arg3;
- (NSAttributedString *)dynamicView:(KTVDynamicView *)arg1 commentDescriptionForDynamicIndex:(long long)arg2 andCommentIndex:(long long)arg3;
- (NSAttributedString *)dynamicView:(KTVDynamicView *)arg1 dynamicDescriptionForIndex:(long long)arg2;
- (void)dynamicView:(KTVDynamicView *)arg1 configureCommentInputView:(KTVInputTextView *)arg2 forDynamicIndex:(long long)arg3 andCommentIndex:(long long)arg4;
- (void)dynamicView:(KTVDynamicView *)arg1 configureCommentCell:(KTVDynamicCommentCell *)arg2 forDynamicIndex:(long long)arg3 andCommentIndex:(long long)arg4;
- (void)dynamicView:(KTVDynamicView *)arg1 configureMoreInteractionCell:(KTVMoreCommentCell *)arg2 forDynamicIndex:(long long)arg3;
- (void)dynamicView:(KTVDynamicView *)arg1 configureDynamicCell:(KtvDynamicTableCell *)arg2 forDynamicIndex:(long long)arg3;
- (long long)rTypeOfOpusForDynamicView:(KTVDynamicView *)arg1 forDynamicIndex:(long long)arg2;
- (long long)typeOfOpusForDynamicView:(KTVDynamicView *)arg1 forDynamicIndex:(long long)arg2;
- (_Bool)ifInvitedByMeDynamicView:(KTVDynamicView *)arg1 forDynamicIndex:(long long)arg2;
- (_Bool)haveInvitedTapForDynamicView:(KTVDynamicView *)arg1 forDynamicIndex:(long long)arg2;
- (_Bool)haveMoreTotalCommentForDynamicView:(KTVDynamicView *)arg1 forDynamicIndex:(long long)arg2;
- (_Bool)haveMoreCommentForDynamicView:(KTVDynamicView *)arg1 forDynamicIndex:(long long)arg2;
- (_Bool)haveMoreThanOnePageCommentForDynamicView:(KTVDynamicView *)arg1 forDynamicIndex:(long long)arg2;
- (_Bool)needShowBottomLine:(KTVDynamicView *)arg1 forDynamicIndex:(long long)arg2;
- (_Bool)isInvitedByMe:(KTVDynamicView *)arg1 forDynamicIndex:(long long)arg2;
- (_Bool)userInterActionEnable:(KTVDynamicView *)arg1 forDynamicIndex:(long long)arg2;
- (_Bool)havePraiserForDynamicView:(KTVDynamicView *)arg1 forDynamicIndex:(long long)arg2;
- (long long)numberOfCommentOfDynamicComments:(KTVDynamicView *)arg1 forDynamicIndex:(long long)arg2;
- (_Bool)haveMoreDataDynamicView:(KTVDynamicView *)arg1;
- (long long)numberOfDynamics:(KTVDynamicView *)arg1;
- (DynamicItemViewModel *)getDynamicItemIndex:(long long)arg1;

@optional
- (long long)numberOfCommentCount:(KTVDynamicView *)arg1 forDynamicIndex:(long long)arg2;
@end
