//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTCacheBean.h"

@class NSString;

@interface CTOtherThirdAccountCacheBean : CTCacheBean
{
    int _result;
    NSString *_resultMessage;
    NSString *_uid;
    NSString *_accessToken;
    NSString *_openID;
    NSString *_bindMobileNum;
    NSString *_bindMail;
    NSString *_trdPartyMobileNum;
}

+ (id)getInstance;
@property(copy, nonatomic) NSString *trdPartyMobileNum; // @synthesize trdPartyMobileNum=_trdPartyMobileNum;
@property(copy, nonatomic) NSString *bindMail; // @synthesize bindMail=_bindMail;
@property(copy, nonatomic) NSString *bindMobileNum; // @synthesize bindMobileNum=_bindMobileNum;
@property(copy, nonatomic) NSString *openID; // @synthesize openID=_openID;
@property(copy, nonatomic) NSString *accessToken; // @synthesize accessToken=_accessToken;
@property(copy, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(copy, nonatomic) NSString *resultMessage; // @synthesize resultMessage=_resultMessage;
@property(nonatomic) int result; // @synthesize result=_result;
- (void).cxx_destruct;
- (void)clean;
- (void)initCache;
- (id)init;

@end
