//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KTVObjectModel.h"

@class NSString;

@interface KTVMyJudgeDaySummary : KTVObjectModel
{
    _Bool _isOpenCard;
    long long _totalNum;
    long long _winRate;
    long long _winNum;
    long long _medal;
    NSString *_dateStr;
    long long _giftId;
    long long _giftNum;
    long long _dateTime;
    long long _hasResult;
}

@property(nonatomic) _Bool isOpenCard; // @synthesize isOpenCard=_isOpenCard;
@property(nonatomic) long long hasResult; // @synthesize hasResult=_hasResult;
@property(nonatomic) long long dateTime; // @synthesize dateTime=_dateTime;
@property(nonatomic) long long giftNum; // @synthesize giftNum=_giftNum;
@property(nonatomic) long long giftId; // @synthesize giftId=_giftId;
@property(retain, nonatomic) NSString *dateStr; // @synthesize dateStr=_dateStr;
@property(nonatomic) long long medal; // @synthesize medal=_medal;
@property(nonatomic) long long winNum; // @synthesize winNum=_winNum;
@property(nonatomic) long long winRate; // @synthesize winRate=_winRate;
@property(nonatomic) long long totalNum; // @synthesize totalNum=_totalNum;
- (void).cxx_destruct;
- (long long)changeTimeToTimeSp:(id)arg1;

@end
