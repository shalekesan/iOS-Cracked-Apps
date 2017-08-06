//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableOrderedSet, NSString;

@interface ArticleMomentCommentManager : NSObject
{
    _Bool _loading;
    _Bool _hasMore;
    _Bool _isNewComment;
    _Bool _isFromComment;
    int _currentOffset;
    NSString *_momentID;
    NSMutableOrderedSet *_commentSet;
    NSMutableOrderedSet *_hotCommentSet;
    NSMutableOrderedSet *_commentLayoutSet;
    NSMutableOrderedSet *_hotCommentLayoutSet;
}

+ (void)startDiggCommentWithCommentID:(id)arg1 withFinishBlock:(CDUnknownBlockType)arg2;
+ (void)startPostCommentForComment:(id)arg1 CommentID:(id)arg2 commentUserID:(id)arg3 content:(id)arg4 source:(unsigned long long)arg5 isForward:(_Bool)arg6 withFinishBlock:(CDUnknownBlockType)arg7;
@property(nonatomic) _Bool isFromComment; // @synthesize isFromComment=_isFromComment;
@property(nonatomic) _Bool isNewComment; // @synthesize isNewComment=_isNewComment;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(nonatomic) int currentOffset; // @synthesize currentOffset=_currentOffset;
@property(retain, nonatomic) NSMutableOrderedSet *hotCommentLayoutSet; // @synthesize hotCommentLayoutSet=_hotCommentLayoutSet;
@property(retain, nonatomic) NSMutableOrderedSet *commentLayoutSet; // @synthesize commentLayoutSet=_commentLayoutSet;
@property(retain, nonatomic) NSMutableOrderedSet *hotCommentSet; // @synthesize hotCommentSet=_hotCommentSet;
@property(retain, nonatomic) NSMutableOrderedSet *commentSet; // @synthesize commentSet=_commentSet;
@property(nonatomic, getter=isLoading) _Bool loading; // @synthesize loading=_loading;
@property(retain, nonatomic) NSString *momentID; // @synthesize momentID=_momentID;
- (void).cxx_destruct;
- (void)handleReplyCommentDigWithCommentID:(id)arg1 replayID:(id)arg2 finishBlock:(CDUnknownBlockType)arg3;
- (void)fetchCommentDetailListWithCommentID:(id)arg1 count:(int)arg2 width:(double)arg3 finishBlock:(CDUnknownBlockType)arg4;
- (void)deleteCommentLayout:(id)arg1;
- (void)deleteComment:(id)arg1;
- (void)insertCommentLayout:(id)arg1;
- (void)insertComment:(id)arg1;
- (id)commentModelForID:(id)arg1;
- (void)refreshLayoutsWithWidth:(double)arg1;
- (id)hotCommentLayouts;
- (id)commentLayouts;
- (id)hotComments;
- (id)comments;
- (void)startPostCommentWithCommentID:(id)arg1 commentUserID:(id)arg2 content:(id)arg3 isForward:(_Bool)arg4 withFinishBlock:(CDUnknownBlockType)arg5;
- (void)startLoadMoreCommentWithCount:(int)arg1 width:(double)arg2 finishBlock:(CDUnknownBlockType)arg3;
- (id)initWithMomentID:(id)arg1 isNewComment:(_Bool)arg2 isFromeComment:(_Bool)arg3;
- (id)initWithMomentID:(id)arg1 isNewComment:(_Bool)arg2;
- (void)dealloc;

@end
