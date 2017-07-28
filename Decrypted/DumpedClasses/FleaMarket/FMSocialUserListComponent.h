//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FMGeneralPageTableComponent.h"

@class FMSocialAttentionRequestParam, NSString;

@interface FMSocialUserListComponent : FMGeneralPageTableComponent
{
    NSString *serviceType;
    FMSocialAttentionRequestParam *_param;
    long long _verifyStatus;
    NSString *_verifyUrl;
    NSString *_pageTitle;
}

@property(copy, nonatomic) NSString *pageTitle; // @synthesize pageTitle=_pageTitle;
@property(copy, nonatomic) NSString *verifyUrl; // @synthesize verifyUrl=_verifyUrl;
@property(nonatomic) long long verifyStatus; // @synthesize verifyStatus=_verifyStatus;
@property(retain, nonatomic) FMSocialAttentionRequestParam *param; // @synthesize param=_param;
- (void).cxx_destruct;
- (id)emptyText;
- (id)buildCellCompontFromArray:(id)arg1;
- (id)buildSectionComponentFromArray:(id)arg1 isPulling:(_Bool)arg2;
- (void)requestSuccessHandle:(id)arg1;
- (id)getParameters;
- (_Bool)isNeedLogin;
- (double)cacheTime;
- (Class)returnClass;
- (id)mtopApiVersion;
- (id)mtopApi;

@end

