//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FMQuestionDetailDO, NSString;

@interface FMQuestionDetailResponseDO : NSObject
{
    NSString *_serverTime;
    FMQuestionDetailDO *_content;
}

@property(retain, nonatomic) FMQuestionDetailDO *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *serverTime; // @synthesize serverTime=_serverTime;
- (void).cxx_destruct;

@end

