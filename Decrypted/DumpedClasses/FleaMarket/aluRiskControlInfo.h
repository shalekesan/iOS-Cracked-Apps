//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "aluJsonableObject.h"

@class NSString;

@interface aluRiskControlInfo : aluJsonableObject
{
    NSString *_apdId;
    NSString *_umidToken;
    NSString *_wua;
    NSString *_t;
}

@property(copy, nonatomic) NSString *t; // @synthesize t=_t;
@property(copy, nonatomic) NSString *wua; // @synthesize wua=_wua;
@property(copy, nonatomic) NSString *umidToken; // @synthesize umidToken=_umidToken;
@property(copy, nonatomic) NSString *apdId; // @synthesize apdId=_apdId;
- (void).cxx_destruct;

@end

