//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBSDKPushCenterModel.h"

@class NSString;

@interface TBSDKPushCenterBindUserModel : TBSDKPushCenterModel
{
    _Bool _bindOrUnBindCtr;
    NSString *_sToken;
}

@property(retain, nonatomic) NSString *sToken; // @synthesize sToken=_sToken;
@property(nonatomic) _Bool bindOrUnBindCtr; // @synthesize bindOrUnBindCtr=_bindOrUnBindCtr;
- (void).cxx_destruct;
- (id)unbindUserIntoPushCenter;
- (void)main;
- (id)bindUserIntoPushCenterWithSToken:(id)arg1;

@end

