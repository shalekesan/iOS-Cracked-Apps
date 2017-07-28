//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FMTableComponent.h"

@class FMItemCommentDO, FMItemDetailComponentDO, NSString;

@interface FMTopicDetailComponent : FMTableComponent
{
    _Bool _isRequest;
    _Bool _toComment;
    NSString *_topicId;
    FMItemDetailComponentDO *_componentDO;
    FMItemCommentDO *_currentForReplyItemCommentDO;
    unsigned long long _currentCommentType;
    NSString *_title;
}

@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool toComment; // @synthesize toComment=_toComment;
@property(nonatomic) unsigned long long currentCommentType; // @synthesize currentCommentType=_currentCommentType;
@property(retain, nonatomic) FMItemCommentDO *currentForReplyItemCommentDO; // @synthesize currentForReplyItemCommentDO=_currentForReplyItemCommentDO;
@property(retain, nonatomic) FMItemDetailComponentDO *componentDO; // @synthesize componentDO=_componentDO;
@property(nonatomic) _Bool isRequest; // @synthesize isRequest=_isRequest;
@property(copy, nonatomic) NSString *topicId; // @synthesize topicId=_topicId;
- (void).cxx_destruct;
- (id)itemDO;
- (id)getTitle;
- (void)requestMoreComment;
- (void)requestComment;
- (void)updateComment:(_Bool)arg1;
- (void)buildItem;
- (void)setupBuilder:(id)arg1;
- (void)requestTopicDetail;
- (void)refresh;
- (void)bindData;
- (void)setupEventListners;
- (id)init;

@end

