//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface FMMetaCommentDO : NSObject
{
    _Bool _isTopBidComment;
    NSString *_itemId;
    NSString *_commentId;
    NSString *_replyCommentId;
    NSString *_sellerId;
    NSString *_buyerId;
    NSString *_sellerNick;
    NSString *_buyerNick;
    NSString *_sellerComment;
    NSString *_buyerComment;
}

@property(nonatomic) _Bool isTopBidComment; // @synthesize isTopBidComment=_isTopBidComment;
@property(copy, nonatomic) NSString *buyerComment; // @synthesize buyerComment=_buyerComment;
@property(copy, nonatomic) NSString *sellerComment; // @synthesize sellerComment=_sellerComment;
@property(copy, nonatomic) NSString *buyerNick; // @synthesize buyerNick=_buyerNick;
@property(copy, nonatomic) NSString *sellerNick; // @synthesize sellerNick=_sellerNick;
@property(copy, nonatomic) NSString *buyerId; // @synthesize buyerId=_buyerId;
@property(copy, nonatomic) NSString *sellerId; // @synthesize sellerId=_sellerId;
@property(copy, nonatomic) NSString *replyCommentId; // @synthesize replyCommentId=_replyCommentId;
@property(copy, nonatomic) NSString *commentId; // @synthesize commentId=_commentId;
@property(copy, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
- (void).cxx_destruct;

@end

