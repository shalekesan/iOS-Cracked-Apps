//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KFViewModelObject.h"

@class KTVBaseNetHelper, NSString;

@interface KFADImageTextVM : KFViewModelObject
{
    long long _accompanyId;
    NSString *_url;
    NSString *_content;
    KTVBaseNetHelper *_netHelper;
}

@property(retain, nonatomic) KTVBaseNetHelper *netHelper; // @synthesize netHelper=_netHelper;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) long long accompanyId; // @synthesize accompanyId=_accompanyId;
- (void).cxx_destruct;
- (void)fetchADInfoSuccessed:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (id)init;

@end
