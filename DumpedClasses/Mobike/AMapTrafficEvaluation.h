//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AMapSearchObject.h"

@class NSString;

@interface AMapTrafficEvaluation : AMapSearchObject
{
    NSString *_evaluationDescription;
    long long _status;
    NSString *_expedite;
    NSString *_congested;
    NSString *_blocked;
    NSString *_unknown;
}

+ (id)ajo_mapping;
@property(copy, nonatomic) NSString *unknown; // @synthesize unknown=_unknown;
@property(copy, nonatomic) NSString *blocked; // @synthesize blocked=_blocked;
@property(copy, nonatomic) NSString *congested; // @synthesize congested=_congested;
@property(copy, nonatomic) NSString *expedite; // @synthesize expedite=_expedite;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *evaluationDescription; // @synthesize evaluationDescription=_evaluationDescription;
- (void).cxx_destruct;

@end

